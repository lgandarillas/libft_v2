/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <lgandari@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:09:50 by lgandari          #+#    #+#             */
/*   Updated: 2025/03/04 15:10:47 by lgandari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/extra.h"

void	*ft_memdup(const void *src, size_t size)
{
	void	*dup;

	dup = malloc(size);
	if (!dup)
		return (NULL);
	return (ft_memcpy(dup, src, size));
}
