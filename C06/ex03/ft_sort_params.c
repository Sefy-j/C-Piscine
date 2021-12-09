/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:32:05 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/10/06 18:45:08 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] != '\0') && (s2[c] != '\0') && (s1[c] == s2[c]))
	{	
		c++;
	}
	return (s1[c] - s2[c]);
}

void	ft_wrstr(int argc, char **argv)
{	
	int	j;

	j = 1;
	while (j < argc)
	{
		ft_putstr(argv [j]);
		j++;
		ft_putstr("\n");
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*temp;

	i = 0;
	j = 1;
	k = 0;
	while (j < argc - 1)
	{
		i = j + 1;
		while (i < argc)
		{
			k = ft_strcmp(argv[j], argv[i]);
			if (k > 0)
			{
				temp = argv[j];
				argv[j] = argv[i];
				argv[i] = temp;
			}
			i++;
		}
		j++;
	}
	ft_wrstr(argc, argv);
}
