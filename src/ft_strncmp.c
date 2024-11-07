/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:45:56 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/06 14:56:46 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
        while((*s1 == *s2) && (*s1 && *s2) && (n > 0))
        {
                *s1++;
                *s2++;
                n--;
        }
        return (*s1 - *s2);
}

int     main(void)
{
        char    s1[] = "teSt";
        char    s2[] = "test";

        printf("ft_strncmp : %d", ft_strncmp(s1, s2, 4));
        printf("\nstrncmp : %d", strncmp(s1, s2, 4));
}