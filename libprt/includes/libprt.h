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

/*
** to do: fix segfault when int is called with %s instead of %d.
*/

#ifndef LIBPRT_H
# define LIBPRT_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>

# define RESET			"\033[0m"
# define BLACK			"\033[30m"			/* Black */
# define RED			"\033[31m"			/* Red */
# define GREEN			"\033[32m"			/* Green */
# define YELLOW			"\033[33m"	 		/* Yellow */
# define BLUE			"\033[34m"			/* Blue */
# define MAGENTA		"\033[35m"			/* Magenta */
# define CYAN			"\033[36m"			/* Cyan */
# define WHITE			"\033[37m"	 		/* White */
# define BOLDBLACK		"\033[1m\033[30m"	/* Bold Black */
# define BOLDRED		"\033[1m\033[31m"	/* Bold Red */
# define BOLDGREEN		"\033[1m\033[32m"	/* Bold Green */
# define BOLDYELLOW		"\033[1m\033[33m"	/* Bold Yellow */
# define BOLDBLUE		"\033[1m\033[34m"	/* Bold Blue */
# define BOLDMAGENTA	"\033[1m\033[35m"	/* Bold Magenta */
# define BOLDCYAN		"\033[1m\033[36m"	/* Bold Cyan */
# define BOLDWHITE		"\033[1m\033[37m"	/* Bold White */

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

/*
** EXTRA
*/
void	ft_quit(int system, char *e_perso);

#endif /* ! LIBPRT_H */
