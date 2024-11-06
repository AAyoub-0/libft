/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:47:29 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/06 16:54:58 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *strnstr(const char *big, const char *little, size_t len)
{
        int     i;
        int     j;
        
        i = 0;
        j = 0;
        if (little[0] == '\0')
                return (big);
        while(big[i] != '\0')
        {
                while(big[i + j] == little[j] && j != len && little[j])
                        j++;
                if (j == len)
                        return (&big[i]);
                j = 0;
                i++;
        }
        return ((char *)0);
}