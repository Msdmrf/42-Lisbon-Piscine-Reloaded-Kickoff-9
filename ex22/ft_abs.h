/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 19:27:30 by migusant          #+#    #+#             */
/*   Updated: 2025/04/03 19:31:47 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Run norminette with "-R CheckDefine" flag. */

#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS(Value) abs(Value)

static inline int	abs(int Value)
{
	if (Value < 0)
		return (-Value);
	return (Value);
}

#endif
