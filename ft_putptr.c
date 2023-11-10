/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:03:57 by yasser            #+#    #+#             */
/*   Updated: 2023/11/10 11:03:59 by yasser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putptr(void *ptr)
{
	unsigned long long	pointer_number;
	char				*str;
	char				*base;
	int					i;
	int					j;

	pointer_number = (unsigned long long)ptr;
	base = "0123456789abcdef";
	i = 0;
	while (pointer_number != 0)
	{
		str[i] = base[pointer_number % 16];
		pointer_number /= 16;
		i++;
	}
	j = i;
	write(1, "0x", 2);
	while (i > 0)
	{
		i--;
		write(1, &str[i], 1);
	}
	return (j);
}
