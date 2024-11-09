/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aayoub <aayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:57:37 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/10 00:00:27 by aayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return ((void *)0);
}

// int     main(void)
// {
// 		char buffer[] = {0, 1, 2 ,3 ,4 ,5};
// 		char c = 2 + 256;
// 		size_t n = 3;

// 		printf("lenght : $%zu<\n", n);
// 		char *result = ft_memchr(buffer, c, n);
// 		char *result2 = memchr(buffer, c, n);

// 		if (result == buffer + 2) {
// 				printf("ft_memchr : Caractère '%c' trouvé à la position : %ld, $%s<\n", c, result - buffer, result);
// 				printf("\nmemchr : Caractère '%c' trouvé à la position : %ld, $%s<\n", c, result2 - buffer, result2);
// 		} else {
// 				printf("ft_memchr : Caractère '%c' non trouvé dans les %zu premiers octets. $%s<\n", c, n, result);
// 				printf("memchr : Caractère '%c' non trouvé dans les %zu premiers octets. $%s<\n", c, n, result2);
// 		}

// 		return (0);
// }