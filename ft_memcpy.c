/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:08:31 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/08 17:33:30 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*c_dest;
	unsigned char	*c_src;

	i = 0;
	c_dest = (unsigned char *)dest;
	c_src = (unsigned char *)src;
	while (i < n)
	{
		c_dest[i] = c_src[i];
		i++;
	}
	return (dest);
}

int main(void)
{
	int dest [] = { 0, 0, 0, 0, 0 };
	int src [] = { 54, 85, 20, 63, 21 };
	size_t size = sizeof( int ) * 5;
	int length;

	for( length=0; length<5; length++) {
		printf( "%d ", dest[ length ] );
	}
	printf( "\n" );

	ft_memcpy(((void*)0), ((void*)0), 3);

	for( length=0; length<5; length++) {
		printf( "%d ", dest[ length ] );
	}
	printf( "\n" );

	return (0);
}