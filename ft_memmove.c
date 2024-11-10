/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aayoub <aayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:07:25 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/10 02:51:04 by aayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_f(unsigned char *dest,
	const unsigned char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

static void	copy_b(unsigned char *dest,
	const unsigned char *src, size_t n)
{
	size_t	i;

	i = n;
	while (i > 0)
	{
		dest[i - 1] = src[i - 1];
		i--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		copy_f((unsigned char *)dest, (const unsigned char *)src, n);
	else
		copy_b((unsigned char *)dest, (const unsigned char *)src, n);
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
