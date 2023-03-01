/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:06:47 by andreamargi       #+#    #+#             */
/*   Updated: 2023/01/24 11:02:14 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned const char	*ch;

	ch = str;
	while (n--)
	{
		if (*ch == (unsigned char)c)
			return ((void *)ch);
		ch++;
	}
	return (0);
}
