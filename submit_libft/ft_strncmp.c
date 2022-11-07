/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syoma.k <syoma.k@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:34:15 by skudo             #+#    #+#             */
/*   Updated: 2022/11/02 15:05:54 by syoma.k          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*cmp;
	char			segf;

	cmp = (unsigned char *)s2;
	i = 0;
	if (s1 == NULL && n == 0)
		return (0);
	segf = s1[1];
	i = (int)segf - (int)segf;
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
	int	i;

	int		i;
		i = ft_strncmp(((void *)0), "nope", 0);
	printf("%d\n", i);
	int q = strncmp(((void *)0), "nope", 3);
	printf("%d\n", q);
}
*/