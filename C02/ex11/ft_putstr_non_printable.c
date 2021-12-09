/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:35:58 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/09/29 18:56:50 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 32) && (str[c] <= 126))
			ft_putchar(str[c]);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[c] / 16]);
			ft_putchar("0123456789abcdef"[str[c] % 16]);
		}
		c++;
	}
}
