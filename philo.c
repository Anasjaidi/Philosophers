/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <ajaidi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:33:53 by ajaidi            #+#    #+#             */
/*   Updated: 2022/03/04 19:29:20 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_philo	philo;

	if (ac == 6 && check_in(ac, av))
	{
		ft_allocation(&philo, av);
		ft_thread(&philo);
		while (philo.lamp)
		{
		usleep(500);
		}
	}
}
