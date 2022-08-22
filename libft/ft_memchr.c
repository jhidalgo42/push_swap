/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:07:17 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/14 17:22:53 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*str;
	unsigned char		q;

	q = (unsigned const char) c;
	str = s;
	if (q == 0 && n == 0)
		return (NULL);
	while (n-- > 0)
	{
		if (*str == q)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
