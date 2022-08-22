/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:26:01 by jhidalgo          #+#    #+#             */
/*   Updated: 2022/08/22 21:49:58 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// int	ft_movements(char *com, t_list *list_a, t_list *list_b)
// {
// 	if (ft_strncmp("sa", com, (int)ft_strlen(com)))
// 		ft_swap(list_a);
// 	else if (ft_strncmp("sb", com, (int)ft_strlen(com)))
// 		ft_swap(list_b);
// 	else if (ft_strncmp("ss", com, (int)ft_strlen(com)))
// 		ft_swap_ab(list_a, list_b);
// 	else if (ft_strncmp("pa", com, (int)ft_strlen(com)))
// 		ft_push(list_a, list_b);
// 	else if (ft_strncmp("pb", com, (int)ft_strlen(com)))
// 		ft_push(list_b, list_a);
// 	else if (ft_strncmp("ra", com, (int)ft_strlen(com)))
// 		ft_rotate(list_a);
// 	else if (ft_strncmp("rb", com, (int)ft_strlen(com)))
// 		ft_rotate(list_b);
// 	else if (ft_strncmp("rr", com, (int)ft_strlen(com)))
// 		ft_rotate_ab(list_a, list_b);
// 	else if (ft_strncmp("rra", com, (int)ft_strlen(com)))
// 		ft_rev_rotate(list_a);
// 	else if (ft_strncmp("rrb", com, (int)ft_strlen(com)))
// 		ft_rev_rotate(list_b);
// 	else if (ft_strncmp("rrr", com, (int)ft_strlen(com)))
// 		ft_rev_rotate_ab(list_a, list_b);
// 	else
// 		return (0);
// 	return (1);
// }

t_list	*ft_swap(t_list *list)
{
	t_list	*tmp;

	ft_lstprint(list);
	tmp = list->next;
	list->next = tmp->next;
	tmp->next = list;
	ft_lstprint(tmp);
	return (tmp);
}
// void	ft_swap_ab(t_list *list_a, t_list *list_b)
// ->next{

// }

// void	ft_push(t_list *origin, t_list *dest)
// {

// }


/* 
sa	: 	swap a 	-> intercambia los dos primeros elementos encima del stack a 
		Control de errores: No hace nada si hay menos de dos elementos. 

sb	: 	swap b 	-> intercambia los dos primeros elementos encima del stack b 
		Control de errores: No hace nada si hay menos de dos elementos. 

ss	: 	swap a y swap b a la vez. 

pa	: 	push a		-> toma el primer elemento del stack b y lo pone encima del stack a 

pb	: 	push b		-> toma el primer elemento del stack a y lo pone encima del stack b

ra	: 	rotate a	-> desplaza hacia arriba todos los elementos del stack 'a' una posición, 
					de forma que el primer elemento se convierte en el último. 

rb	: 	rotate b	-> desplaza hacia arriba todos los elementos del stack 'b' una posición, 
					de forma que el primer elemento se convierte en el último. 

rr	: 	rotate a y rotate b.

rra	:	reverse rotate a - desplaza hacia abajo todos los elementos del stack a una posición, 
					de forma que el último elemento se convierte en el primero.

rrb	:	reverse rotate b - desplaza hacia abajo todos los elementos del stack b una posición, 
					de forma que el último elemento se convierte en el primero.

rrr	:	reverse rotate a y reverse rotate b.

*/


