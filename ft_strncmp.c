/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:45:56 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/21 20:20:36 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char)s1[i] == (unsigned char)s2[i]) && (s1[i] && s2[i])
		&& (i < n))
		i++;
	return (((unsigned char)s1[i] - (unsigned char)s2[i]));
}

// int     main(void)
// {
// 		char    s1[] = "1234";
// 		char    s2[] = "1235";

// 		printf("ft_strncmp : %d", ft_strncmp(s1, s2, 3));
// 		printf("\nstrncmp : %d\n", strncmp(s1, s2, 3));
// }