/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouass <ahouass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:44:26 by ahouass           #+#    #+#             */
/*   Updated: 2024/11/27 10:26:40 by ahouass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
void	ft_putchar(char c, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putstr(char *s, int *count);
size_t	ft_strlen(const char	*str);
void	ft_putnbr_unsigned(unsigned int n, int *count);
void	ft_putnbr_pointer(void *p, int *count);
void	ft_putnbr_hexa(unsigned int n, int *count, char *cas);

#endif