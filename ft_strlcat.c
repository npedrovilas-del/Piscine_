/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:33:04 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/02/16 19:33:05 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	j;
	unsigned int	k;

	j = 0;
	while (dest[j] != '\0' && j < size)
		j++;
	k = 0;
	while (src[k] != '\0')
		k++;
	if (size <= j)
		return (size + k);
	i = 0;
	while (src[i] != '\0' && (j + c + 1) < size)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (j + k);
}
