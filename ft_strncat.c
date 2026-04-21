/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:25:37 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/02/04 16:27:23 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	c;

	j = 0;
	c = 0;
	if (nb == 0)
		return (dest);
	while (dest[c] != '\0')
		c++;
	while ((src[j] != '\0') && (j < nb))
	{
		dest[c] = src[j];
		c++;
		j++;
	}
	dest[c] = '\0';
	return (dest);
}
