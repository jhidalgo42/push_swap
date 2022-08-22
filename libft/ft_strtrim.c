/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:10:16 by jhidalgo          #+#    #+#             */
/*   Updated: 2021/04/19 13:27:35 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static int	check_set(char const *s1, char const *set, int j)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (set[i])
	{
		if (s1[j] == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	start_str(char const *s1, char const *set)
{
	int	j;

	j = 0;
	while (s1[j] && check_set(s1, set, j))
	{
		j++;
	}
	return (j);
}

static int	end_str(char const *s1, char const *set)
{
	int	j;

	j = ft_strlen((char *)s1) - 1;
	while (check_set(s1, set, j) && j > 0)
	{
		j--;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	start;
	unsigned int	end;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	start = start_str(s1, set);
	end = end_str(s1, set);
	if (end <= start)
		end = start;
	str = ft_substr(s1, start, (end - start) + 1);
	return (str);
}
