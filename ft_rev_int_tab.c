/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:41:15 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/02/02 11:44:38 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	p;
	int	c;
	int	temp;

	p = size - 1;
	c = 0;
	while (c < p)
	{
		temp = tab[p];
		tab[p] = tab[c];
		tab[c] = temp;
		p--;
		c++;
	}
}
