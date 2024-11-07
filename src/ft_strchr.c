/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:52:35 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/07 16:26:15 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *tab)
{
	size_t	size;

	size = 0;
	while (tab[size])
		size++;
	return (size);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return (&s[i]);
        i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return ('\0');
}

int     main(void)
{
        char    str[] = "Hello world !";
        char    c = '\0';

        printf("ft_strchr : $%s<", ft_strchr(str, c));
        printf("\nstrchr : $%s<", strchr(str, c));
}