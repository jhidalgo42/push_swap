/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:28:08 by jhidalgo          #+#    #+#             */
/*   Updated: 2022/08/18 21:11:18 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*aux;

	if (!lst)
		return (0);
	i = 0;
	aux = lst;
	while (aux)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}
