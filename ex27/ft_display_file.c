/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:41:57 by ccharrie          #+#    #+#             */
/*   Updated: 2017/11/07 13:16:47 by ccharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUFFER 50000

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int cpt;

	cpt = 0;
	while (str[cpt])
	{
		write(2, &(str[cpt]), 1);
		cpt++;
	}
}

void	ft_display(int file)
{
	char	tab[BUFFER];
	int		reader;
	int		cpt;

	cpt = 0;
	reader = read(file, tab, BUFFER);
	while (cpt < reader)
	{
		ft_putchar(tab[cpt]);
		cpt++;
	}
}

int		main(int ac, char **av)
{
	int file;

	if (ac == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	file = open(av[1], O_RDONLY);
	ft_display(file);
	close(file);
	return (0);
}
