/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:21:00 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/20 18:10:25 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	if (last)
		last->next = new;
	else
		*lst = new;
}

/* int     main(void)
{
		t_list  *val1 = NULL;
		t_list  *val2 = NULL;

		ft_lstadd_back(&val1, ft_lstnew((void*)1));
		printf("v1 last content [%d]\n", (int)val1->content);
		ft_lstadd_back(&val1, ft_lstnew((void*)2));
		printf("v1 last content [%d]\n", (int)val1->next->content);
		ft_lstadd_back(&val2, ft_lstnew((void*)3));
		printf("v2 last content [%d]\n", (int)val2->content);
		ft_lstadd_back(&val2, ft_lstnew((void*)4));
		printf("v2 last content [%d]\n", (int)val2->next->content);
		ft_lstadd_back(&val1, val2);
} */