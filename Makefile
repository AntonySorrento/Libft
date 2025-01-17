# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asorrent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/23 12:06:37 by asorrent          #+#    #+#              #
#    Updated: 2021/06/18 08:39:05 by asorrent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isprint.c ft_memmove.c ft_strlen.c  \
	  ft_toupper.c ft_memccpy.c ft_memset.c  ft_strncmp.c \
	  ft_atoi.c ft_isascii.c ft_memchr.c  ft_strchr.c  \
	  ft_strnstr.c ft_bzero.c  ft_memcmp.c  ft_strlcat.c \
	  ft_strrchr.c ft_isalnum.c ft_isdigit.c ft_memcpy.c  \
	  ft_strlcpy.c ft_tolower.c ft_calloc.c ft_strdup.c \
	  ft_substr.c ft_strjoin.c ft_calloc.c ft_strtrim.c \
	  ft_split.c ft_itoa.c ft_strcpy.c ft_strmapi.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	  ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

BONUS = ft_lstnew.c ft_lstadd_front.c \
	  ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	  ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	  ft_lstmap.c ft_lstmap.c \

BONUS_OBJS = $(BONUS:.c=.o)

.c.o:
		gcc $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): 	$(OBJ)
			ar rc $(NAME) $(OBJ)

all:		$(NAME)
clean: 
			rm -rf $(OBJ)

fclean: 	clean
			rm -rf $(NAME)

re: 		fclean all

bonus:		$(OBJ) $(BONUS_OBJS) 
			ar rc $(NAME) $(OBJ) $(BONUS_OBJS)


.PHONY : all fclean clean re bonus
