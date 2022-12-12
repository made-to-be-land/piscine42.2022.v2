/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiachen <mdiachen@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:17:20 by mdiachen          #+#    #+#             */
/*   Updated: 2022/11/28 13:44:13 by mdiachen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
		res *= nb--;
	return (res);
}

// #include <stdio.h>

// int		ft_iterative_factorial(int nb);

// int		main(void)
// {
// 	printf("-6 = %d (0)\n", ft_iterative_factorial(-6));
// 	printf(" 0 = %d (1)\n", ft_iterative_factorial(0));
// 	printf(" 1 = %d (1)\n", ft_iterative_factorial(1));
// 	printf(" 2 = %d (2)\n", ft_iterative_factorial(2));
// 	printf(" 3 = %d (6)\n", ft_iterative_factorial(3));
// 	printf(" 4 = %d (24)\n", ft_iterative_factorial(4));
// }
