/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiachen <mdiachen@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:58:08 by mdiachen          #+#    #+#             */
/*   Updated: 2022/11/17 23:58:08 by mdiachen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + size - 1 - i);
		*(tab + size - 1 - i) = temp;
		i++;
	}
}
