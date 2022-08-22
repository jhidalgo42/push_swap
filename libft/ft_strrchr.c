/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:09:46 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/13 15:46:43 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;
	int		i;

	len = -1;
	i = 0;
	str = (char *)s;
	c = c % 256;
	while (*str != '\0')
	{
		if (*str == c)
			len = i;
		str++;
		i++;
	}
	if (c == 0)
		return (str);
	else if (len == (-1))
		return (0);
	else
		return ((char *)s + len);
}
