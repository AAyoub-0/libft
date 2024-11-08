/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:02:21 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/08 13:17:47 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*tab;

	i = 0;
	tab = (unsigned char *)s;
	while (i < n)
	{
		tab[i] = (unsigned char)0;
		i++;
	}
}

/* int main(void)
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

	ft_bzero( array, size );

	for( length=0; length<5; length++) {
		printf( "%d ", array[ length ] );
	}
	printf( "\n" );

	return (0);
} */