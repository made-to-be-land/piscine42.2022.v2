/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiachen <mdiachen@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:28:46 by mdiachen          #+#    #+#             */
/*   Updated: 2022/11/27 12:28:46 by mdiachen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>

// int		ft_recursive_factorial(int nb);

// int		main(void)
// {
// 	printf("-6 = %d (0)\n", ft_recursive_factorial(-6));
// 	printf(" 0 = %d (1)\n", ft_recursive_factorial(0));
// 	printf(" 1 = %d (1)\n", ft_recursive_factorial(1));
// 	printf(" 2 = %d (2)\n", ft_recursive_factorial(2));
// 	printf(" 3 = %d (6)\n", ft_recursive_factorial(3));
// 	printf(" 4 = %d (24)\n", ft_recursive_factorial(4));
// }
