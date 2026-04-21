/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 13:09:12 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/02/13 13:10:28 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	j;

	j = 1;
	while (j < argc)
	{
		c = 0;
		while (argv[j][c] != '\0')
		{
			write (1, &argv[j][c], 1);
			c++;
		}
		write (1, "\n", 1);
		j++;
	}
	return (0);
}
