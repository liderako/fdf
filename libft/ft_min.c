/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 17:04:27 by asvirido          #+#    #+#             */
/*   Updated: 2016/12/03 17:05:39 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_min(int *array, int len)
{
	int		min;
	int		i;

	i = 1;
	min = array[0];
	while (len > 0)
	{
		if (array[i] < min)
			min = array[i];
		i++;
		len--;
	}
	return (min);
}