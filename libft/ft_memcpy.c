/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:07:28 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/14 17:23:36 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*v_dst;
	const char	*v_src;

	v_dst = dst;
	v_src = src;
	if (dst == src || n <= 0)
		return (dst);
	if (!src && !dst)
		return (NULL);
	else
	{
		while (n-- > 0)
		{
			*v_dst++ = *v_src++;
		}
		return (dst);
	}
}
