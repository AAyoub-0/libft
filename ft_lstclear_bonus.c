/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:22:37 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/20 18:10:35 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		l = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = l;
	}
	*lst = NULL;
}

/* int     main(void)
{
		t_list  **lst;

		ft_lstadd_back(lst, ft_lstnew("lorem"));
		ft_lstadd_back(lst, ft_lstnew("ipsum"));
		ft_lstadd_back(lst, ft_lstnew("asdasd"));
} */
