/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:13:10 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/08 12:57:19 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_size;
	size_t	src_size;

	i = 0;
	dest_size = 0;
	src_size = 0;
	while (dst[dest_size])
		dest_size++;
	while (src[src_size])
		src_size++;
	if (size == 0 || size < dest_size)
		return (src_size + size);
	while (src[i] && (dest_size + i) < size - 1)
	{
		dst[dest_size + i] = src[i];
		i++;
	}
	dst[dest_size + i] = '\0';
	return (dest_size + src_size);
}

/* int     main(void)
{
	char dest[20] = "test ";
	char dest1[20] = "test ";
	char src[] = "strlcpy";
	char src1[] = "strlcpy";
	int sizeeeee = 4;

	size_t size = strlcat(dest, src, sizeeeee);
	size_t size1 = ft_strlcat(dest, src, sizeeeee);
	printf("strlcat : return (: %u, dest : %s", size, dest));
	printf("\nft_strlcat : return (: %u, dest : %s", size, dest));
} */