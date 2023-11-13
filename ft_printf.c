/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:55:15 by yasser            #+#    #+#             */
/*   Updated: 2023/11/13 17:55:16 by yasser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdarg.h>
#include <stdlib.h>

int	ft_printf(const char *str, ...)
{
	va_list		args;
	const char	*string = str;
	int			i;
	int			counter;

	va_start(args, str);
	i = 0;
	counter = 0;
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			if (string[i] == 'c')
				counter += ft_putchar((char)va_arg(args, int));
			if (string[i] == 's')
				counter += ft_putstr(va_arg(args, char *));
			if (string[i] == 'p')
				counter += ft_putptr(va_arg(args, void *));
			if (string[i] == 'd' || string[i] == 'i')
				counter += ft_putnbr(va_arg(args, int));
			if (string[i] == 'u')
				counter += ft_putusignedint(va_arg(args, unsigned int));
			if (string[i] == 'x')
				counter += ft_put_downcase_hex(va_arg(args, unsigned int));
			if (string[i] == 'X')
				counter += ft_put_upcase_hex(va_arg(args, unsigned int));
			if (string[i] == '%')
				counter += ft_putpercentsign();
		}
		else
		{
			ft_putchar(string[i]);
			counter++;
		}
		i++;
	}
	va_end(args);
	return (counter);
}

int	main(void)
{
	int	*ptr;

	ptr = malloc(sizeof(int));
	ft_printf("%d\n", ft_printf("%p\n%s\n%X\n", ptr, "hello world", 420));
	printf("%d\n", printf("%p\n%s\n%X\n", ptr, "hello world", 420));
}
