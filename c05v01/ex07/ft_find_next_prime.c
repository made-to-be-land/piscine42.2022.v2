/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiachen <mdiachen@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:36:52 by mdiachen          #+#    #+#             */
/*   Updated: 2022/11/28 11:36:52 by mdiachen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("-10 = %d (2)\n", ft_find_next_prime(-10));
// 	printf(" 0 = %d (2)\n", ft_find_next_prime(0));
// 	printf(" 1 = %d (2)\n", ft_find_next_prime(1));
// 	printf(" 2 = %d (2)\n", ft_find_next_prime(2));
// 	printf(" 3 = %d (3)\n", ft_find_next_prime(3));
// 	printf(" 4 = %d (5)\n", ft_find_next_prime(4));
// 	printf(" 5 = %d (5)\n", ft_find_next_prime(5));
// 	printf(" 6 = %d (7)\n", ft_find_next_prime(6));
// 	printf(" 7 = %d (7)\n", ft_find_next_prime(7));
// 	printf(" 8 = %d (11)\n", ft_find_next_prime(8));
// 	printf(" 9 = %d (11)\n", ft_find_next_prime(9));
// 	printf(" 10 = %d (11)\n", ft_find_next_prime(10));
// 	printf(" 11 = %d (11)\n", ft_find_next_prime(11));	
// }
