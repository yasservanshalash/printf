/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignedint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:06:04 by yasser            #+#    #+#             */
/*   Updated: 2023/11/13 15:43:21 by yasser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

static int	digit_count(int n)
{
	int	number;
	int	count;

	number = n;
	count = 0;
	while (number != 0)
	{
		number /= 10;
		count++;
	}
	return (count);
}

int	ft_putusignedint(unsigned int num)
{
	char			*str;
	unsigned int	number;
	int				i;
	int				j;

	str = (char *)malloc(digit_count(num) * sizeof(char));
	if (str == NULL)
		return (-1);
	number = num;
	i = 0;
	while (number != 0)
	{
		str[i++] = (number % 10) + '0';
		number /= 10;
	}
	j = i;
	while (i-- > 0)
		write(1, &str[i], 1);
	return (j);
}
