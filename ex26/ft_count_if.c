/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 17:28:45 by migusant          #+#    #+#             */
/*   Updated: 2025/04/04 17:51:32 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//int	ft_strlen(char *str);

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

/* int	main(int argc, char **argv)
{
	int	res;

	(void)argc;
	res = ft_count_if(argv, &ft_strlen);
	printf("There are %d elements that return 1.\n", res);
	return (0);
}

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
} */
