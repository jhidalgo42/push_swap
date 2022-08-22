/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:00:39 by jhidalgo          #+#    #+#             */
/*   Updated: 2022/08/22 21:03:44 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_atoi(const char *nptr)
{
	long	num;
	int		neg;
	char	*ptr;

	ptr = (char *)nptr;
	num = 0;
	neg = 1;
	while ((*ptr == ' ') || (*ptr >= 9 && *ptr <= 13))
		ptr++;
	if (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			neg = -neg;
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		num = num * 10 + *ptr++ - 48;
		if ((num * neg) > 2147483647 || (num * neg) < -2147483648)
			return (0);
	}
	return ((int)num * neg);
}
