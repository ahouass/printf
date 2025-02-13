/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouass <ahouass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:43:47 by ahouass           #+#    #+#             */
/*   Updated: 2024/11/23 12:44:17 by ahouass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
		ft_putstr("-2147483648", count);
	else if (n < 0)
	{
		n = -n;
		ft_putchar('-', count);
		ft_putnbr(n, count);
	}
	else if (n < 10)
	{
		ft_putchar(n + '0', count);
	}
	else
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
}
