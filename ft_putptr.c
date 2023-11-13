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

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

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

int	ft_putptr(void *ptr)
{
	unsigned long long	pointer_number;
	char				*str;
	char				*base;
	int					i;
	int					j;

	pointer_number = (unsigned long long)ptr;
	str = (char *)malloc(digit_count(pointer_number) * sizeof(char));
	base = "0123456789abcdef";
	i = 0;
	while (pointer_number != 0)
	{
		str[i] = base[pointer_number % 16];
		pointer_number /= 16;
		i++;
	}
	j = i + 1;
	write(1, "0x", 2);
	while (i > 0)
	{
		i--;
		write(1, &str[i], 1);
	}
	return (j + 1);
}
// int main()
// {
// 	int i = 9;
// 	int *p = (int*)malloc(sizeof(int));
// 	ft_putptr(p);
// 	printf("\n%p", p);
// }