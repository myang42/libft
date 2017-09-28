# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myang   <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/27 13:21:11 by myang             #+#    #+#              #
#    Updated: 2017/09/28 16:39:06 by myang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Main
NAME	=	libft.a
AR		=	ar -rcs
CC		=	gcc

ifeq ($(DEBUG), yes)
	FDEBUG	=	-g
endif

WFLAGS	=	-Wall -Wextra -Werror -g
OPTI	=	-I
LS		=	ls -1
GREP	=	grep
MKDIR	=	mkdir -p
RM		=	rm -rf

# Directory
DSRC	=	src
DOBJ	=	obj
DINC	=	includes

# File
FSRC_D	:=	basic_i\
	basic_i2\
	ft_all_lower\
	ft_tolower\
	ft_all_upper\
	ft_bzero\
	ft_countword\
	ft_findme_fromend\
	ft_findme\
	ft_findmestr\
	ft_isalnum\
	ft_isascii\
	ft_isdigit\
	ft_isdigitstr\
	ft_itoa\
	ft_atoi\
	powerten\
	ft_islower\
	ft_isprint\
	ft_isupper\
	ft_isalpha\
	ft_isupper\
	ft_lstdelone\
	list_fill_chain\
	ft_lstdel\
	ft_memccpy\
	ft_memalloc\
	ft_memcpy\
	ft_memdel\
	ft_memcmp\
	ft_memset\
	ft_memmove\
	ft_putstr_fd\
	ft_putchar_fd\
	ft_putendl_fd\
	ft_putendl\
	ft_putnbr\
	ft_putstr\
	ft_puttab\
	ft_strchr\
	ft_strrchr\
	ft_memchr\
	ft_strclr\
	ft_strcpy\
	ft_strdel\
	ft_strcmp\
	ft_strnstr\
	ft_striter\
	ft_striteri\
	ft_strnew\
	ft_putchar\
	ft_strncpy\
	ft_putnbr_fd\
	ft_strnequ\
	ft_strequ\
	ft_strcat\
	ft_strlcat\
	ft_strncat\
	ft_strlen\
	ft_strncmp\
	ft_strstr\
	ft_strtrim\
	one_string\
	ft_strmap\
	ft_strmapi\
	ft_strdup\
	ft_strjoin\
	ft_strsplit\
	ft_strsub\
	gnl

FSRC = $(FSRC_D:%=$(DSRC)/%.c)
FOBJ = $(FSRC_D:%=$(DOBJ)/%.o)

# Transform
FINC	:=	$(addprefix $(OPTI) , $(DINC))

all: $(FOBJ) $(NAME)

$(NAME): $(FOBJ)
	@echo "\033[0;32mOBJS CREATED\033[0m"
	@$(AR) $@ $(FOBJ)
	@echo "\033[1;33m< $(NAME) > CREATED\033[0m"

$(DOBJ)/%.o: $(DSRC)/%.c $(DINC)
	@@$(MKDIR) $(DOBJ)
	@$(CC) $(FDEBUG) $(WFLAGS) -c $< $(FINC) -o $@
	@echo "\\033[0;36m- $@\\033[0m"

clean:
	@$(RM) $(DOBJ)
	@echo "\033[0;31mOBJS DELETED\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[0;33mThe file < $(NAME) > IS DELETED\033[0m"

re: fclean all

.PHONY: all begin clean fclean r
