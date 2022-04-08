/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didos-sa <didos-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 01:29:15 by didos-sa          #+#    #+#             */
/*   Updated: 2022/04/08 01:47:18 by didos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t	counter;

	counter = 0;
	while (counter < count)
	{
		((char *) dest)[counter] = ((char *) src)[counter];
		counter++;
	}
	return (dest);
}
