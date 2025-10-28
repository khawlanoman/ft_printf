#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *k, ...);
int    ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int    ft_putnbr_unsigned(unsigned int n);
int    ft_base16_lower(unsigned long n);
int    ft_base16_upper(unsigned int n);
int   ft_putptr(void *ptr);

#endif