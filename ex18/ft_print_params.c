/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:37:07 by ccharrie          #+#    #+#             */
/*   Updated: 2017/11/06 18:27:19 by ccharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int cpt;

	cpt = 0;
	while (str[cpt])
	{
		ft_putchar(str[cpt]);
		cpt++;
	}
}

int		main(int ac, char **av)
{
	int cpt;

	cpt = 1;
	while (cpt < ac)
	{
		ft_putstr(av[cpt]);
		ft_putchar('\n');
		cpt++;
	}
	return (cpt);
}
