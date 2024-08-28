/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlane <cadlane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:21:07 by cadlane           #+#    #+#             */
/*   Updated: 2023/12/10 00:42:54 by cadlane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	myint;

	sign = 1;
	i = 0;
	myint = 0;
	while (((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ' ))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		myint = (myint * 10) + str[i] - '0';
		i++;
	}
	return (sign * myint);
}
