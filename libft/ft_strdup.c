/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:08:02 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/14 18:29:24 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *) malloc(ft_strlen((char *)s) * (int) sizeof(char) + 1);
	if (!str)
	{	
		return (NULL);
	}
	while (s[i] != 0)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
