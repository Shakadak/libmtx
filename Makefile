# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npineau <npineau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 12:15:41 by npineau           #+#    #+#              #
#    Updated: 2015/05/18 18:13:16 by npineau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	libmtx.a

### DIRECTORIES ###

DIRSRC		:=	src
DIROBJ		:=	obj
DIRMSC		:=	$(DIRSRC)/msc
DIRMATH		:=	$(DIRSRC)/math
DIRINC		:=	inc

### FILES ###

INC			:=	$(DIRINC)/libmtx.h

### FILES: SOURCES ###

include $(DIRMSC)/sources.mk
include $(DIRMATH)/sources.mk

### FILES: PATHS ###

POBJ		:=	$(addprefix $(DIROBJ)/, $(OBJ))

### ARCHIVE ###

AR			:=	ar
AR_FLAG		:=	-crus
AR_EXEC		=	$(AR) $(AR_FLAG) $@ $^

### COMPILATION ###

C_FLAG		:=	-Wall -Wextra -Werror
I_FLAG		:=	-I $(DIRINC) -I $(DIRFT)/$(DIRINC)
O_FLAG		:=	-O3
C_OPT		=	-o $@ -c $< $(I_FLAG)
COMPIL		=	$(CC) $(C_FLAG) $(O_FLAG) $(C_OPT)

### RULES ###

all: $(NAME)

### RULES: ARCHIVE ###

$(NAME): $(POBJ)
	$(AR_EXEC)
	ranlib $(NAME)

### RULES: MISC ###

$(POBJ): $(LIBFT) |$(DIROBJ)

$(DIROBJ):
	mkdir $(DIROBJ)

clean:
	rm -f $(POBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean re fclean
