/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_extension.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <lgandari@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:38:43 by lgandari          #+#    #+#             */
/*   Updated: 2025/02/21 13:39:46 by lgandari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/extra.h"

int	check_extension(char *filename, char *extension)
{
	int	i;
	int	j;
	int	k;

	i = ft_strlen(filename) - ft_strlen(extension);
	j = 0;
	k = ft_strlen(filename);
	while (i < k)
	{
		if (filename[i] != extension[j])
			return (-1);
		i++;
		j++;
	}
	return (1);
}
