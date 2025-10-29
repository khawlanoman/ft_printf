/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper2_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khnoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:52:02 by khnoman           #+#    #+#             */
/*   Updated: 2025/10/29 11:00:49 by khnoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

////////////ft_base16_lower///////////

int	ft_base16_lower(unsigned long n)
{
	int		count;
	char	str[16];

	count = 0;
	str[16] = "0123456789abcdef";
	if (n >= 16)
		count += ft_base16_lower(n / 16);
	ft_putchar(str[n % 16]);
	count++;
	return (count);
}
////////////ft_base16_upper///////////

int	ft_base16_upper(unsigned int n)
{
	int		count;
	char	str[16];

	conut = 0;
	str[16] = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_base16_upper(n / 16);
	ft_putchar(str[n % 16]);
	count++;
	return (count);
}

/////////ft_putptr for pointer///////////////

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	p;

	count = 0;
	if (!ptr)
		return (0);
	p = (unsigned long)ptr;
	count += ft_putchar('0');
	count += ft_putchar('x');
	count += ft_base16_lower(p);
	return (count);
}
