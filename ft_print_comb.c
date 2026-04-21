/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:47:28 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/02/16 17:47:46 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	final_pont(void)
{
	write (1, ",", 1);
	write (1, " ", 1);
}

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				write (1, &c, 1);
				write (1, &d, 1);
				write (1, &u, 1);
				if (! (c == '7' && d == '8' && u == '9'))
					final_pont();
				u++;
			}
			d++;
		}
		c++;
	}
}
