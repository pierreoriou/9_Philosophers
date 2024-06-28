/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:18:51 by poriou            #+#    #+#             */
/*   Updated: 2024/03/04 10:22:59 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	pf_itoa_base(unsigned long int n, char *base, t_print *tab)
{
	char	*number;
	int		len;
	int		i;

	len = pf_unbrlen(n, base);
	number = (char *)malloc((len + 1) * sizeof(char));
	if (number == NULL)
		return (0);
	i = len;
	number[i] = '\0';
	i--;
	while (i >= 0)
	{
		number[i] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
		i--;
	}
	ft_putstr_fd(number, tab->fd);
	free(number);
	return (len);
}
