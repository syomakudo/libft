/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skudo <skudo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:42:36 by skudo             #+#    #+#             */
/*   Updated: 2022/10/29 14:38:11 by skudo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (new)
	{
		if (*lst)
		{
			list = ft_lstlast(*lst);
			list->next = new;
		}
		else
			*lst = new;
	}
}
