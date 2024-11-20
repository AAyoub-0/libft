/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:45:15 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/19 17:58:08 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *tab)
{
	size_t	size;

	size = 0;
	while (tab[size] != '\0')
		size++;
	return (size);
}

// int	main(void)
// {
// 	char tab[] = "0123456789";

// 	printf("%ld", ft_strlen("\0"));
// 	// printf("%ld", strlen("\0"));
// }