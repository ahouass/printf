/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouass <ahouass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:47:22 by ahouass           #+#    #+#             */
/*   Updated: 2024/11/25 15:45:44 by ahouass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hexa(unsigned int n, int *count, char *cas)
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
		ft_putnbr_hexa(n / 16, count, cas);
		ft_putnbr_hexa(n % 16, count, cas);
	}
}
