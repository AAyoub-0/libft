/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:41:13 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/18 17:38:40 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**nlst;
	t_list	*tmp;

	nlst = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(nlst, del);
			free(nlst);
			free(tmp);
			return (NULL);
		}
		ft_lstadd_back(nlst, tmp);
		lst = lst->next;
	}
	free(tmp);
	return (*nlst);
}
