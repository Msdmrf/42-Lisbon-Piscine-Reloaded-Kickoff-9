/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:56:36 by migusant          #+#    #+#             */
/*   Updated: 2025/04/04 16:24:54 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	temp_nb;

	temp_nb = nb;
	if (temp_nb < 0 || temp_nb > 12)
		return (0);
	else if (temp_nb == 0 || temp_nb == 1)
		return (1);
	else
	{
		while (temp_nb > 1)
		{
			temp_nb--;
			nb = nb * temp_nb;
		}
	}
	return (nb);
}

/* int	main(void)
{
	int	nb;
	int	res;

	nb = 12;
	res = ft_iterative_factorial(nb);
	printf("%d! = %d\n", nb, res);
	return (0);
} */
