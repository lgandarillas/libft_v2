/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <lgandari@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 10:28:48 by lgandari          #+#    #+#             */
/*   Updated: 2024/09/01 10:29:53 by lgandari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/extra.h"

char	**append_str(char **arr, char *str)
{
	size_t	len;
	size_t	i;
	char	**new_arr;

	len = ft_arrlen((void **)arr) + 1;
	new_arr = ft_calloc(sizeof(char *), len + 1);
	if (!new_arr)
		return (NULL);
	i = 0;
	while (i < len - 1)
	{
		new_arr[i] = ft_strdup(arr[i]);
		if (!new_arr[i])
			return (free_matrix(new_arr), NULL);
		i++;
	}
	new_arr[len - 1] = ft_strdup(str);
	if (!new_arr[len - 1])
		return (free_matrix(new_arr), NULL);
	free_matrix(arr);
	return (new_arr);
}
