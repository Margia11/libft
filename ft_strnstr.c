/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:48:13 by andreamargi       #+#    #+#             */
/*   Updated: 2023/02/02 19:33:17 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystk, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystk && len == 0)
		return (0);
	if (*needle == '\0')
		return ((char *)haystk);
	while (haystk[i] && i < len)
	{
		j = 0;
		while (haystk[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystk + i);
		}
		i++;
	}
	return (NULL);
}
