/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:38:20 by yasser            #+#    #+#             */
/*   Updated: 2023/11/13 20:38:21 by yasser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_put_downcase_hex(unsigned int num);
int	ft_putnbr(int num);
int	ft_putpercentsign(void);
int	ft_putptr(void *ptr);
int	ft_putstr(char *s);
int	ft_putusignedint(unsigned int num);
int	ft_put_upcase_hex(unsigned int num);
// int	ft_printf(const char *str, ...);

#endif
