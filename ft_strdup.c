/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:28:37 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/08 12:57:16 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*dup;
	int		i;

	i = 0;
	size = ft_strlen(s) + 1;
	dup = (char *)malloc(size * sizeof(char));
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/* int     main(void)
{
		char    src[] = "Bonjour";
		char    *dup;

		dup = ft_strdup(src);
		printf("%s", dup);
} */