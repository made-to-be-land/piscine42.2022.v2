/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiachen <mdiachen@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:42:11 by mdiachen          #+#    #+#             */
/*   Updated: 2022/11/28 11:42:11 by mdiachen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;

	c = 0;
	if (argc > 0)
	{
		while (argv[0][c] != '\0')
		{
			write(1, &argv[0][c], 1);
			c++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
