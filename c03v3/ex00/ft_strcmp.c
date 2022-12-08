/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiachen <mdiachen@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:17:03 by mdiachen          #+#    #+#             */
/*   Updated: 2022/11/21 12:17:03 by mdiachen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}

// int		main()
// {
// 	char s1[] = "Nada a ver";
// 	char s2[] = "Teste de Comparacao";
// 	char s3[] = "Teste";

// 	printf("s12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", /
// ft_strcmp(s1, s2), ft_strcmp(s2, s1), ft_strcmp(s1, s3), 
// ft_strcmp(s3, s1), ft_strcmp(s2, s3), ft_strcmp(s3, s2));
// 	printf("\n\ns12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d",
//  strcmp(s1, s2), strcmp(s2, s1), strcmp(s1, s3), strcmp(s3, s1),
//   strcmp(s2, s3), strcmp(s3, s2));
// }
