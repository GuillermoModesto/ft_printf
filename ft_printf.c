/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:44:54 by guantino          #+#    #+#             */
/*   Updated: 2025/11/12 16:50:50 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	parse_and_len(char type, va_list args)
{
	if (type == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (type == 'p')
	{
		// The void * pointer argument has to be printed in hexadecimal format.
	}
	else if (type == 'd')
	{
		// Prints a decimal (base 10) number.
	}
	else if (type == 'i')
	{
		// Prints an integer in base 10.
	}
	else if (type == 'u')
	{
		// Prints an unsigned decimal (base 10) number.
	}
	else if (type == 'x')
	{
		// Prints a number in hexadecimal (base 16) lowercase format.
	}
	else if (type == 'X')
	{
		// Prints a number in hexadecimal (base 16) uppercase format.
	}
	else
	{
		ft_putchar(type);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	len;
	size_t	i;
    
	va_start(args, str);
	len = 0;
	i = 0;
	while(str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += parse_and_len(str[i], args);
		}
		else
		{
			ft_putchar(str[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
