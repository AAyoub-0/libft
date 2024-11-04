/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:45:15 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/04 17:21:05 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *tab)
{
	int	size;

	size = 0;
	while (tab[size])
		size++;
	return (size);
}

int	main(void)
{
	char tab[] = "0123456789";

	printf("%d", ft_strlen(tab));
}