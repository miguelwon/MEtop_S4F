include ../../compile.mk
program_NAME := libLqtop24.a
program_C_SRCS := $(wildcard *.c)
program_C_OBJS := ${program_C_SRCS:.c=.o}
program_OBJS := $(program_C_OBJS) 

.PHONY: all clean distclean

all: $(program_NAME)

$(program_NAME): $(program_OBJS)
	ar rc libLqtop24.a *.o
	mv libLqtop24.a ../../lib
#	$(LINK.cc) $(program_OBJS) -o $(program_NAME)

clean:
	@- $(RM) $(program_NAME)
	@- $(RM) $(program_OBJS)

distclean: clean
