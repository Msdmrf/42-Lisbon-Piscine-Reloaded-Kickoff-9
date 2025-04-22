/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:20:48 by migusant          #+#    #+#             */
/*   Updated: 2025/04/05 15:11:21 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c, int std)
{
	write(std, &c, 1);
}

void	ft_putstr(char *str, int std)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], std);
		i++;
	}
}

int	ft_read_write_char(char **argv)
{
	int		fstatus;
	char	temp[1];

	fstatus = open(argv[1], O_RDONLY);
	if (fstatus == -1)
	{
		ft_putstr("Cannot read file.\n", 2);
		return (0);
	}
	while (read(fstatus, temp, 1) > 0)
		ft_putchar(temp[0], 1);
	if (close(fstatus) == -1)
	{
		ft_putstr("Cannot read file.\n", 2);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n", 2);
	else if (argc == 2)
	{
		if (ft_read_write_char(argv) == 0)
			return (0);
	}
	else
		ft_putstr("Too many arguments.\n", 2);
	return (0);
}
