/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:27:51 by aboumall          #+#    #+#             */
/*   Updated: 2024/11/07 16:00:53 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

int     ft_atoi(const char *nptr)
{
        int     i;
        int     result;
        int     sign;

        i = 0;
        result = 0;
        sign = 1;
        while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
                i++;
        if (nptr[i] == '-' || nptr[i] == '+')
        {
                if (nptr[i] == '-')
                        sign *= -1;       
                if (nptr[i + 1] == '-' || nptr[i + 1] == '+' || !ft_isdigit(nptr[i + 1]))
                        return (0);
                i++;
        }
        while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
        return (result * sign);
}

int     main(void)
{
        char    d[] = "\t\t\t\t\t\n\n\n\n\n\n   -+1 2";

        printf("%d", atoi(d));
        printf("\n%d", ft_atoi(d));
}