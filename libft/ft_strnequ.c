/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ft_strnequ.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 20:09:32 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/22 15:45:03 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	else if (n == 0)
		return (1);
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (s1[i] != 0 && s2[i] != 0 && i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
