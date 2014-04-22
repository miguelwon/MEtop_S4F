include ../../compile.mk
program_NAME := libDtop23.a
program_C_SRCS := $(wildcard *.c)
program_C_OBJS := ${program_C_SRCS:.c=.o}
program_OBJS := $(program_C_OBJS)


.PHONY: all clean distclean

all: $(program_NAME)

$(program_NAME): $(program_OBJS)
	ar rc libDtop23.a *.o
	mv libDtop23.a ../../lib

clean:
	@- $(RM) $(program_NAME)
	@- $(RM) $(program_OBJS)

distclean: clean

