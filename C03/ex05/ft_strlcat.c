/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:08:53 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/09/30 17:31:03 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	ssrc;
	unsigned int	sdest;

	c = 0;
	sdest = ft_strlen(dest);
	ssrc = ft_strlen(src);
	if (size < sdest + 1)
		return (ssrc + size);
	while ((src [c] != '\0') && (c < (size - sdest - 1)))
	{
		dest[sdest + c] = src[c];
		c++;
	}
	dest[sdest + c] = '\0';
	return (sdest + ssrc);
}
