/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:10:23 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/19 13:20:32 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*str1;

	if (!s1 || !s2)
		return (NULL);
	str = malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1)
			* sizeof(char));
	if (!str)
		return (NULL);
	str1 = str;
	while (*s1)
	{
		*str++ = (char)*s1++;
	}
	while (*s2)
	{
		*str++ = (char)*s2++;
	}
	*str = '\0';
	return (str1);
}
