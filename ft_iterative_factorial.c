/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:12:51 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/02/09 17:13:24 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

//#include <stdio.h>
//int main()
//{
//    int nb;
//    int res;
//
//    nb = 5;
//    printf("%d\n", ft_iterative_factorial(nb));
//}