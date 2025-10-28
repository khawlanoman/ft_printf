#include "ft_printf.h"

////////////ft_base16_lower///////////
int    ft_base16_lower(unsigned long n)
{
    int count = 0;
	char str[16] = "0123456789abcdef";
	if (n >= 16)
		count +=ft_base16_lower(n / 16);
    
	ft_putchar(str[n % 16]);
    count++;
    return (count);
}
////////////ft_base16_upper///////////
int    ft_base16_upper(unsigned int n)
{   int count = 0;
	char str[16] = "0123456789ABCDEF";
	if (n >= 16)
		count +=ft_base16_upper(n / 16);
    
	ft_putchar(str[n % 16]);
    count++;
    return(count);
}

int ft_putptr(void *ptr)
{
    int count = 0;
	if (!ptr)
		return (0);
	unsigned long p = (unsigned long)ptr;
	count +=ft_putchar('0');
	count +=ft_putchar('x');
	count +=ft_base16_lower(p);
    return(count);
}