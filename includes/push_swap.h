/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:36:50 by jhidalgo          #+#    #+#             */
/*   Updated: 2022/08/22 21:44:26 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "../libft/libft.h"

void	ft_lstprint(t_list *lstA);
void	check_errors(int argc, char **argv, t_list **list);
void	error_found(t_list *list);
void	del(int a);
void	ft_putvalue(int i);
int		main(int argc, char **argv);
int		ft_atoi_lst(const char *nptr, t_list *lst);
t_list	*ft_swap(t_list *list);

#endif
