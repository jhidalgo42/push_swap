/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:27:34 by jhidalgo          #+#    #+#             */
/*   Updated: 2022/08/18 22:40:21 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

t_list	*ft_lstmap(t_list *lst, int (*f)(int), void (*del)(int))
{
	t_list	*map;
	t_list	*init;

	if (!lst || !f)
		return (NULL);
	map = ft_lstnew(f(lst->content));
	init = map;
	while (lst->next)
	{
		lst = lst->next;
		map->next = ft_lstnew(f(lst->content));
		if (!(map->next))
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		map = map->next;
	}
	return (init);
}
