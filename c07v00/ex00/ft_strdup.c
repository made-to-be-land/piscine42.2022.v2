/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiachen <mdiachen@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:43:56 by mdiachen          #+#    #+#             */
/*   Updated: 2022/11/29 13:43:56 by mdiachen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest != NULL)
		return (ft_strcpy(dest, src));
	else
		return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *test;
// 	char *copy;

// 	test = "Pizda Rusni!";
// 	printf("test = %s\n", test);
// 	copy = ft_strdup(test);
// 	printf("copy = %s\n", copy);
// 	free(copy);
// }