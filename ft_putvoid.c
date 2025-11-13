/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:43:12 by guantino          #+#    #+#             */
/*   Updated: 2025/11/13 14:05:23 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putvoid(void *ptr)
{
	unsigned int	uptr;
	int				len;

	if (!ptr)
		return (ft_putstr("(nil)"));
	len = 0;
	uptr = (unsigned long)ptr;
	len += ft_putstr("0x");
	len += ft_puthexnbr(uptr, 0);
	return (len);
}
