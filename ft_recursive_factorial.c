/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:13:46 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/02/09 17:14:28 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

//#include <stdio.h>
//int main()
//{
//    int nb;
//
//    nb = 5;
//    ft_recursive_factorial(nb);
//    printf("%d\n", ft_recursive_factorial(nb));
//}