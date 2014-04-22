include ../../compile.mk
program_NAME := libGtop24.a
program_C_SRCS := $(wildcard *.c)
program_C_OBJS := ${program_C_SRCS:.c=.o}
program_OBJS := $(program_C_OBJS)

.PHONY: all clean distclean

all: $(program_NAME)

$(program_NAME): $(program_OBJS)
	ar rc libGtop24.a *.o
	mv libGtop24.a ../../lib

clean:
	@- $(RM) $(program_NAME)
	@- $(RM) $(program_OBJS)

distclean: clean
