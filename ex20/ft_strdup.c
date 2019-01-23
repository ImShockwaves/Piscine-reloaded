/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 14:33:06 by ccharrie          #+#    #+#             */
/*   Updated: 2017/11/06 18:31:58 by ccharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int cpt;

	cpt = 0;
	while (src[cpt])
		cpt++;
	return (cpt);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		cpt;

	cpt = 0;
	if (!(dest = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (0);
	while (src[cpt])
	{
		dest[cpt] = src[cpt];
		cpt++;
	}
	dest[cpt] = '\0';
	return (dest);
}
