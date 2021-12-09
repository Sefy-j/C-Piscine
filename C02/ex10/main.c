/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:12:19 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/09/29 15:57:45 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	*ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	a[4];
	//unsigned int	*b;

	ft_strlcpy(a, "Prueba", 4);
	printf("%s", a);
	//printf("%c", '\n');
	//printf("%u", b);
}
