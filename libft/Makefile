# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 12:36:53 by aparvin           #+#    #+#              #
#    Updated: 2022/12/12 10:42:25 by aparvin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	IDIR	= ../include
	CC		= ghc
	CFLAGS	= -I -Wall -Wextra -Werror $(IDIR)

	ODIR	= obj

	_DEPS	= libft.h 
	
	OBJ		= libft.o

	$(ODIR)/%.o: %.c $(DEPS)
			$(CC) -c -o $@ $< $(CFLAGS)

	Makefile: $(OBJ) 
			$(CC) -o $@ $^ $(CFLAGSMakefile)

	.PHONY: clean

	clean:
			rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~


# The name of the library
LIBRARY_NAME = libMyLib.so

# The source files for the library
SRC_FILES = myLib.c

# The object files
OBJ_FILES = $(SRC_FILES:.c=.o)

# The compiler and flags
CC = gcc
CFLAGS = -Wall -fPIC

# The target
all: $(LIBRARY_NAME)

# The library target
$(LIBRARY_NAME): $(OBJ_FILES)
	$(CC) -shared -o $(LIBRARY_NAME) $(OBJ_FILES)

# The object files
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(LIBRARY_NAME) $(OBJ_FILES)

