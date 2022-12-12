/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiachen <mdiachen@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:44:25 by mdiachen          #+#    #+#             */
/*   Updated: 2022/11/29 15:44:25 by mdiachen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}

// #include <stdio.h>

// char *ft_strjoin(int size, char **strs, char *sep);

// int	main(void)
// {
// 	char *text[10];

// 	text[0] = "Testando";
// 	text[1] = "a";
// 	text[2] = "funcao";
// 	text[3] = "ft_strjoin";
// 	text[4] = "com";
// 	text[5] = "o";
// 	text[6] = "separador";
// 	text[7] = "\' - \'";
// 	text[8] = "e tamanho";
// 	text[9] = "10";

// 	printf("%s\n", ft_strjoin(10, text, " - "));
// }
