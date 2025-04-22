/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:37:14 by migusant          #+#    #+#             */
/*   Updated: 2025/04/03 19:06:41 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

/* int	main(void)
{
	char	*str;

	str = "Hello World!";
	ft_putstr(str);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
} */
