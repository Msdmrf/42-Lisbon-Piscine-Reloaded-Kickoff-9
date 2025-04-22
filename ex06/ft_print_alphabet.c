/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:33:20 by migusant          #+#    #+#             */
/*   Updated: 2025/04/03 19:01:31 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	ch;

	ch = 'a';
	while (ch <= 'z')
	{
		ft_putchar(ch);
		ch++;
	}
}

/* int	main(void)
{
	ft_print_alphabet();
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
} */
