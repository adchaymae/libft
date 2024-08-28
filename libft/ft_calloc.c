/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlane <cadlane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:31:30 by cadlane           #+#    #+#             */
/*   Updated: 2023/12/10 03:14:44 by cadlane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*r;

	r = malloc(num_elements * element_size);
	if (!r)
		return (NULL);
	ft_bzero(r, num_elements * element_size);
	return (r);
}
