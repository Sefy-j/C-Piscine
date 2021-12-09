/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:42:17 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/10/05 14:01:50 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

int ft_error(char *base, int lenb)
{
	int i;
	int j;

	i = 0;
	if (lenb == 0 || lenb == 1)
		return (1);
	while (i < lenb)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (1);
		j = i + 1;
		while (j < lenb)
		{
			if (base[i] != base[j])
				j++;
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int ftcheckb(char *base, char car)
{
	int i;
	i = 0;
	while (base[i] != '\0')
	{
		if (car == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int ft_atoi_base(char *str, char *base)
{
	int i;
	int r;
	int s;
	int lenb;
	int err;
	int index;

	i = 0;
	s = 1;
	r = 0;
	lenb = ft_strlen(base);
	err = ft_error(base, lenb);
	if (err == 1)
		return (0);
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' \
	|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= (-1);
		i++;
	}
	while (str[i] != '\0')
	{
		index = ftcheckb(base, str[i]);
		if (index == -1)
			return (s * r);
		r = r * lenb + (index);
		i++;
	}
	return (s * r);
}