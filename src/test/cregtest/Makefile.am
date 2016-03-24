# Makefile.am for BeebEm

PACKAGE = @PACKAGE@
VERSION = @VERSION@

#INCLUDE = -I@top_srcdir@/src/gui

#AM_CPPFLAGS        = @GTK_CFLAGS@ -I@top_srcdir@/src/gui
#LDADD           = @GTK_LIBS@ @top_srcdir@/src/gui/libeg.a

AM_CPPFLAGS        = @GTK_CFLAGS@ -I@top_srcdir@/src/gui -I@top_srcdir@/src/ -I@top_srcdir@/src/posix
LDADD           = @GTK_LIBS@ @top_srcdir@/src/posix/libos.a @top_srcdir@/src/gui/libeg.a


CXX = @CXX@ -Wall -DDATA_DIR=\"$(pkgdatadir)\" 
CC = @CC@ -Wall -DDATA_DIR=\"$(pkgdatadir)\"

bin_PROGRAMS   = cregtest
cregtest_SOURCES =cregtest.cpp

