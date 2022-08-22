/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:07:36 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/14 17:23:44 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*v_dest;
	const char	*v_src;

	v_dest = (char *)dest;
	v_src = (char *)src;
	if (v_src < v_dest)
	{
		while (n-- > 0)
		{
			v_dest[n] = v_src[n];
		}
	}
	else
	{
		return (ft_memcpy(dest, src, n));
	}
	return (dest);
}
