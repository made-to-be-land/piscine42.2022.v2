/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiachen <mdiachen@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:48:19 by mdiachen          #+#    #+#             */
/*   Updated: 2022/11/23 17:48:19 by mdiachen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

// #include <stdio.h>

// void	ft_putstr(char *str);

// int		main(void)
// {
// 	char str[] = "Hello, world!";
// 	char *p_str;

// 	p_str = str;
// 	ft_putstr(p_str);
// }
