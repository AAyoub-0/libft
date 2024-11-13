/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:15:13 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/13 20:46:25 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	str_size(char const *s, char c)
{
	size_t	i;
	char	*pstr;

	pstr = s;
	i = 0;
	c = (unsigned char)c;
	while ((unsigned char)pstr[i] != c)
		i++;
	return (i);
}

size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			if (s[i + 1] == c)
				count++;
			i++;
		}
		i++;
	}
	return (count);
}

size_t	get_word_index(char const *s, char c, size_t i)
{
	size_t	j;
	size_t	count;

	j = 0;
	count = 0;
	while (s[j])
	{
		while (s[j] != c && s[j])
		{
			if (s[j + 1] == c)
				count++;
			j++;
		}
		if (count == i)
                {
                        while (s[j - 1] != c)
                                j--;
			return (j);
                }
		j++;
	}
	return (0);
}

void	push_words(char const *s, char c, char **strs, size_t i)
{
	size_t	j;

	j = 0;
        strs[i] = (char *)malloc(str_size(s + get_word_index(s, c, i + 1), c));
        ft_strlcpy(strs[i], s + get_word_index(s, c, i + 1), str_size(s + get_word_index(s, c, i + 1), c) + 1);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**strs;

	i = 0;
	strs = (char **)malloc(count_word(s, c) * sizeof(char *));
	if (!strs)
		return ((char **)0);
	while (i < count_word(s, c))
	{
                push_words(s, c, strs, i);
                i++;
	}
        return (strs);
}

int	main(void)
{
	char str[] = ";;;hel;lo;fr;om;4;2;!;;;";
        char    *dst;

        dst = ft_split(str, ';');
        size_t i = 0;
	while (*(dst + i) != NULL)
	{
		printf("Segment %d: %s\n", i, *(dst + i));
		i++;
	}
        free(dst);
}