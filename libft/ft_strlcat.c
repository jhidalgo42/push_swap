/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:05:07 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/19 12:50:38 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;

	i = ft_strlen(dst);
	dlen = ft_strlen((char *)src);
	j = 0;
	if (size < i)
		return (dlen + size);
	else
		dlen = dlen + i;
	while (src[j] && i + 1 < size)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dlen);
}
