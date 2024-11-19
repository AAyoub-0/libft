/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:41:13 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/19 16:07:09 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;
	void	*ftmp;

	head = NULL;
	while (lst)
	{
		ftmp = f(lst->content);
		if (!ftmp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		tmp = ft_lstnew(ftmp);
		if (!tmp)
		{
			ft_lstclear(&head, del);
			del(ftmp);
			return (NULL);
		}
		ft_lstadd_back(&head, tmp);
		lst = lst->next;
	}
	return (head);
}

/* void    *addOne(void * p) {void
	* r = malloc(sizeof(int)); *(int*)r = *(int*)p + 1; return (r);}

int	main(void)
{
		t_list  *alst;
		t_list  *palst;
		t_list  *result;
		int i = 2;
		alst = ft_lstnew((void *)1);
		palst = alst;
		while (i < 11)
		{
				printf("%d, ", palst->content);
				palst->next = ft_lstnew((void *)i);
				palst = palst->next;
				i++;
		}
		i = 1;
		palst = alst;

		result = ft_lstmap(palst, addOne, free);
		while (i < 11)
		{
				printf("%d, ", result->content);
				result = result->next;
				i++;
		}
} */