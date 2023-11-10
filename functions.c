/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:48:31 by yasser            #+#    #+#             */
/*   Updated: 2023/11/09 20:41:00 by yasser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putptr(void *ptr)
{
	unsigned long long	pointer_number;
	char				str[digit_count(pointer_number)];
	char				base[] = "0123456789abcdef";
	int					i;
	int					j;

	pointer_number = (unsigned long long)ptr;
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

int	ft_putnbr(int num)
{
	char	str[digit_count(num)];
	int		number;
	int		i;

	number = num;
	i = 0;
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	while (number != 0)
	{
		str[i] = (number % 10) + '0';
		number /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		write(1, &str[i], 1);
	}
	return (1);
}

int	ft_putusignedint(unsigned int num)
{
	char			str[digit_count(num)];
	unsigned int	number;
	int				i;

	number = num;
	i = 0;
	while (number != 0)
	{
		str[i] = (number % 10) + '0';
		number /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		write(1, &str[i], 1);
	}
	return (1);
}
int	put_downcase_hex(int num)
{
	char	str[digit_count(num)];
	char	base[] = "0123456789abcdef";
	int		number;
	int		i;

	number = num;
	i = 0;
	if (number == 0)
		return (write(1, "0", 1));
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	while (number != 0)
	{
		str[i] = base[number % 16];
		number /= 16;
		i++;
	}
    write(1, "0x", 2);
	while (i > 0)
	{
		i--;
		write(1, &str[i], 1);
	}
	return (1);
}

int	put_upcase_hex(int num)
{
	char	str[digit_count(num)];
	char	base[] = "0123456789ABCDEF";
	int		number;
	int		i;

	number = num;
	i = 0;
	if (number == 0)
		return (write(1, "0", 1));
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	while (number != 0)
	{
		str[i] = base[number % 16];
		number /= 16;
		i++;
	}
    write(1, "0x", 2);
	while (i > 0)
	{
		i--;
		write(1, &str[i], 1);
	}
	return (1);
}

int	ft_putpercentsign(void)
{
	return (write(1, "%", 1));
}

int	main(void)
{
	char	*ptr;

	ptr = "hello";
	ft_putptr(ptr);
	return (0);
}
