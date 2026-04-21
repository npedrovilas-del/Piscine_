/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 19:40:25 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/02/14 19:50:03 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	c;
	int	*segund;

	c = 0;
	if (min >= max)
	{
		return (0);
	}
	segund = malloc((max - min) * sizeof(int));
	while (c < (max - min))
	{
		segund[c] = min + c;
		c++;
	}
	return (segund);
}

#include <stdio.h>
int main(void)
{
    int *res;
	int i;
	int max;
	int min;

	i = 0;
	min = 30;
	max = 40;
	res = ft_range(min, max);
	while(i < (max - min))
	{
		printf("%d ", res[i]);
		i++;
	}
}