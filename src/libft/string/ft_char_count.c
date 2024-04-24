/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_char_count.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rgoossen <rgoossen@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/24 14:23:50 by rgoossen      #+#    #+#                 */
/*   Updated: 2024/04/24 14:29:49 by rgoossen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_char_count(char	*str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] == c)
			return (1);
		i++;
	}
	return (0);
}