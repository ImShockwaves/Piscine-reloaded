/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 14:40:52 by ccharrie          #+#    #+#             */
/*   Updated: 2017/11/06 16:56:44 by ccharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int cpt;

	cpt = 0;
	if (min >= max)
		return (0);
	if (!(tab = (int *)malloc(sizeof(int) * (max - min) + 1)))
		return (0);
	while (min < max)
	{
		tab[cpt] = min;
		min++;
		cpt++;
	}
	tab[cpt] = '\0';
	return (tab);
}
