/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:34:27 by lgandari          #+#    #+#             */
/*   Updated: 2024/07/03 16:35:12 by lgandari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/extra.h"

int	print_error(char *msg, int exit_code)
{
	ft_putstr_fd(msg, STDERR_FILENO);
	exit(exit_code);
}
