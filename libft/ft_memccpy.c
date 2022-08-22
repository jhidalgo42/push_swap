/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:07:13 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/14 17:22:47 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sr;

	dst = (unsigned char *) dest;
	sr = (unsigned char *) src;
	while (n-- > 0 && *sr != (unsigned char)c)
	{
		*dst++ = *sr++;
	}
	if (*sr == (unsigned char)c)
	{
		*dst++ = *sr++;
		return ((void *) dst);
	}
	else
		return (NULL);
}
