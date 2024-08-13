/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:59:00 by lgandari          #+#    #+#             */
/*   Updated: 2024/08/13 19:33:33 by lgandari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTRA_H
# define EXTRA_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

# include "../inc/libft.h"
# include "../inc/ft_printf.h"

void	free_matrix(char **matrix);
void	print_matrix(char **matrix);
char	**ft_matrixdup(char **old_matrix);
size_t	ft_arrlen(void **arr);

int		ft_strcmp(const char *s1, const char *s2);
int		print_error(char *msg);
int		ft_countchar(const char *s, char c);
bool	ft_strdigit(const char *str);
char	*ft_strndup(const char *s, size_t n);
char	*ft_strjoin_free(char *s1, char *s2);
char	*ft_substr_free(char *s, unsigned int start, size_t len);

#endif
