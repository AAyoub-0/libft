/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:12:55 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/13 20:32:22 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tab;

	i = 0;
	tab = (unsigned char *)s;
	while (i < n)
	{
		tab[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/* int     main(void)
{
		int array [] = { 54, 85, 20, 63, 21 };
		char arrays[] = "aaaaaaaaa";
		size_t size = sizeof( int ) * 5;
		size_t sizes = sizeof( char ) * 9;
		int length;

		for( length=0; length<5; length++) {
				printf( "%d ", array[ length ] );
		}
		printf( "\n" );

		ft_memset( array, 0, size );

		for( length=0; length<5; length++) {
				printf( "%d ", array[ length ] );
		}
		printf( "\n" );

		return (0);
} */