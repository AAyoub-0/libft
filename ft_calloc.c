/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:01:57 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/18 17:37:49 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_memset(array, 0, nmemb * size);
	return (array);
}

/* int     main(void) {
	int *array;
	size_t num_elements = 10;

	// Allouer de la mémoire pour un tableau de 10 entiers
	array = (int *)calloc(num_elements, sizeof(int));

	if (array == NULL) {
		printf("Échec de l'allocation de mémoire.\n");
		return (1);
	}

	// Affiche les valeurs initiales du tableau (toutes à zéro)
	printf("{ ");
	for (size_t i = 0; i < num_elements; i++) {
		printf("%d ", array[i]);
		if (i + 1 != num_elements) printf(",");
	}
	printf("}");

	// Libérer la mémoire allouée
	free(array);

	return (0);
} */