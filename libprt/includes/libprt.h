/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/24 15:52:00 by evilsbol          #+#    #+#             */
/*   Updated: 2014/01/07 17:45:53 by evilsbol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRT_H
# define LIBPRT_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

# define DARK 	"\033[1;32m"
# define CYAN	"\033[1;36m"
# define YELLOW	"\033[32m"
# define RED	"\033[1;31m"
# define WHITE	"\033[0m"

/*
** SRC1
*/
size_t	ft_strlen(const char *str);
char	*ft_itoa(int nb);
char	*ft_utoa(unsigned int nb);
char	*ft_otoa(unsigned int nb);
char	*ft_htoa(unsigned long nb);

void	ft_putstr(const char *s1);
void	ft_putnbr(const int nb);
int		ft_putchar(const char c);
int		ft_putint(int c);
int		ft_printchar(va_list ap);
int		ft_printstr(va_list ap);
int		ft_printnbr(va_list ap);
int		ft_printunsigned(va_list ap);
int		ft_printoctal(va_list ap);
int		ft_printhexa(va_list ap);
int		ft_printvoid(va_list ap);

/*
** SRC2
*/
void	ft_putstr_fd(int fd, const char *s1);
void	ft_putnbr_fd(int fd, const int nb);
int		ft_putchar_fd(int fd, const char c);
int		ft_putint_fd(int fd, int c);
int		ft_printchar_fd(int fd, va_list ap);
int		ft_printstr_fd(int fd, va_list ap);
int		ft_printnbr_fd(int fd, va_list ap);
int		ft_printunsigned_fd(int fd, va_list ap);
int		ft_printoctal_fd(int fd, va_list ap);
int		ft_printhexa_fd(int fd, va_list ap);
int		ft_printvoid_fd(int fd, va_list ap);

/*
** SRC3
*/
int		ft_printf(const char *s, ...);
int		ft_printf_fd(int fd, const char *s, ...);
void	ft_fatal(char *binary);

#endif /* ! LIBPRT_H */
