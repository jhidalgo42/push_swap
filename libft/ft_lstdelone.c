/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:16:00 by jhidalgo          #+#    #+#             */
/*   Updated: 2022/08/21 13:42:02 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	ft_lstdelone(t_list *lst, void (*del)(int))
{
	if (!del || !lst)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}
