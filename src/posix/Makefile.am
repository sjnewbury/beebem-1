CXX = @CXX@ -Wall -DDATA_DIR=\"$(pkgdatadir)\"
CC = @CC@ -Wall -DDATA_DIR=\"$(pkgdatadir)\"

AM_CPPFLAGS = -I@top_srcdir@/src -I@top_srcdir@/src/posix -I@top_srcdir@/src/gui

noinst_LIBRARIES = libos.a
libos_a_SOURCES = windows.h fake_registry.h \
                windows.cpp cregistry.cpp fake_registry.c

