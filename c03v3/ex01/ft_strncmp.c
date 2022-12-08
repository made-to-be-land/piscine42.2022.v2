/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiachen <mdiachen@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:58:29 by mdiachen          #+#    #+#             */
/*   Updated: 2022/11/21 12:58:29 by mdiachen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;
	int				diff;

	c = 0;
	diff = 0;
	while ((c < n) && !diff && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		diff = (unsigned char)s1[c] - (unsigned char)s2[c];
		c++;
	}
	if (c < n && !diff && (s1[c] == '\0' || s2[c] == '\0'))
		diff = (unsigned char)s1[c] - (unsigned char)s2[c];
	return (diff);
}

// int		main()
// {
// 	char s1[] = "Nada a ver";
// 	char s2[] = "Teste de Comparacao";
// 	char s3[] = "Teste";

// 	printf("s12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d",/
//  ft_strncmp(s1, s2, 5), ft_strncmp(s2, s1, 5), ft_strncmp(s1, s3, 5),/
//   ft_strncmp(s3, s1, 5), ft_strncmp(s2, s3, 5), ft_strncmp(s3, s2, 5));
// 	printf("\n\ns12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d",/
//  strncmp(s1, s2, 5), strncmp(s2, s1, 5), strncmp(s1, s3, 5),/
//   strncmp(s3, s1, 5), strncmp(s2, s3, 5), strncmp(s3, s2, 5));
// }
