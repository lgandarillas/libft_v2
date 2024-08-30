/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinter <aquinter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:37:24 by aquinter          #+#    #+#             */
/*   Updated: 2024/08/30 19:29:22 by lgandari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/extra.h"

size_t	ft_arrlen(void **arr)
{
	size_t	i;

	if (arr == NULL)
		return (0);
	i = 0;
	while (arr[i] != NULL)
		i++;
	return (i);
}
