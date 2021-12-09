/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:55:19 by lmunoz-m          #+#    #+#             */
/*   Updated: 2021/10/12 11:13:34 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>

void ft_show_tab(struct s_stock_str *par);
struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int	main(void)
{
	struct s_stock_str	*tabla;
	char *strs[3];
	int	i = 0;

	strs[0] = "hola";
	strs[1] = "que";
	strs[2] = 0;

	tabla = ft_strs_to_tab(2, strs);
	while (i < 2) // o str[i]
	{
		printf ("%i\n%s\n%s\n", tabla[i].size, tabla[i].str, tabla[i].copy);
		i++;
	}
	
	return (0);
}

