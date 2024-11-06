/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:52:35 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/06 13:25:56 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == 0)
		return (&s[ft_strlen(s)]);
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return ('\0');
}

// int     main(void)
// {
//         char    str[] = "Hello world !";
//         char    c = 'z';

//         printf("ft_strchr : $%s", ft_strchr(str, c));
//         // printf("\nstrchr : $%s", strchr(str, c));
// }