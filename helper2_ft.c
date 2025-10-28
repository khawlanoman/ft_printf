#include "ft_printf.h"

////////////ft_base16_lower///////////
int    ft_base16_lower(unsigned long n)
{
    int count = 0;
	char str[16] = "0123456789abcdef";
	if (n >= 16)
		ft_base16_lower(n / 16);
    count++;
	ft_putchar(str[n % 16]);
    return (count);
}
////////////ft_base16_upper///////////
int    ft_base16_upper(unsigned int n)
{   int count = 0;
	char str[16] = "0123456789ABCDEF";
	if (n >= 16)
		ft_base16_upper(n / 16);
    count++;
	ft_putchar(str[n % 16]);
    return(count);
}

void ft_putptr(void *ptr)
{
	if (!ptr)
		return ;
	unsigned long p = (unsigned long)ptr;
	ft_putchar('0');
	ft_putchar('x');
	ft_base16_lower(p);

}