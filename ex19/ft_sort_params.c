/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:43:57 by ccharrie          #+#    #+#             */
/*   Updated: 2017/11/06 18:30:31 by ccharrie         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int cpt;

	cpt = 0;
	while (s1[cpt] && s2[cpt] && s1[cpt] == s2[cpt])
		cpt++;
	return (s1[cpt] - s2[cpt]);
}

int		main(int ac, char **av)
{
	int		cpt;
	int		cpt2;
	int		min;

	cpt = 1;
	while (cpt < ac)
	{
		cpt2 = 1;
		min = 1;
		while (cpt2 < ac)
		{
			if (av[cpt2] != 0)
			{
				if (av[min] == 0 || ft_strcmp(av[min], av[cpt2]) > 0)
					min = cpt2;
			}
			cpt2++;
		}
		ft_putstr(av[min]);
		ft_putchar('\n');
		av[min] = 0;
		cpt++;
		cpt2 = 1;
	}
	return (0);
}
