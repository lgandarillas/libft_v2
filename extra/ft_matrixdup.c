/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:00:24 by lgandari          #+#    #+#             */
/*   Updated: 2024/07/18 21:21:17 by lgandari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/extra.h"

char	**ft_matrixdup(char **old_matrix)
{
	char	**new_matrix;
	size_t	len;
	size_t	line;
	size_t	i;

	line = 2;
	len = ft_arrlen((void **)old_matrix);
	new_matrix = ft_calloc(sizeof(char *), len + line);
	if (!new_matrix)
		return (NULL);
	i =  0;
	while (i < len)
	{
		new_matrix[i] = ft_strdup(old_matrix[i]);
		if (!new_matrix[i])
			return (free_matrix(new_matrix), NULL);
		i++;
	}
	return (new_matrix);
}
