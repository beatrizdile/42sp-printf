/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedos-sa <bedos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 08:11:24 by bedos-sa          #+#    #+#             */
/*   Updated: 2023/06/12 10:48:59 by bedos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

// printf_main
int		ft_printf(const char *str, ...);

// printf_utils
size_t	ft_strlen(const char *str);
int		ft_putchar(char ch);
int		ft_putstr(char *s);
int		ft_putptr(unsigned long num, int i);
int		convertions(const char *str, int i, va_list x);

// print_outs
int		ft_putint(int num);
int		ft_unsign(unsigned int nb);
int		ft_puthexlow(const char *str, int i, unsigned int num);
int		ft_puthexupper(const char *str, int i, unsigned int num);

#endif