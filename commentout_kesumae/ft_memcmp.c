/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skudo <skudo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:20:50 by skudo             #+#    #+#             */
/*   Updated: 2022/10/29 14:39:55 by skudo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main ()
{
	int		len;
	char	*str;
	char	*cmp;

		len = 30;
	str = calloc(30, sizeof(char));
	cmp = calloc(30, sizeof(char));
	memcpy(str, "libft-test-tokyo", 16);
	memcpy(cmp, "libft-test-tokyo", 16);
	memcpy(str + 20, "acdfg", 5);
	memcpy(cmp + 20, "acdfg", 5);
	for (int i = 21; i <= len; i++)
	{
		cmp = strndup(str, i);
		printf("%d : %d \t\t",i, ft_memcmp(str, cmp, i));
		printf("%d : %d \t\t\n",i, memcmp(str, cmp, i));
		// ASSERT_EQ_I(ft_memcmp(str, cmp, i), memcmp(str, cmp, i));
		// ASSERT_EQ_I(ft_memcmp(str, cmp, len), memcmp(str, cmp, len));
		free(cmp);
	}
	free (str);
	free (cmp);
	return (0);
}
*/

// int main(int argc, char *argv[]) {
//   // 等しい結果となる場合のサンプル
//   char s1[256] = "abcdef12347";
//   char s2[256] = "abcdef12345";
//   size_t n = 100;
//   int ret1 = 0;
//   int ret2 = 0;
//   int ret3 = 0;

//   fprintf(stdout, "s1[%.256s], s2[%.256s], n[%d]\n", s1, s2, (int)n);
//   ret1 = strcmp(s1, s2);
//   ret2 = memcmp(s1, s2, n);
//   ret3 = ft_memcmp(s1, s2, n);
//   fprintf(stdout, "strcmp [%d], memcmp [%d]\n", ret1, ret2);
//   fprintf(stdout, "strcmp [%d], ft_memcmp [%d]\n", ret1, ret3);
// }
