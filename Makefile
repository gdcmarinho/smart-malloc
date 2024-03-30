CC = gcc

CFLAGS = -g -Wall

# File name's library
LIB_NAME = smart_malloc.a

# Exec name
EXAMPLE_NAME = example

# Library's objects
LIB_OBJS = smart_malloc.o

# Example's objects
EXAMPLE_OBJS = example.o

# Default rule
all: $(LIB_NAME) $(EXAMPLE_NAME)

# Compile library
$(LIB_NAME): $(LIB_OBJS)
	ar rcs $(LIB_NAME) $(LIB_OBJS)

# Compile example, linking to library
$(EXAMPLE_NAME): $(EXAMPLE_OBJS) $(LIB_NAME)
	$(CC) $(CFLAGS) -o $(EXAMPLE_NAME) $(EXAMPLE_OBJS) -L. -lsmartmalloc

# Generic rule to compile any .c in .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean temp files and binaries
clean:
	rm -f *.o $(LIB_NAME) $(EXAMPLE_NAME)

$(EXAMPLE_OBJS): $(LIB_NAME)
