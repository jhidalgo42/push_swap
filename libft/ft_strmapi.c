/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:10:20 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/14 19:01:23 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	size_t			len;
	size_t			len2;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen((char *)s);
	str = malloc(len + 1 * sizeof(char));
	if (!str)
		return (NULL);
	len2 = ft_strlcpy(str, s, len + 1);
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
