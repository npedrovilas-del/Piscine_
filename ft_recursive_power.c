/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:17:24 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/02/09 17:18:09 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	return (nb * ft_recursive_power(nb, power -1));
}

//#include <stdio.h>
//int main()
//{
//    int nb; 
//    int power;
//
//    nb = 5;
//    power = 4;
//    ft_recursive_power(nb, power);
//    printf("%d\n", ft_recursive_power(nb, power));
//}