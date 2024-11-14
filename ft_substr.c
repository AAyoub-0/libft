/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:40:16 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/14 14:11:22 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	d_size;
	size_t	s_size;

	s_size = ft_strlen(s);
	if (len > s_size)
		len = ft_strlen(s);
	if (start >= s_size)
	{
		dst = (char *)malloc(sizeof(char));
		if (!dst)
			return ((char *)0);
		dst[0] = '\0';
		return (dst);
	}
	if (len < s_size)
		d_size = len + 1;
	else
		d_size = s_size - start + 1;
	dst = (char *)malloc(d_size * sizeof(char));
	if (!dst)
		return ((char *)0);
	ft_strlcpy(dst, s + start, d_size);
	return (dst);
}

// int     main(void)
// {
//         char *str = "la";
//         unsigned int size = 0;
//         char *ret = ft_substr("hola", 2, 3);

//         printf("$%s<\n", ret);
//         if (strncmp(str, ret, ft_strlen(str)) != 0)
//         {
//                 printf("failure");
//                 return (1);
//         }
//         printf("success");
// }