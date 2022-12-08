/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiachen <mdiachen@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:58:13 by mdiachen          #+#    #+#             */
/*   Updated: 2022/11/21 13:58:13 by mdiachen         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	c;

	c = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[c] = *src;
		c++;
		src++;
	}
	dest[c] = '\0';
	return (dest);
}

// int		main(void)
// {
// 	char dest[20] = "Hello";
// 	char src[] = ", world!";

// 	printf("dest = %s\nsrc = %s\n", dest, src);
// 	ft_strcat(dest, src);
// 	printf("result = %s", dest);

// 	return (0);
// }