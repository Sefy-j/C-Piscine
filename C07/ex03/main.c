/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:12:19 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/10/11 21:25:58 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*strs[3];
	char	*dest;

	strs[0] = "Esto primero";
	strs[1] = "Esto despues";
	strs[2] = "Terminamos";
	dest = ft_strjoin(3, strs, "JODER");
	printf("%s", dest);
	free(dest);
}
