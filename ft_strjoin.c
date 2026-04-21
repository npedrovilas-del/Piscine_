/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 19:54:51 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/02/15 21:15:28 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_tamanho(int size, char **strs, char *sep)
{
	int	tamanho;
	int	c;
	int	f;

	tamanho = 0;
	c = 0;
	while (c < size)
	{
		f = 0;
		while (strs[c][f++] != '\0')
			tamanho++;
		c++;
	}
	c = 0;
	while (sep[c] != '\0')
		c++;
	tamanho += (c * (size - 1));
	return (tamanho);
}

char	*copia_ft(int size, char **strs, char *sep, char *segund)
{
	int	k;
	int	f;
	int	j;
	int	c;

	c = 0;
	k = 0;
	while (k < size)
	{
		f = 0;
		while (strs[k][f] != '\0')
			segund[c++] = strs[k][f++];
		j = 0;
		while (sep[j] != '\0' && k < size - 1)
			segund[c++] = sep[j++];
		k++;
	}
	segund[c] = '\0';
	return (segund);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*segund;

	if (size <= 0)
	{
		segund = malloc(1);
		segund[0] = '\0';
		return (segund);
	}
	segund = malloc((ft_tamanho(size, strs, sep) + 1) * sizeof(char));
	if (segund == NULL)
	{
		return (NULL);
	}
	segund = copia_ft (size, strs, sep, segund);
	return (segund);
}
