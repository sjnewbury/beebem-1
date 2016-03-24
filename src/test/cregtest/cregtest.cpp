#include <stdio.h>
#include "cregistry.h"
#include "log.h"
#ifndef _WIN32
#include "fake_registry.h"
#endif

static char *TEST_REG_KEY = "Software\\cregtest";
static char *TEST_VALUE = "TestBinaryValue";
static char *TEST_DATA = "This is some binary data";

#ifndef _WIN32
#define REG_FILENAME "reg.test"

extern "C" {
char *GetUserConfigPath(char *path, size_t len)
{
	strcpy(path, "./");

	return path;
}
};
#endif

int main(int argc, char *argv[])
{
	cRegistry SysReg;
	int dataLen = strlen(TEST_DATA) + 1;
	char dataVal[100];

	if (!SysReg.CreateKey(HKEY_CURRENT_USER, TEST_REG_KEY))
	{
		printf("Failed to create registry key %s\n", TEST_REG_KEY);
	}

	if (!SysReg.SetBinaryValue(HKEY_CURRENT_USER, TEST_REG_KEY, TEST_VALUE, TEST_DATA, &dataLen))
	{
		printf("Failed to set binary value %s\n", TEST_REG_KEY);
	}

	dataLen = sizeof(dataVal);
	if (!SysReg.GetBinaryValue(HKEY_CURRENT_USER, TEST_REG_KEY, TEST_VALUE, dataVal, &dataLen))
	{
		printf("Failed to get binary value %s\n", TEST_REG_KEY);
	}
	else
	{
		printf("Got data value: |%s|\n", dataVal);
	}

#ifndef _WIN32
	SaveFakeRegistry();
#endif

	return 0;
}
