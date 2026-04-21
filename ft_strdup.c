/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 19:35:19 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/02/14 20:20:15 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_tamanho(char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		tamanho;
	char	*segun;

	i = 0;
	tamanho = ft_tamanho(src);
	segun = malloc((tamanho + 1) * sizeof(char));
	if (segun == NULL)
	{
		return (0);
	}
	while (src[i] != '\0')
	{
		segun[i] = src[i];
		i++;
	}
	segun[i] = '\0';
	return (segun);
}

