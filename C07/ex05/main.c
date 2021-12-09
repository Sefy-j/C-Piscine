/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:40:46 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/10/14 17:01:33 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	*str;
	char	*charset;
	char	**result;

	str = "EUeeUKRU8Rc8Ox8bPNo3PY   F7EZpWM9N10Zd";
	charset = " ";
	result = ft_split(str, charset);
	printf("%s\n%s\n%s\n", result[0], result[1], result[2]);
	//printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n", result[0], result[1], result[2], result[3], result[4], result[5], result[6], result[7], result[8]);
}
