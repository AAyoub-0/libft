/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:12:55 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/05 15:00:13 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *tab, int c, size_t n)
{
	unsigned char	i;
	void *r_tab;

	i = 0;
	r_tab = tab;
	while(i < n)
	{
		*(unsigned char *)tab = c;
		tab += sizeof(*tab);
		i += sizeof(*tab);
	}
	return (r_tab);
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