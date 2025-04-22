/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 19:53:26 by migusant          #+#    #+#             */
/*   Updated: 2025/04/03 19:54:27 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}
	return (count);
}

/* int	main(void)
{
	int		count;
	char	*str;

	str = "abcdefghijklmnopqrstuvwxyz";
	count = ft_strlen(str);
	printf("The string has %d characters.\n", count);
	return (0);
} */
