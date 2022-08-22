/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:10:41 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/14 18:21:52 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_nb (long n)
{
	int		i;
	int		neg;

	i = 0;
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	if (n == 0)
		i++;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i + neg);
}

char	*ft_itoa(int n)
{
	int				i;
	long			nb;
	char			*ptr;

	nb = (long) n;
	i = size_nb(n);
	ptr = (char *)malloc((i + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[i--] = '\0';
	if (nb < 0)
		nb = nb * -1;
	while (i >= 0)
	{
		ptr[i] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	if (n < 0)
		ptr[0] = '-';
	return (ptr);
}
