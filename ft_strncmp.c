/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aayoub <aayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:45:56 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/10 00:28:01 by aayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (((unsigned char)*s1 == (unsigned char)*s2)
		&& (*s1 && *s2) && (n > 1))
	{
		s1++;
		s2++;
		n--;
	}
	return (((unsigned char)*s1 - (unsigned char)*s2));
}

// int     main(void)
// {
// 		char    s1[] = "1234";
// 		char    s2[] = "1235";

// 		printf("ft_strncmp : %d", ft_strncmp(s1, s2, 3));
// 		printf("\nstrncmp : %d\n", strncmp(s1, s2, 3));
// }