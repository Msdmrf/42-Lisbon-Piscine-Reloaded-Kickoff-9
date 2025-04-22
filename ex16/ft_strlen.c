/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:42:02 by migusant          #+#    #+#             */
/*   Updated: 2025/04/03 16:47:56 by migusant         ###   ########.fr       */
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
	char    *str;

//	str = "abcdefghijklmnopqrstuvwxyz";
	str = "1a3bcde8fghijkl17mnopqr25";
	count = ft_strlen(str);
	printf("The string \"%s\" has %d characters.\n", str, count);
	return (0);
} */
