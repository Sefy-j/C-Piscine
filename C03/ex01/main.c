/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:12:19 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/09/30 17:10:53 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = "Holaa";
	char	s2[] = "Holabaa";
	int		a;
	int		b;

	a = strncmp(s1, s2, 6);
	printf("%d", a);
	printf("%c", '\n');
	b = ft_strncmp(s1, s2, 6);
	printf("%d", b);
}
