/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_types_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcollen <wcollen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:17:36 by wcollen           #+#    #+#             */
/*   Updated: 2022/06/15 18:55:15 by wcollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

int init_philos(t_philo **philos, t_sets *set)
{
	*philos = malloc(sizeof(t_philo) * set->ph_count);
	if (!philos)
	{
		return (1);
	}
	return (0);
}

