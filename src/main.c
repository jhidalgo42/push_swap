/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhidalgo <jhidalgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:35:49 by jhidalgo          #+#    #+#             */
/*   Updated: 2022/08/22 22:04:12 by jhidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>



// int ft_exec(char **commands, t_list **list_a, t_list **list_b)
// {
// 	int i;
// 	int count;

// 	i = 0;
// 	count = 0;
// 	if (commands[0] == 'exec') //ft_tolower para que reconozca mayúsculas y minúsculas.
// 	{
// 		while (commands[i++])
// 		{
// 			if (ft_movements(commands[i], list_a, list_b))
// 			{
// 				count += 1;
// 				ft_putstr_fd(commands[i], 1);
// 			}
// 			// Se deberían de revisar los errores antes de que se ejecuten los primeros comandos. 
// 			else //revisión de errores
// 			{
// 				ft_putstr_fd("Error, comandos introducido no reconocido", 1);
// 				return(0);
// 			}
// 		}
// 	}
// }

int	ft_atoi_lst(const char *nptr, t_list *lst)
{
	long	num;
	int		neg;
	char	*ptr;

	ptr = (char *)nptr;
	num = 0;
	neg = 1;
	while ((*ptr == ' ') || (*ptr >= 9 && *ptr <= 13))
		ptr++;
	if (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			neg = -neg;
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		num = num * 10 + *ptr++ - 48;
		if ((num * neg) > 2147483647 || (num * neg) < -2147483648)
			error_found(lst);
	}
	return ((int)num * neg);
}

void	del(int a)
{
	a = 0;
	return ;
}

void	error_found(t_list *list)
{
	ft_putstr_fd("Error\n", 1);
	ft_lstclear(&list, &del);
	exit(0);
}

/* 1. No entran argumentos		->	OK	*/
/* 2. No hay valor de entrada 	->	OK	*/
/* 3. Valor no es número	 	->	OK	*/
/* 4. Valor no es int		 	->		*/
/* 5. SPLIT					 	->	OK	*/

static void	num_error(char	*values, t_list *list)
{
	int	i;

	i = -1;
	if (values[0] == '-')
		i = 0;
	while (values[++i])
	{
		if (!ft_isdigit((int)values[i]))
			error_found(list);
	}
}

void	ft_putvalue(int i)
{
	ft_putnbr_fd(i, 1);
	return ;
}

void	check_errors(int argc, char **argv, t_list **list)
{
	int		i;
	int		j;
	int		number;
	char	**values;

	i = 0;
	if (argc <= 1)
		error_found(*list);
	while (++i < argc)
	{
		values = NULL;
		if (!ft_strlen(argv[i]))
			error_found(*list);
		values = ft_split(argv[i], ' ');
		j = -1;
		while (values[++j])
		{
			num_error(values[j], *list);
			number = ft_atoi_lst((const char *)values[j], *list);
			ft_lstadd_back(list, ft_lstnew(number));
		}
	}
}

void	ft_lstprint(t_list *lstA)
{
	t_list	*tmpA;

	tmpA = lstA;
	if (!lstA)
		return ;
	while (tmpA)
	{
		ft_lstdelone(tmpA, &ft_putvalue);
		ft_putchar_fd(10, 1);
		tmpA = tmpA->next;
	}	
}

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	// char	*input_line;
	// char	**commands;
	// int		moves;
	list_a = NULL;
	list_b = NULL;
	list_b = ft_lstnew(5);
	ft_lstadd_back(&list_b, ft_lstnew(6));
	check_errors(argc, argv, &list_a);
	//ft_lstprint(list_a);
	ft_putstr_fd("\n\n B \n---\n",1);
	ft_lstprint(list_b);
	
	list_a = ft_swap(list_a);
	ft_lstprint(list_a);
	ft_putstr_fd("\n\n B \n---\n",1);
	ft_lstprint(list_b);
	// moves = 0;
	// input_line = get_next_line(0); // leer el siguiente comando que entra por pantalla.
	// commands = ft_split((const char)input_line, " ");
	// moves += ft_exec(commands, list_a, list_b);//ejecutar el comando que entra por pantalla
	//ft_lstclear(&list_a, &del);
	//ft_lstclear(&list_b, &del);
	return (0);
}
