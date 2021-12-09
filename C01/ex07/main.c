/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:12:19 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/09/27 14:27:18 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	a [4];

	a [0] = 0;
	a [1] = 1;
	a [2] = 2;
	a [3] = 3;
	//a [4] = 4;
	printf("%d", a[0]);
	printf("%d", a[1]);
	printf("%d", a[2]);
	printf("%d", a[3]);
	//printf("%d", a[4]);
	printf("%s", "\n");
	ft_rev_int_tab(&a[0], 4);
	printf("%d", a[0]);
	printf("%d", a[1]);
	printf("%d", a[2]);
	printf("%d", a[3]);
	//printf("%d", a[4]);
}
