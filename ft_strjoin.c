/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:26:04 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/13 18:24:14 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
        char    *str;

        if (s2[0] == '\0' && s1[0] == '\0')
        {
                str = (char *)malloc(sizeof(char));
                if (!str)
                        return ((char *)0);
                str[0] = '\0';
                return (str);
        }
        str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
        if (!str)
                return ((char *)0);
        str[0] = '\0';
        ft_strlcat(str, s1, ft_strlen(s1) + 1);
        ft_strlcat(str, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
        return (str);
}

/* int     main(void)
{
        char    *str = ft_strjoin("Bonjour ", "tout le monde");
        printf("%s", str);
} */