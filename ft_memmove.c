/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:07:25 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/08 12:57:07 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*c_dest;
	unsigned char	*c_src;

	c_dest = (unsigned char *)dest;
	c_src = (unsigned char *)src;
	if (c_dest < c_src)
	{
		i = 0;
		while (i < n)
		{
			c_dest[i] = c_src[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			c_dest[i - 1] = c_src[i - 1];
			i--;
		}
	}
	return (dest);
}

/* int     main()
{
	char data[] = "OpenAIAI";

	ft_memmove(data + 3, data, 5); 
		// Copie "OpenA" dans la zone à partir de "enAI"
	printf("Avec chevauchement (memmove): %s\n", data); // Affiche "OpeOpenA"

	return (0);
} */
