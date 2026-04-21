/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:27:45 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/02/04 16:50:32 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	c;

	c = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[c] != '\0')
	{
		j = 0;
		while (str[c + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (&str[c]);
			}
		}
		c++;
	}
	return (0);
}
