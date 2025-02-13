/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouass <ahouass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:34:21 by ahouass           #+#    #+#             */
/*   Updated: 2024/11/25 15:47:20 by ahouass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hexa_pointer(unsigned long long n, int *count, char *cas)
{
	char	c;
	char	*lower_base;
	char	*upper_base;

	lower_base = "0123456789abcdef";
	upper_base = "0123456789ABCDEF";
	if (n < 16)
	{
		if (*cas == 'l')
			c = lower_base[n];
		else
			c = upper_base[n];
		ft_putchar(c, count);
	}
	else
	{
		ft_putnbr_hexa_pointer(n / 16, count, cas);
		ft_putnbr_hexa_pointer(n % 16, count, cas);
	}
}

void	ft_putnbr_pointer(void *p, int *count)
{
	unsigned long long	n;

	if (!p)
		n = 0;
	else
		n = (unsigned long long)p;
	ft_putstr("0x", count);
	ft_putnbr_hexa_pointer(n, count, "lower");
}
