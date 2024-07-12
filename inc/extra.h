/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:59:00 by lgandari          #+#    #+#             */
/*   Updated: 2024/07/12 19:09:10 by lgandari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTRA_H
# define EXTRA_H

# include <stdlib.h>
# include <unistd.h>

# include "../inc/libft.h"

void	free_matrix(char **matrix);
int		ft_strcmp(const char *s1, const char *s2);
int		print_error(char *msg);
size_t	ft_arrlen(void **arr);
int		ft_countchar(const char *s, char c);

#endif
