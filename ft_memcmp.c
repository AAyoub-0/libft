/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aayoub <aayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:43:55 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/09 23:26:08 by aayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((*str1 == *str2) && (n > 1))
	{
		str1++;
		str2++;
		n--;
	}
	return (*str1 - *str2);
}

// int	main(void)
// {
// 	char str1[] = {-128, 0, 127, 0};
// 	char str2[] = {0, 0, 127, 0};
// 	int	size = 0;

// 	int	ret = memcmp(str1, str2, size);
// 	int	ret1 = ft_memcmp(str1, str2, size);
// 	printf("memcmp : return : %d", ret);
// 	printf("\nft_memcmp : return : %d", ret1);
// 	if (ret == ret1)
// 		puts("\nTEST SUCCESS");
// 	else
// 		puts("\nTEST FAILED");
// }