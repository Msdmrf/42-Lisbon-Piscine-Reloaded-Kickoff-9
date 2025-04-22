/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:41:25 by migusant          #+#    #+#             */
/*   Updated: 2025/04/03 19:05:06 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	t;

	if (n >= 0)
	{
		t = 'P';
		ft_putchar(t);
	}
	else
	{
		t = 'N';
		ft_putchar(t);
	}
}

/* int	main(void)
{
	ft_is_negative(-42);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
} */
