#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *k, ...);
void    ft_putnbr(int n);
void	ft_putstr(char *s);
void	ft_putchar(char c);
void    ft_putnbr_unsigned(unsigned int n);
void    ft_base16_lower(unsigned long n);
void    ft_base16_upper(unsigned int n);
void ft_putptr(void *ptr);
#endif