/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:04:03 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/10/01 11:49:33 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*str2;
	char	*nee;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{	
			str2 = str;
			nee = to_find;
			while (*str == *nee)
			{
				str++;
				nee++;
				if (*nee == '\0')
					return (str2);
			}
			str--;
		}
		str++;
	}
	return (0);
}
