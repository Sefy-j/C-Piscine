/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:19:37 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/09/29 18:08:00 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[c] != '\0')
	{
		if (((str[c] >= 'a') && (str[c] <= 'z')) && (i == 0))
		{
			str[c] -= ('a' - 'A');
			i++;
		}
		else if (((str[c] >= 'A') && (str[c] <= 'Z')) && (i > 0))
		{
			str[c] += ('a' - 'A');
		}
		else if (((str[c] < '0') || (str[c] > '9')) && ((str[c] < 'A') \
					|| (str[c] > 'Z')) && ((str[c] < 'a') || (str[c] > 'z')))
			i = 0;
		else
			i++;
		c++;
	}
	return (str);
}
