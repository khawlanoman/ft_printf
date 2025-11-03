/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khnoman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:51:18 by khnoman           #+#    #+#             */
/*   Updated: 2025/10/29 10:43:30 by khnoman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(va_list n1, const char *k, int *i )
{
	int	count;

	count = 0;
	if (k[*i] == 'd' || k[*i] == 'i')
		count += ft_putnbr(va_arg(n1, int));
	else if (k[*i] == 's' )
		count += ft_putstr(va_arg(n1, char *));
	else if (k[*i] == 'c' )
		count += ft_putchar(va_arg(n1, int));
	else if (k[*i] == 'u' )
		count += ft_putnbr_unsigned(va_arg(n1, unsigned int));
	else if (k[*i] == 'x')
		count += ft_base16_lower(va_arg(n1, unsigned int));
	else if (k[*i] == 'X')
		count += ft_base16_upper(va_arg(n1, unsigned int));
	else if (k[*i] == 'p')
		count += ft_putptr(va_arg(n1, void *));
	else if (k[*i] == '%' )
		count += ft_putchar(('%'));
	else
	{
		write(1,"%",1);
		count += ft_putchar(k[*i]);
		count++;
	}
	return (count);
}

int	ft_printf(const char *k, ...)
{
	int		i;
	int		count;
	va_list	n1;

	i = 0;
	count = 0;
	if (!k)
	{
		return (-1);
	}
	va_start(n1, k);
	while (k[i])
	{
		if (k[i] == '%' && k[i+1] =='\0')
			{
				return(-1);
			}
		if (k[i] == '%')
		{
			i++;
			count += ft_check(n1, k, &i);
		}
		else
			count += ft_putchar((k[i]));
		i++;
	}
	return (count);
	va_end (n1);
}

/*int main(void)
{
	ft_printf("cccc%rcc%");
	printf("\n");
	printf("cccc%rcc%");
	printf("\n");
    return 0;
}*/
