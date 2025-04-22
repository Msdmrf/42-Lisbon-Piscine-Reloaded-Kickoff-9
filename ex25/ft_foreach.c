/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:39:33 by migusant          #+#    #+#             */
/*   Updated: 2025/04/04 17:08:44 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdlib.h>

//void    ft_putnbr(int nb);

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

/* int	main(void)
{
	int	i;
	int	*tab;
	int	size;
	int	max;
	int	min;

	min = 0;
	max = 5000;
	size = max - min;
	if (min >= max)
		return (0);
	tab = (int *)malloc(size * sizeof(int));
	if (!tab)
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	ft_foreach(tab, 1001, &ft_putnbr);
	return (0);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	str[12];

	i = 0;
	if (nb == 0)
		write (1, "0", 1);
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb > 0)
	{
		while (nb != 0)
		{
			str[i] = '0' + (nb % 10);
			nb = nb / 10;
			i++;
		}
		while (--i >= 0)
			write (1, &str[i], 1);
	}
	write(1, "\n", 1);
} */
