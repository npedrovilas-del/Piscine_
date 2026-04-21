/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 20:54:21 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/02/07 21:01:23 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	c;
	int	j;
	int	res;

	c = 0;
	j = 1;
	res = 0;
	while (str[c] == ' ' || (str[c] >= 9 && str[c] <= 13))
		c++;
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			j *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (res * 10) + (str[c] - '0');
		c++;
	}
	return (res * j);
}

//int main ()
//{
//char *str;
//
//str = "   ++++----123412341431";
//ft_atoi(str);
//printf("%d\n", ft_atoi(str));
//} 