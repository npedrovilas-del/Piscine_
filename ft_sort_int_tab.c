/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:54:36 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/02/16 18:54:40 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	temp;
	int	final;

	final = 0;
	while (final == 0)
	{
		final = 1;
		c = 0;
		while (c < size - 1)
		{
			if (tab[c] > tab[c + 1])
			{
				temp = tab[c];
				tab[c] = tab[c + 1];
				tab[c + 1] = temp;
				final = 0;
			}
			c++;
		}
	}
}
