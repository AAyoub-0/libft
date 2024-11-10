/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aayoub <aayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:52:35 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/10 02:05:02 by aayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = (unsigned char)c;
	while (s[i])
	{
		if ((unsigned char)s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return ((char *)0);
}

// int     main(void)
// {
// 		char str[] = "teste";
// 		char    c = 1024;

// 		printf("ft_strchr : $%s<", ft_strchr(str, c));
// 		printf("\nstrchr : $%s<\n", strchr(str, c));
// }