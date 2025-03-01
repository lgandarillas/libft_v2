/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:34:27 by lgandari          #+#    #+#             */
/*   Updated: 2025/03/01 10:52:18 by lgandari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/extra.h"

int	print_error(char *msg, bool exit_prog)
{
	ft_putstr_fd(msg, STDERR_FILENO);
	if (exit_prog)
		exit(EXIT_FAILURE);
}
