/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skudo <skudo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:34:15 by skudo             #+#    #+#             */
/*   Updated: 2022/10/29 14:41:55 by skudo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*cmp;

	cmp = (unsigned char *)s2;
	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while ((*(unsigned char *)s1 != '\0' || *cmp != '\0') && i < n)
	{
		if (*(unsigned char *)s1 != *cmp)
			return (*(unsigned char *)s1 - *cmp);
		s1++;
		cmp++;
		i++;
	}
	return (0);
}

/*
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int	main(void)
{
	char	str1[];
	char	str2[];
	int		i;
	char	str3[];
	char	str4[];
	int		q;

	str1[] = "Hello";
	str2[] = "Hello00";
		str2[5] = -42;
	i = ft_strncmp(NULL, str2, 0);
	printf("%d\n", i);
	str3[] = "Hello";
	str4[] = "Hello00";
		str4[5] = -42;
	q = strncmp(NULL, str4, 0);
	printf("%d\n", q);
}
*/