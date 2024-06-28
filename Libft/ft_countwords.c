/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:53:07 by poriou            #+#    #+#             */
/*   Updated: 2024/04/04 17:14:48 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char *str, char *charset)
{
	int	count;
	int	word;
	int	i;

	if (!str || !charset)
		return (0);
	count = 0;
	word = 1;
	i = 0;
	while (str[i])
	{
		if (!ft_ischarset(str[i], charset) && word == 1)
		{
			count++;
			word = 0;
		}
		else if (ft_ischarset(str[i], charset))
			word = 1;
		i++;
	}
	return (count);
}
