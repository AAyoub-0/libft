/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:37:39 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/18 15:19:45 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (!lst)
		return (NULL);
	while (lst)
	{
		current = lst;
		lst = lst->next;
	}
	return (current);
}

/* int     main(void)
{
		t_list  *alst;
				t_list  *last;
		t_list  val1;
		t_list  val2;
		t_list  val3;

		val1.content = "dasdsadasd";
		val2.content = "dasdsadasd";
		val3.content = "dasdsadasd";
		val1.next = &val2;
		val2.next = &val3;
		val3.next = NULL;

		alst = &val1;

		last = ft_lstlast(alst);
} */