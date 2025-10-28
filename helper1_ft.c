#include "ft_printf.h"
#include <unistd.h>
////////ft_putchar///////
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
////////ft_putnbr///////
void	ft_putnbr(int n)
{
	long	nb;

	nb = n;
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr((nb / 10));
	}
	ft_putchar((nb % 10 + '0'));
}
////////ft_putstr///////
void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
//////////ft_putnbr_unsigned////////////
void ft_putnbr_unsigned(unsigned int n)
{
	unsigned int nb;

	nb = n;
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb > 9)
	{
		ft_putnbr((nb / 10));
	}
	ft_putchar((nb % 10 + '0'));

}
////////////ft_base16_lower///////////
void    ft_base16_lower(unsigned int n)
{
	char str[16] = "0123456789abcdef";
	if (n >= 16)
		ft_base16_lower(n / 16);
	ft_putchar(str[n % 16]);
}

void    ft_base16_upper(unsigned int n)
{
	char str[16] = "0123456789ABCDEF";
	if (n >= 16)
		ft_base16_upper(n / 16);
	ft_putchar(str[n % 16]);
}