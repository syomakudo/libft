/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skudo <skudo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:07:40 by syoma.k           #+#    #+#             */
/*   Updated: 2022/10/29 14:40:48 by skudo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	checker(char src, char c)
{
	if (src == c || src == '\0')
		return (1);
	return (0);
}

static int	count_master(char const *str, char c)
{
	int	count;
	int	j;

	count = 0;
	j = 0;
	while (str[j])
	{
		if (!(checker(str[j], c)))
			if (checker(str[j + 1], c))
				count++;
		j++;
	}
	return (count);
}

static char	**make_sp(char **split, char const *str, char c, int count)
{
	int	i;
	int	j;
	int	sub_count;

	j = 0;
	i = 0;
	while (j < count)
	{
		sub_count = 0;
		while (checker(str[i], c))
			i++;
		while (!(checker(str[i++], c)))
			sub_count++;
		split[j] = (char *)malloc(sizeof(char) * (sub_count + 1));
		if (split == NULL)
			return (NULL);
		j++;
	}
	return (split);
}

static char	**push(char **split, char const *str, char c)
{
	int	i;
	int	j;
	int	k;
	int	count;

	j = 0;
	i = 0;
	k = 0;
	count = count_master(str, c);
	while (j < count)
	{
		k = 0;
		while (checker(str[i], c))
			i++;
		while (!(checker(str[i], c)))
			split[j][k++] = str[i++];
		split[j][k++] = '\0';
		j++;
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *str, char c)
{
	int		count;
	char	**split;

	if (str == NULL)
		return (NULL);
	count = count_master(str, c);
	split = (char **)malloc(sizeof(char const *) * (count + 1));
	if (split == NULL)
		return (NULL);
	split = make_sp(split, str, c, count);
	split = push(split, str, c);
	return (split);
}

/* #include <unistd.h>
int	main(void)
{
	char	**result;
	char	str[];
	char	c;

	str[] = "01234536789";
	c = '3';
	result = push(ft_split(str, c),str, c);
	printf("%s\n",*result);
	result += 1;
	printf("%s\n",*result);
	result += 1;
	printf("%s\n",*result);
	return (0);
}
 */