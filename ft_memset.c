/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:12:55 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/06 15:30:25 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	void *tab;

	i = 0;
	tab = s;
	while(i < n)
	{
		*(unsigned char *)s = (unsigned char)c;
		s += sizeof(*s);
		i += sizeof(*s);
	}
	return (tab);
}

int main(void)
{
	int array [] = { 54, 85, 20, 63, 21 };
	char arrays[] = "aaaaaaaaa";
    size_t size = sizeof( int ) * 5;
    size_t sizes = sizeof( char ) * 9;
    int length;

    /* Display the initial values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    /* Reset the memory bloc */
    ft_memset( array, 0, size );

    /* Display the new values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
    
    return 0;
}