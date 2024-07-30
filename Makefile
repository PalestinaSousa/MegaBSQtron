# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miperez- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 10:34:39 by miperez-          #+#    #+#              #
#    Updated: 2024/07/28 13:52:50 by nlyamani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# Nombre del compilador
CC = cc

# Flags de compilación
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente
SRC = main.c

# Archivos objeto
OBJ = $(SRC:.c=.o)

# Nombre del ejecutable
NAME = BSQ

# Regla por defecto
all: $(NAME)

# Regla para compilar el ejecutable
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# Regla para limpiar los archivos objeto
clean:
	rm -f $(OBJ)

# Regla para limpiar todo (archivos objeto y ejecutable)
fclean: clean
	rm -f $(NAME)

# Regla para recompilar desde cero
re: fclean all

.PHONY: all clean fclean re

