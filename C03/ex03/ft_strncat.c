/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 11:54:58 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/09/30 17:22:17 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0' && (c < nb))
	{	
		dest[c + i] = src[c];
		c++;
	}
	dest[c + i] = '\0';
	return (dest);
}
