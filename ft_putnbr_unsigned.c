/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouass <ahouass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:14:46 by ahouass           #+#    #+#             */
/*   Updated: 2024/11/27 10:26:50 by ahouass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n, int *count)
{
	if (n < 10)
	{
		ft_putchar(n + '0', count);
	}
	else
	{
		ft_putnbr_unsigned(n / 10, count);
		ft_putnbr_unsigned(n % 10, count);
	}
}
