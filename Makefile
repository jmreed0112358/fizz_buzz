#Generic Makefile - usable on either Windows or Linux/Unix
# WRITTEN BY: Michael Main (main@colorado.edu), Sep 17, 2000
#
# This makefile is used as follows to regenerate files for the demo2 program:
#   make throttle.o   --  Regenerates throttle.o by compiling
#   make demo2.o      --  Regenerates demo2.o by compiling
#   make demo2.exe    --  Regenerates the executable demo2 file by compiling
#   make              --  Same as "make demo2.exe"
#
# Two special targets may also be used with this makefile:
#   make all          --  Regenerates all files listed above
#   make clean        --  Erases all files listed above
#
# All compilations occur with -Wall and -gstabs.
# The clean command uses rm to remove all expendable files (rm is part of
# the cs1300 compiler tools from www.cs.colorado.edu/~main/cs1300/README.html).

# This section sets the $(SUFFIX) and $RM) variables depending on whether
# the operating system is Windows or Unix.

ifdef COMSPEC
  SUFFIX = .exe
  RM = del
else
  SUFFIX =
  RM = rm -f
endif

APP_NAME = fizz_buzz
STATE = .
CFLAGS = -Wall -g -c
OFLAGS = -Wall -g -o
IFLAGS =
LFLAGS =

all: fizz_buzz fizz_buzz_unit

fizz_buzz: fizz_buzz.o fizz_buzz_main.o
	g++ $(OFLAGS) fizz_buzz fizz_buzz.o fizz_buzz_main.o $(LFLAGS)

fizz_buzz_unit: fizz_buzz.o fizz_buzz_unit.o
	g++ $(OFLAGS) fizz_buzz_unit fizz_buzz.o fizz_buzz_unit.o $(LDFLAGS)

fizz_buzz_main.o: $(STATE)/fizz_buzz_main.cxx
	g++ $(CFLAGS) $(IFLAGS) $(STATE)/fizz_buzz_main.cxx

fizz_buzz.o: $(STATE)/fizz_buzz.cxx
	g++ $(CFLAGS) $(IFLAGS) $(STATE)/fizz_buzz.cxx

fizz_buzz_unit.o: $(STATE)/fizz_buzz_unit.cxx
	g++ $(CFLAGS) $(IFLAGS) $(STATE)/fizz_buzz_unit.cxx

clean:
	$(RM) fizz_buzz
	$(RM) fizz_buzz_unit
	$(RM) *.o

