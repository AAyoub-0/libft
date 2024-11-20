/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:05:31 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/19 20:30:26 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

/* int     main(void)
{
		t_list  *alst;
		t_list  val1;
		t_list  val2;
		t_list  val3;

		val1.content = "dasdsadasd";
		val2.content = "dasdsadasd";
		val3.content = "dasdsadasd";
		val1.next = NULL;
		val2.next = NULL;
		val3.next = NULL;

		alst = &val1;

		printf("%d", ft_lstsize(NULL));
} */