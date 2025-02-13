/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouass <ahouass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:35:42 by ahouass           #+#    #+#             */
/*   Updated: 2024/11/25 15:47:46 by ahouass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *count)
{
	if (!s)
	{
		ft_putstr("(null)", count);
		return ;
	}
	write(1, s, ft_strlen(s));
	(*count) += ft_strlen(s);
}
