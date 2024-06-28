/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peoriou <peoriou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 08:40:11 by peoriou           #+#    #+#             */
/*   Updated: 2024/06/26 19:29:39 by peoriou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include "../Libft/libft.h"

# ifndef ERR_ARGS
#  define ERR_ARGS "Error: arguments need to be between 1 and 2147483647 (int max)\n"
# endif

int		main(int argc, char *argv[]);
void	print_usage_error_msg(void);
bool	errors_in_args(int argc, char *argv[]);

#endif
