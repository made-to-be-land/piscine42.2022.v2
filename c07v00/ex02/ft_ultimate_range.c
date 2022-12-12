/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiachen <mdiachen@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:27:45 by mdiachen          #+#    #+#             */
/*   Updated: 2022/11/29 15:27:45 by mdiachen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long int	i;
	int			*ptr;

	i = 0;
	if (min >= max)
	{
		*range = (0);
		return (0);
	}
	ptr = malloc((max - min) * sizeof(int));
	*range = ptr;
	while (i < max - min)
	{
		range[0][i] = min + i;
		i++;
	}
	return (max - min);
}

// #include <stdio.h>

// int		ft_ultimate_range(int **range, int min, int max);
// void	test_ultimate_range_function(int min, int max);
// void	print_test(int *test, int size);

// int		main(void)
// {
// 	test_ultimate_range_function(3, 5);
// 	test_ultimate_range_function(0, 11);
// 	test_ultimate_range_function(8, 2);
// 	test_ultimate_range_function(2, 2);
// 	test_ultimate_range_function(10, 20);
// 	test_ultimate_range_function(20, 15);
// 	test_ultimate_range_function(99, 99);
// 	test_ultimate_range_function(1, 12);
// }

// void	test_ultimate_range_function(int min, int max)
// {
// 	int size;
// 	int *test;

// 	size = ft_ultimate_range(&test, min, max);
// 	printf("\nsize = %d\n", size);
// 	print_test(test, size);
// 	free(test);
// }

// void	print_test(int *test, int size)
// {
// 	int i;

// 	for (i = 0; i < size - 1; i++)
// 	{
// 		printf("%d - ", test[i]);
// 	}
// 	if (size > 0)
// 		printf("%d\n", test[size - 1]);
// }
