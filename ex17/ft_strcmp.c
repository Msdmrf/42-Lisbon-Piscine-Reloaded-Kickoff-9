/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:49:25 by migusant          #+#    #+#             */
/*   Updated: 2025/04/03 16:52:34 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/* int	main(void)
{
	int		cmp;
	char	*str_1;
	char	*str_2;

	cmp = 0;
	str_1 = "String 1";
	printf("%s\n", str_1);
	str_2 = "String 2";
	printf("%s\n", str_2);
	cmp = ft_strcmp(str_1, str_2);
	if (cmp == 0)
		printf("Equal strings: return %d.\n", cmp);
	else
		printf("Different strings: return %d.\n", cmp);
	return (0);
} */
