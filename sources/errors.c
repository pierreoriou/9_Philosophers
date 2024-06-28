/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peoriou <peoriou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:29:42 by peoriou           #+#    #+#             */
/*   Updated: 2024/06/26 19:28:57 by peoriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	print_usage_error_msg(void)
{
	ft_putstr_fd("Usage: ./philo ", 2);
	ft_printf(2, "\033[31m");
	ft_putstr_fd("[nb_of_philosophers] ", 2);
	ft_printf(2, "\033[32m");
	ft_putstr_fd("[time_to_die (in ms)] ", 2);
	ft_printf(2, "\033[33m");
	ft_putstr_fd("[time_to_eat (in ms)] ", 2);
	ft_printf(2, "\033[34m");
	ft_putstr_fd("[time_to_sleep (in ms)] ", 2);
	ft_printf(2, "\033[35m");
	ft_putstr_fd("[(optional) ", 2);
	ft_putendl_fd("[number_of_times_each_philosopher_must_eat]", 2);
	ft_printf(2, "\033[0m");
}

static bool	is_empty(char *str)
{
	int	i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '\0')
	{
		ft_putstr_fd("here is empty\n", 2);
		ft_putstr_fd(ERR_ARGS, 2);
		return (true);
	}
	return (false);
}

static bool	is_too_long_or_negative_or_not_a_number(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		return (true);
	if (str[i] == '+')
		i++;
	j = 0;
	while (ft_isdigit(str[i + j]))
	{
		if (j > 9)
			return (true);
		j++;
	}
	if (j == 0)
		return (true);
	return (false);
}

static bool	is_positive_and_within_int_limits(char *str)
{
	int	n;

	// ft_printf(1, "str = %s\n", str);
	n = ft_atoi(str);
	// ft_printf(1, "n = %d\n", n);
	if (n <= 0 || n > INT_MAX)
		return (false);
	return (true);
}

bool	errors_in_args(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (is_empty(argv[i])
			|| is_too_long_or_negative_or_not_a_number(argv[i])
			|| !is_positive_and_within_int_limits(argv[i]))
		{
			ft_putstr_fd(ERR_ARGS, 2);
			return (true);
		}
		i++;
	}
	return (false);
}
