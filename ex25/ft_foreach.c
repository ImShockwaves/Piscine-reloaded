/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:17:14 by ccharrie          #+#    #+#             */
/*   Updated: 2017/11/06 17:01:27 by ccharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int lenght, void (*f)(int))
{
	int cpt;

	cpt = 0;
	while (cpt < lenght)
	{
		(*f)(tab[cpt]);
		cpt++;
	}
}