/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:00:24 by andreamargi       #+#    #+#             */
/*   Updated: 2023/02/02 19:32:02 by amargiac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dstlen;

	if (!src && !dst)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	dstlen = ft_strlen(dst);
	if (size <= dstlen)
		return (ft_strlen(src) + size);
	ft_strlcpy((dst + dstlen), src, (size - dstlen));
	return (dstlen + ft_strlen(src));
}
