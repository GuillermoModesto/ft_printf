/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guantino <guantino@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:46:46 by guantino          #+#    #+#             */
/*   Updated: 2025/11/12 17:51:43 by guantino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	get_length(int num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

int	ft_puthexnbr(void *ptr)
{
	unsigned int	len;

	len = get_length(ptr);

}
