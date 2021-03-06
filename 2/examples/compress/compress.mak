#****************************************************************************
#*                                                                          *
#*  compress.mak                                                            *
#*  ============                                                            *
#*                                                                          *
#****************************************************************************

#****************************************************************************
#*                                                                          *
#*  Define the name of the makefile.                                        *
#*                                                                          *
#****************************************************************************

MAKNAM = compress.mak
#****************************************************************************
#*                                                                          *
#*  Define the directories in which to search for library files.            *
#*                                                                          *
#****************************************************************************
    LIBDRS =
#****************************************************************************
#*                                                                          *
#*  Define the directories in which to search for include files.            *
#*                                                                          *
#****************************************************************************
    INCDRS = -I$(ALGOWC_TOPDIR) / include
#****************************************************************************
#*                                                                          *
#*  Define the library files.                                               *
#*                                                                          *
#****************************************************************************
    LIBFLS =
#****************************************************************************
#*                                                                          *
#*  Define the source files.                                                *
#*                                                                          *
#****************************************************************************
SRCFLS = ex - 1. c
$(ALGOWC_TOPDIR) / source / bit.c
$(ALGOWC_TOPDIR) / source / bitree.c
$(ALGOWC_TOPDIR) / source / heap.c
$(ALGOWC_TOPDIR) / source / huffman.c $(ALGOWC_TOPDIR) / source / lz77.c
#****************************************************************************
#*                                                                          *
#*  Define the object files.                                                *
#*                                                                          *
#****************************************************************************
OBJFLS = ex - 1. o
$(ALGOWC_TOPDIR) / source / bit.o
$(ALGOWC_TOPDIR) / source / bitree.o
$(ALGOWC_TOPDIR) / source / heap.o
$(ALGOWC_TOPDIR) / source / huffman.o $(ALGOWC_TOPDIR) / source / lz77.o
#****************************************************************************
#*                                                                          *
#*  Define the executable.                                                  *
#*                                                                          *
#****************************************************************************
    EXE = ex - 1.ex e
#****************************************************************************
#*                                                                          *
#*  Define the compile and link options.                                    *
#*                                                                          *
#****************************************************************************
    CC = c89 LL = c89 CFLAGS = -D_HPUX_SOURCE LFLAGS =
#****************************************************************************
#*                                                                          *
#*  Define the rules.                                                       *
#*                                                                          *
#****************************************************************************
$(EXE):$(OBJFLS)
    $(LL) $(LFLAGS) - o $ @ $(OBJFLS) $(LIBDRS) $(LIBFLS)

.c.o:
$(CC) $(CFLAGS) - o $ @ -c $(INCDRS) $ < all:
make - f $(MAKNAM) clean make - f $(MAKNAM) depend depend:
makedepend $(INCDRS) - f $(MAKNAM) $(SRCFLS)
    make - f $(MAKNAM) $(EXE)

clean:
-rm $(EXE)
    - rm $(OBJFLS)
#DO NOT DELETE THIS LINE -- make depend depends on it.
