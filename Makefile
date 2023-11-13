# Makefile for C project

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -g

# Source files
SRCS = ft_printf.c ft_putptr.c ft_putchar.c ft_putupcase_hex.c ft_putnbr.c ft_putstr.c ft_putdowncase_hex.c ft_putunsignedint.c ft_putpercentsign.c

# Object files
OBJS = $(SRCS:.c=.o)

# Executable name
TARGET = myproject

# Default target
all: build

# Build target
build: $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Clean target
clean:
	rm -f $(OBJS)

# Full clean target
fclean: clean
	rm -f $(TARGET)

# Rebuild target
re: fclean all

# Install target
install:
	# Add installation commands here

# Run target
run:
	./$(TARGET)

# Test target
test:
	# Add test commands here

# Package target
package:
	# Add packaging commands here

# Deploy target
deploy:
	# Add deployment commands here

# Lint target
lint:
	# Add linting commands here

# Checkstyle target
checkstyle:
	# Add checkstyle commands here

# Backup target
backup:
	# Add backup commands here

# Init target
init:
	# Add initialization commands here
