/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:53:59 by migusant          #+#    #+#             */
/*   Updated: 2025/04/03 15:55:38 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/* int	main(void)
{
	int	a, b, div, mod;

	a = 22;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d, b = %d, div = %d, mod = %d\n", a, b, div, mod);
	return (0);
} */
