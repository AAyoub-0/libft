/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:28:47 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/08 17:51:03 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && size > i)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

int main(void)
{
	char dest[] = "A";
	char dest1[] = "A";
	char src[] = "hello !";
	char src1[] = "hello !";
	int sizeeeee = 20;

	size_t size = strlcpy(dest, src, sizeeeee);
	size_t size1 = ft_strlcpy(dest, src, sizeeeee);
	printf("strlcpy : return : %u, dest : %s", sizeeeee, dest);
	printf("\nft_strcpy : return : %u, dest : %s", sizeeeee, dest);
        if (size == size1)
                puts("\nTEST SUCCESS");
        else
                puts("\nTEST FAILED");
}