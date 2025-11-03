/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper2_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khnoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:52:02 by khnoman           #+#    #+#             */
/*   Updated: 2025/10/31 09:57:11 by khnoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

////////////ft_base16_lower///////////
int	ft_base16_lower(unsigned int n)
{
	int		count;
	char	*str;

	count = 0;
	str = "0123456789abcdef";
	if (n >= 16)
		count += ft_base16_lower(n / 16);
	count +=ft_putchar(str[n % 16]);
	return (count);
}
////////////ft_base16_upper///////////

int	ft_base16_upper(unsigned int n)
{
	int		count;
	char	*str1;

	count = 0;
	str1 = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_base16_upper(n / 16);
	ft_putchar(str1[n % 16]);
	count++;
	return (count);
}

/////////ft_putptr for pointer///////////////

int	ft_base16_ptr(unsigned long n)
{
	int		count;
	char	*str;

	count = 0;
	str = "0123456789abcdef";
	if (n >= 16)
		count += ft_base16_ptr(n / 16);
	count +=ft_putchar(str[n % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int count;

	count = 0;
	if (!ptr)
		return(ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_base16_ptr((unsigned long)ptr);
	return (count);
}
