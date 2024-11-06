/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:13:10 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/06 11:39:51 by aboumall         ###   ########.fr       */
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

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t dst_len;
    size_t src_len;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    i = 0;
    while(src[i] && size > i)
    {
        dst[i + dst_len] = src[i];
        i++;
    }
    dst[i + dst_len] = '\0';
    return (dst_len + src_len);
}

int main(void)
{
    char dest[20] = "test ";
    char dest1[20] = "test ";
    char src[] = "strlcpy";
    char src1[] = "strlcpy";
    int sizeeeee = 4;

    size_t size = strlcat(dest, src, sizeeeee);
    size_t size1 = ft_strlcat(dest, src, sizeeeee);
    printf("strlcat : return : %u, dest : %s", size, dest);
    printf("\nft_strlcat : return : %u, dest : %s", size, dest);
}