/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libpt.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 16:51:59 by evilsbol          #+#    #+#             */
/*   Updated: 2013/12/23 16:52:02 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPT_H
# define LIBPT_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putstr(const char *s1);
void	ft_putnbr(const int nb);
int		ft_putchar(const char c);
int		ft_printchar(va_list ap);
int		ft_printstr(va_list ap);
int		ft_printnbr(va_list ap);
int		ft_printunsigned(va_list ap);
int		ft_printoctal(va_list ap);
int		ft_printhexa(va_list ap);
int		ft_printvoid(va_list ap);

size_t	ft_strlen(const char *str);
char	*ft_itoa(int nb);
char	*ft_utoa(unsigned int nb);
char	*ft_otoa(unsigned int nb);
char	*ft_htoa(unsigned long nb);

int		ft_printf(const char *s, ...);

#endif /* ! LIBPT_H */
