/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:02:21 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/07 14:04:03 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t  i;
	unsigned char   *tab;

	i = 0;
	tab = (unsigned char *)s;
	while(i < n)
	{
		tab[i] = (unsigned char)0;
                i++;
	}
	return (s);
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
    ft_bzero( array, size );

    /* Display the new values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
    
    return 0;
}