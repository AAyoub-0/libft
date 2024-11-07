/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:57:37 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/07 15:26:28 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
        size_t  i;
        unsigned char*  str;

        i = 0;
        str = (unsigned char *)s;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return ('\0');
}

int     main(void)
{
        const char buffer[] = "Bonjour tout le monde";
        char c = '\0';
        size_t n = strlen(buffer);

        char *result = ft_memchr(buffer, c, n);
        char *result2 = memchr(buffer, c, n);

        if (result != '\0' && result2 != '\0') {
                printf("ft_memchr : Caractère '%c' trouvé à la position : %ld, $%s<\n", c, result - buffer, result);
                printf("\nmemchr : Caractère '%c' trouvé à la position : %ld, $%s<\n", c, result2 - buffer, result2);
        } else {
                printf("ft_memchr : Caractère '%c' non trouvé dans les %zu premiers octets. $%s<\n", c, n, result);
                printf("memchr : Caractère '%c' non trouvé dans les %zu premiers octets. $%s<", c, n, result2);
        }

        return 0;
}