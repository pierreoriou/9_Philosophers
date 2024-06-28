/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peoriou <peoriou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 08:33:26 by peoriou           #+#    #+#             */
/*   Updated: 2024/06/26 18:51:09 by peoriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char *argv[])
{
	if (argc != 5 && argc != 6)
	{
		print_usage_error_msg();
		return (EXIT_FAILURE);
	}
	if (errors_in_args(argc, argv))
		return (EXIT_FAILURE);
	ft_printf(1, "hello\n");
	return (0);
}
