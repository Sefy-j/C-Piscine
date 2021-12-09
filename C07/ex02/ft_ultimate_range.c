/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:40:43 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/10/13 23:19:20 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int			*dest;
	long int	diff;
	long int	i;

	diff = (long int)max - (long int)min;
	i = -1;
	if (diff <= 0)
	{
		*range = 0;
		return (0);
	}
	dest = malloc((sizeof(int) * diff));
	if (dest == NULL)
		return (0);
	while (++i < diff)
		dest[i] = (long int)min + i;
	*range = dest;
	return (diff);
}
