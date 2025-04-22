/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:49:51 by migusant          #+#    #+#             */
/*   Updated: 2025/04/03 20:04:44 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* int	main(void)
{
	int	a = 10;
	int	b = 20;

	printf("Before ft_swap: a = %d, b = %d.\n", a, b);
	ft_swap(&a, &b);
	printf("After ft_swap: a = %d, b = %d.\n", a, b);
	return (0);
} */
