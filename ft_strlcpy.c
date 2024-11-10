/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aayoub <aayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:28:47 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/10 02:37:56 by aayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && size - 1 > i)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
// 	char dest[] = "A";
// 	char dest1[] = "A";
// 	char src[] = "hello !";
// 	char src1[] = "hello !";
// 	int sizeeeee = 20;

// 	size_t size = strlcpy(dest, src, sizeeeee);
// 	size_t size1 = ft_strlcpy(dest, src, sizeeeee);
// 	printf("strlcpy : return : %u, dest : %s", sizeeeee, dest);
// 	printf("\nft_strcpy : return : %u, dest : %s", sizeeeee, dest);
//         if (size == size1)
//                 puts("\nTEST SUCCESS");
//         else
//                 puts("\nTEST FAILED");
// }