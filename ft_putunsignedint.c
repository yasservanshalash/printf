/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignedint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:06:04 by yasser            #+#    #+#             */
/*   Updated: 2023/11/10 13:36:51 by yasser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	number = num;
	i = 0;
	while (number != 0)
	{
		str[i] = (number % 10) + '0';
		number /= 10;
		i++;
	}
	j = i;
	while (i > 0)
	{
		i--;
		write(1, &str[i], 1);
	}
	return (j);
}
