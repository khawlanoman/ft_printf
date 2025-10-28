#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
void ft_putchar(char c)
{
 write(1,&c,1);
}
/*int  sum_numbers(int count, ...)
{
    int i = 0;
    int nb = 0;
    va_list n1;
    va_start(n1,count);

    while(i < count)
    {
        nb += va_arg(n1,int);
        i++;
    }
    va_end(n1);
    return nb;
}*/

void print_strings(char *count, ...)
{
    va_list n1;
    va_start(n1,count);
    int i = 0;
    char *p ;
    while(*count)
    {
        if(*count == '%')
        {
            count++;
            if(*count == 's')
            {
                printf("%s",va_arg(n1,char *));
            }
            else if(*count == 'd')
            {
                printf("%d",va_arg(n1,int));
            }
        }
        else
        {
           ft_putchar(*count);
        }
        count++;
    }
    

    va_end(n1);
}

int main()
{
print_strings("Hello %s, your score is %d!\n", "Sweety", 42);
//int result = sum_numbers(4, 10, 20, 30, 40);
//printf("%d\n", result);
}