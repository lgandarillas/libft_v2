/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <lgandari@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:59:00 by lgandari          #+#    #+#             */
/*   Updated: 2024/07/04 18:12:30 by lgandari         ###   ########.fr       */
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

#endif
