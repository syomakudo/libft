/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skudo <skudo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:14:33 by skudo             #+#    #+#             */
/*   Updated: 2022/10/29 14:42:09 by skudo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

#define SIZE 40
 
int	main(void)
{
	char	buffer1[SIZE];
	int		ch;

  buffer1[SIZE] = "computer program";
  char * ptr;
  ch = 'p';
 
  ptr = ft_strrchr( NULL, ch );
  printf( "The first occurrence of %c in '%s' is '%s'\n",
            ch, buffer1, ptr );
 
}
*/