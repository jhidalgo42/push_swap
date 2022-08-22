/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:05:55 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/13 15:46:43 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	int				j;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 1;
	j = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
	{
		return (0);
	}
	while ((str1[j] == str2[j] && i < n) && (str1[j] != '\0' && str2[j] != '\0'))
	{
		i++;
		j++;
	}
	return (str1[j] - str2[j]);
}
