/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:46:41 by ccharrie          #+#    #+#             */
/*   Updated: 2017/11/06 18:20:40 by ccharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	if (nb > 12)
		return (0);
	if (nb < 0)
	{
		return (0);
	}
	res = 1;
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
