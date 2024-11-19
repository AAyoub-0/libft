/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:40:16 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/19 17:30:35 by aboumall         ###   ########.fr       */
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
		len = s_size;
	if (start >= s_size)
	{
		dst = (char *)malloc(sizeof(char));
		if (!dst)
			return ((char *)0);
		dst[0] = '\0';
		return (dst);
	}
	if (len < ft_strlen(s + start))
		d_size = len + 1;
	else
		d_size = s_size - start + 1;
	dst = (char *)malloc(d_size * sizeof(char));
	if (!dst)
		return ((char *)0);
	ft_strlcpy(dst, s + start, d_size);
	return (dst);
}

/* int     main(void)
{
        char *str = "0123456789";
        unsigned int size = 0;
        char *ret = ft_substr("0123456789", 9, 10);

        printf("$%s<\n", ret);
        if (strncmp("9", ret, ft_strlen(ret)) != 0)
        {
                printf("failure");
                return (1);
        }
        printf("success");
} */