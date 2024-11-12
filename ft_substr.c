/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:40:16 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/12 13:19:12 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        char    *str;
        size_t  i;

        str = (char *)malloc((len + 1) * sizeof(char));
        if (!str)
                return ((char *)0);
        i = 0;
        while (s[i] && i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int     main(void)
{
        char    str1[] = "Bonjour tout le monde";

        printf("%s", ft_substr(str1, 1, 7));
} */