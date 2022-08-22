/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:27:28 by jhidalgo          #+#    #+#             */
/*   Updated: 2022/08/18 22:38:39 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	ft_lstiter(t_list *lst, void (*f)(int))
{
	t_list	*tmp;

	tmp = lst;
	if (!f || !lst)
		return ;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}	
}
