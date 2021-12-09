/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:55:19 by lmunoz-m          #+#    #+#             */
/*   Updated: 2021/10/13 21:23:17 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void ft_show_tab(struct s_stock_str *par);
struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int	main(void)
{
	struct s_stock_str	*tabla;
	char *strs[3];
	//int	i = 0;

	strs[0] = "hola";
	strs[1] = "que";
	strs[2] = 0;

	tabla = ft_strs_to_tab(2, strs);
	ft_show_tab(tabla);
	return (0);
}

