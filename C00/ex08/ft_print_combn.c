/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:12:29 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/10/06 18:30:58 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_array(int *a, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(a [i] + '0');
		i++;
	}
	if (a [0] != (9 - n + 1))
	{	
		ft_putchar(',');
		ft_putchar(' ');
	}	
}

void	combn_rec(int n, int i, int *a, int ini)
{
	while (ini <= 9)
	{
		a [i ] = ini;
		if (i == (n - 1))
			print_array(a, n);
		else
			combn_rec(n, (i + 1), a, (ini + 1));
		ini++;
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	a[9];
	int	ini;

	i = 0;
	ini = 0;
	combn_rec(n, i, a, ini);
}
