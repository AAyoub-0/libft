/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:08:31 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/05 15:31:20 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	void *tab;

	i = 0;
	tab = dest;
	while(i < n)
	{
		*(unsigned char *)tab = *(unsigned char *)src;
		src += sizeof(*src);
		tab += sizeof(*tab);
		i += sizeof(*tab);
	}
	return (dest);
}

int main(void)
{
	int dest [] = { 0, 0, 0, 0, 0 };
	int src [] = { 54, 85, 20, 63, 21 };
    size_t size = sizeof( int ) * 5;
    int length;

    /* Display the initial values */
    for( length=0; length<5; length++) {
        printf( "%d ", dest[ length ] );
    }
    printf( "\n" );

    /* Reset the memory bloc */
    ft_memcpy( dest, src, size );

    /* Display the new values */
    for( length=0; length<5; length++) {
        printf( "%d ", dest[ length ] );
    }
    printf( "\n" );
    
    return 0;
}