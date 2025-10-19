/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:45:56 by aboumall          #+#    #+#             */
/*   Updated: 2025/10/18 23:07:06 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char)s1[i] == (unsigned char)s2[i]) && (s1[i] && s2[i])
		&& (i < n - 1))
		i++;
	return (((unsigned char)s1[i] - (unsigned char)s2[i]));
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	y;
	size_t	x;

	x = 0;
	y = 0;
	while (s1[x])
	{
		if (s1[x] != s2[y])
			return (0);
		x++;
		y++;
	}
	while (s2[y])
	{
		if (s1[x] != s2[y])
			return (0);
		y++;
		x++;
	}
	return (1);
}
