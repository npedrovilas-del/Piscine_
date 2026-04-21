/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pneto-vi <pneto-vi@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 13:11:11 by pneto-vi          #+#    #+#             */
/*   Updated: 2026/02/13 13:12:26 by pneto-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	j;

	c = 0;
	j = argc - 1;
	while (j > 0)
	{
		while (argv[j][c] != '\0')
		{
			write(1, &argv[j][c], 1);
			c++;
		}
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
