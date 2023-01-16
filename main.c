/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:30:01 by ygunay            #+#    #+#             */
/*   Updated: 2023/01/16 14:12:02 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	*a;
	t_data	*b;

	b = NULL;
	if (ac < 2)
		return (0);
	if (ac == 2)
		av = ft_split(av[1], ' ');
	check_errors(ac, av);
	a = create_list(ac, av);
	fill_index(&a);
	dup_check(a);
	if (is_sorted(a) == 1)
		return (0);
	sort_list(&a, &b);
	print_list(a);
	//system("leaks push_swap");
	exit(0);
	return (0);
}
