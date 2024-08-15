/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <lgandari@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 19:32:07 by lgandari          #+#    #+#             */
/*   Updated: 2024/08/15 15:04:41 by lgandari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/extra.h"

char	*ft_substr_free(char *s, unsigned int start, size_t len)
{
	char	*sub_str;

	if (!s)
		return (NULL);
	sub_str = ft_substr(s, start, len);
	if (!sub_str)
		return (NULL);
	free(s);
	return (sub_str);
}
