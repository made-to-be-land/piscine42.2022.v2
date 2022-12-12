/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiachen <mdiachen@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:43:23 by mdiachen          #+#    #+#             */
/*   Updated: 2022/11/23 17:43:23 by mdiachen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

// int		main (void)
// {
// 	char str[] = "Amanda";
// 	char *p_str;

// 	p_str = str;

// 	int count = ft_strlen(p_str);

// 	printf("%d\n", count);
// }
