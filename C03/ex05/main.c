/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:12:19 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/09/30 17:33:15 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	a[15] = "1234";
	char	b[15] =  "1234";
	unsigned int c;
	unsigned int d;

	c = strlcat(a, "56789abcd", 4);
	printf("%s", a);
	printf("%c", ' ');
	printf("%u", c);
	printf("%c", '\n');
	d = ft_strlcat( b, "56789abcd", 4);
	printf("%s", b);
	printf("%c", ' ');
	printf("%u", d);
}
