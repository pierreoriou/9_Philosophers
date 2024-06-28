/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:47:03 by poriou            #+#    #+#             */
/*   Updated: 2024/03/04 10:25:47 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	pf_print_int(t_print *tab)
{
	long	d;
	int		len;

	d = va_arg(tab->args, int);
	len = ft_numlen(d);
	ft_putnbr_fd(d, tab->fd);
	tab->total_length += len;
	tab->width = 0;
	tab->color = 0;
}
