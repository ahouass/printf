/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouass <ahouass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:47:58 by ahouass           #+#    #+#             */
/*   Updated: 2024/11/25 15:45:06 by ahouass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_format(const char format, va_list ptr, int *count)
{
	if (format == 'c')
		ft_putchar(va_arg(ptr, int), count);
	else if (format == 's')
		ft_putstr(va_arg(ptr, char *), count);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(ptr, int), count);
	else if (format == 'u')
		ft_putnbr_unsigned(va_arg(ptr, unsigned int), count);
	else if (format == 'p')
		ft_putnbr_pointer(va_arg(ptr, void *), count);
	else if (format == 'x')
		ft_putnbr_hexa(va_arg(ptr, unsigned int), count, "lower");
	else if (format == 'X')
		ft_putnbr_hexa(va_arg(ptr, unsigned int), count, "upper");
	else if (format == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *s, ...)
{
	va_list	ptr;
	int		count;

	va_start(ptr, s);
	count = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (*s != '\0')
				handle_format(*s, ptr, &count);
			else
				s--;
		}
		else
		{
			ft_putchar(*s, &count);
		}
		s++;
	}
	va_end(ptr);
	return (count);
}
