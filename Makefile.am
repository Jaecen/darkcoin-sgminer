
ACLOCAL_AMFLAGS = -I m4

JANSSON_CPPFLAGS= -I$(top_builddir)/compat/jansson-2.5/src -I$(top_srcdir)/compat/jansson-2.5/src

EXTRA_DIST	= example.conf m4/gnulib-cache.m4 \
		  ADL_SDK/readme.txt api-example.php miner.php	\
		  API.class API.java api-example.c hexdump.c \
		  doc/API doc/FAQ doc/GPU doc/SCRYPT doc/windows-build.txt

SUBDIRS		= lib compat ccan

bin_PROGRAMS     = sgminer

sgminer_CPPFLAGS = $(PTHREAD_FLAGS) -fno-strict-aliasing $(JANSSON_CPPFLAGS)
sgminer_LDFLAGS  = $(PTHREAD_FLAGS)
sgminer_LDADD    = $(DLOPEN_FLAGS) @LIBCURL_LIBS@ @JANSSON_LIBS@ @PTHREAD_LIBS@ \
		  @OPENCL_LIBS@ @NCURSES_LIBS@ @PDCURSES_LIBS@ @WS2_LIBS@ \
		  @MM_LIBS@ @RT_LIBS@ @MATH_LIBS@ lib/libgnu.a ccan/libccan.a

sgminer_CPPFLAGS += -I$(top_builddir)/lib -I$(top_srcdir)/lib @OPENCL_FLAGS@

if !HAVE_WINDOWS
sgminer_CPPFLAGS += @LIBCURL_CFLAGS@
endif

sgminer_CPPFLAGS += $(ADL_CPPFLAGS)

sgminer_SOURCES := sgminer.c
sgminer_SOURCES	+= api.c
sgminer_SOURCES	+= elist.h miner.h compat.h bench_block.h
sgminer_SOURCES	+= util.c util.h uthash.h
sgminer_SOURCES	+= sha2.c sha2.h
sgminer_SOURCES	+= logging.c logging.h
sgminer_SOURCES += driver-opencl.c driver-opencl.h
sgminer_SOURCES += ocl.c ocl.h
sgminer_SOURCES += findnonce.c findnonce.h
sgminer_SOURCES += adl.c adl.h adl_functions.h
sgminer_SOURCES += xcoin.c xcoin.h
sgminer_SOURCES += blake.c blake.h
sgminer_SOURCES += bmw.c bmw.h
sgminer_SOURCES += groestl.c groestl.h
sgminer_SOURCES += skein.c skein.h
sgminer_SOURCES += jh.c jh.h
sgminer_SOURCES += keccak.c keccak.h
sgminer_SOURCES += luffa.c luffa.h
sgminer_SOURCES += cubehash.c cubehash.h
sgminer_SOURCES += shavite.c shavite.h
sgminer_SOURCES += simd.c simd.h
sgminer_SOURCES += echo.c echo.h
sgminer_SOURCES += kernel/*.cl

bin_SCRIPTS	= $(top_srcdir)/kernel/*.cl

