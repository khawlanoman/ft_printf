/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper1_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khnoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:51:50 by khnoman           #+#    #+#             */
/*   Updated: 2025/10/29 10:50:25 by khnoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
////////ft_putchar///////
int	ft_putchar(char c)
{
	int	count;

	count = 1;
	write(1, &c, 1);
	return (count);
}
////////ft_putnbr///////

int	ft_putnbr(int n)
{
	long	nb;
	int		count;

	count = 0;
	nb = n;
	if (nb == 0)
	{
		count += ft_putchar('0');
		return (count);
	}
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
		count += ft_putnbr((nb / 10));
	ft_putchar((nb % 10 + '0'));
	count++;
	return (count);
}
////////ft_putstr///////

int	ft_putstr(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		count++;
		write(1, &s[i], 1);
		i++;
	}
	return (count);
}
//////////ft_putnbr_unsigned////////////

int	ft_putnbr_unsigned(unsigned int n)
{
	int				count;
	unsigned int	nb;

	nb = n;
	count = 0;
	if (nb == 0)
	{
		ft_putchar('0');
	}
	if (nb > 9)
	{
		count += ft_putnbr((nb / 10));
	}
	count++;
	return (count);
}
