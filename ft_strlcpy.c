/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:28:47 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/07 19:16:37 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <bsd/string.h>

static size_t ft_strlen(const char *str)
{
    size_t size;
    
    size = 0;
    while(str[size])
        size++;
    return (size);
}

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    while(src[i] != '\0' && size > i)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

int main(void)
{
    char dest[] = "";
    char dest1[] = "";
    char src[] = "test strlcpy";
    char src1[] = "test strlcpy";
    int sizeeeee = 4;

    size_t size = strlcpy(dest, src, sizeeeee);
    size_t size1 = ft_strlcpy(dest, src, sizeeeee);
    printf("strlcpy : return : %u, dest : %s", size, dest);
    printf("\nft_strcpy : return : %u, dest : %s", size, dest);
}