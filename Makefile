# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgandari <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/18 23:12:58 by lgandari          #+#    #+#              #
#    Updated: 2025/03/04 15:11:38 by lgandari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libft_v2.a

LIBFT_DIR   = libft/
GNL_DIR     = get_next_line/
PRINTF_DIR  = ft_printf/
EXTRA_DIR	= extra/
OBJ_DIR     = obj/
INC_DIR     = inc/

GREEN=\033[0;32m
RED=\033[0;31m
NC=\033[0m

LIBNAME = $(NAME)

LIBFT_SRCS = $(addprefix $(LIBFT_DIR), \
		ft_atoi.c         ft_lstclear.c     ft_memset.c       ft_strlcpy.c \
		ft_bzero.c        ft_lstdelone.c    ft_putchar_fd.c   ft_strlen.c  \
		ft_calloc.c       ft_lstiter.c      ft_putendl_fd.c   ft_strmapi.c \
		ft_isalnum.c      ft_lstlast.c      ft_putnbr_fd.c    ft_strncmp.c \
		ft_isalpha.c      ft_lstmap.c       ft_putstr_fd.c    ft_strnstr.c \
		ft_isascii.c      ft_lstnew.c       ft_split.c        ft_strrchr.c \
		ft_isdigit.c      ft_lstsize.c      ft_strchr.c       ft_strtrim.c \
		ft_isprint.c      ft_memchr.c       ft_strdup.c       ft_substr.c  \
		ft_itoa.c         ft_memcmp.c       ft_striteri.c     ft_tolower.c \
		ft_lstadd_back.c  ft_memcpy.c       ft_strjoin.c      ft_toupper.c \
		ft_lstadd_front.c ft_memmove.c      ft_strlcat.c	  ft_strcpy.c)

GNL_SRCS = $(addprefix $(GNL_DIR), \
		get_next_line.c)

PRINTF_SRCS = $(addprefix $(PRINTF_DIR), \
		ft_printf.c ft_printf_putnbr.c ft_printf_utils.c)

EXTRA_SRCS	= $(addprefix $(EXTRA_DIR), \
		free_matrix.c	ft_strcmp.c			print_error.c	ft_arrlen.c		\
		ft_countchar.c	ft_strdigit.c		ft_matrixdup.c	ft_strndup.c	\
		print_matrix.c	ft_strjoin_free.c	ft_substr_free.c	append_str.c \
		ft_check_extension.c	ft_memdup.c)

OBJ_LIBFT	= $(addprefix $(OBJ_DIR), $(LIBFT_SRCS:$(LIBFT_DIR)%.c=%.o))
OBJ_GNL		= $(addprefix $(OBJ_DIR), $(GNL_SRCS:$(GNL_DIR)%.c=%.o))
OBJ_PRINTF	= $(addprefix $(OBJ_DIR), $(PRINTF_SRCS:$(PRINTF_DIR)%.c=%.o))
OBJ_EXTRA	= $(addprefix $(OBJ_DIR), $(EXTRA_SRCS:$(EXTRA_DIR)%.c=%.o))

OBJ = $(OBJ_LIBFT) $(OBJ_GNL) $(OBJ_PRINTF) $(OBJ_EXTRA)

CC = cc

CFLAGS = -Wall -Wextra -Werror
DFLAGS = -g3 -fsanitize=address

IFLAGS = -I$(INC_DIR) -I$(INC_DIR)libft -I$(INC_DIR)get_next_line \
		 -I$(INC_DIR)ft_printf -I$(INC_DIR)extra

TOTAL_FILES  := $(words $(LIBFT_SRCS) $(GNL_SRCS) $(PRINTF_SRCS) $(EXTRA_SRCS))
CURRENT_FILE := 0

define progress_bar
    @printf "\r$(GREEN)Compiling libft_v2  [%-$(TOTAL_FILES)s]%-10s%d%%$(NC)" $$(for i in $$(seq 1 $(1)); do printf "#"; done) "" $(shell echo $$((($(1) * 100) / $(TOTAL_FILES))))
		@if [ $(1) -eq $(TOTAL_FILES) ]; then echo ""; fi
endef

$(OBJ_DIR)%.o: $(LIBFT_DIR)%.c
		@mkdir -p $(dir $@)
		@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
		$(call progress_bar,$(shell echo $$(($(CURRENT_FILE) + 1))))
		@$(eval CURRENT_FILE=$(shell echo $$(($(CURRENT_FILE) + 1))))

$(OBJ_DIR)%.o: $(GNL_DIR)%.c
		@mkdir -p $(dir $@)
		@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
		$(call progress_bar,$(shell echo $$(($(CURRENT_FILE) + 1))))
		@$(eval CURRENT_FILE=$(shell echo $$(($(CURRENT_FILE) + 1))))

$(OBJ_DIR)%.o: $(PRINTF_DIR)%.c
		@mkdir -p $(dir $@)
		@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
		$(call progress_bar,$(shell echo $$(($(CURRENT_FILE) + 1))))
		@$(eval CURRENT_FILE=$(shell echo $$(($(CURRENT_FILE) + 1))))

$(OBJ_DIR)%.o: $(EXTRA_DIR)%.c
		@mkdir -p $(dir $@)
		@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
		$(call progress_bar,$(shell echo $$(($(CURRENT_FILE) + 1))))
		@$(eval CURRENT_FILE=$(shell echo $$(($(CURRENT_FILE) + 1))))

all: $(LIBNAME)

$(LIBNAME): $(OBJ)
		@ar rcs $(LIBNAME) $(OBJ)

clean:
		@$(RM) $(OBJ)
		@rm -rf $(OBJ_DIR)
		@echo "$(RED)Libft cleaned.$(NC)"

fclean: clean
		@$(RM) $(LIBNAME)

re: fclean all
debug: CFLAGS += $(DFLAG)
debug:
	@echo "$(GREEN)Compiling in debug mode...$(NC)"
	@$(RM) $(OBJ) $(LIBNAME)
	@rm -rf $(OBJ_DIR)
	@$(MAKE) all --silent

.PHONY: all clean fclean re debug
