# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 12:36:53 by aparvin           #+#    #+#              #
#    Updated: 2022/12/05 13:15:06 by aparvin          ###   ########.fr        #
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
