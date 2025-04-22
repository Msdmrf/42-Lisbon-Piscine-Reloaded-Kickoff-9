/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:33:51 by migusant          #+#    #+#             */
/*   Updated: 2025/04/03 16:35:51 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	int	nb;
	int	res;

//	nb = 0;
//	nb = 4;
//	nb = 36;
	nb = 99;

	res = ft_sqrt(nb);
	if (res == 0)
		printf("The sqrt of %d is an irrational number.\n", nb);
	else
		printf("The sqrt of %d is %d.\n", nb, res);
	return (0);
} */
