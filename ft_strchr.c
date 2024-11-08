/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:52:35 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/08 17:19:54 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)&s[i]);
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return ((char *)0);
}

/* int     main(void)
{
		char    str[] = "Hello world !";
		char    c = '\0';

		printf("ft_strchr : $%s<", ft_strchr(str, c));
		printf("\nstrchr : $%s<", strchr(str, c));
} */