#include "ft_printf.h"

int ft_printf(const char *k, ...)
{
    int i = 0;
    int count = 0;
    va_list n1;
    va_start(n1,k);
    
    while (k[i])
    {
        if(k[i] == '%')
        {
            i++;
            if (k[i] == 'd' || k[i] == 'i')
            {
                count +=ft_putnbr(va_arg(n1, int));
            }
            else if (k[i] == 's' )
            {
                count +=ft_putstr(va_arg(n1,char *));
            }
            else if (k[i] == 'c' )
            {
                count +=ft_putchar(va_arg(n1, int));
            }
            else if (k[i] == 'u' )
            {
                count +=ft_putnbr_unsigned(va_arg(n1, unsigned int));
            }
            else if (k[i] == 'x')
            {
                count +=ft_base16_lower(va_arg(n1,unsigned long));
            }
            else if (k[i] == 'X')
            {
                count +=ft_base16_upper(va_arg(n1,unsigned int));
            }
            else if (k[i] == 'p')
            {
                count +=ft_putptr(va_arg(n1,void *));
            }
            else if (k[i] == '%' )
            {
                count +=ft_putchar(('%')); 
            }
            
        }
        else
        {
            count +=ft_putchar((k[i]));  
        }
        i++;
    }
   
    return (count);
    va_end(n1);
}

int main(void)
{
	//ft_printf("Hello %s! %%2 You scored %p points.", "Khawla", -1);
	ft_printf("\n%d",ft_printf("%d", 11));
    return 0;
}