/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-f <jlopez-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:27:12 by jlopez-f          #+#    #+#             */
/*   Updated: 2021/10/14 19:17:20 by jlopez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb % 2 == 0)
		return (0);
	while (i < nb && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i += 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2 )
		return (2);
	while (ft_is_prime(nb) == 0 && nb <= 2147483647)
	{
		nb++;
	}
	return (nb);
}
