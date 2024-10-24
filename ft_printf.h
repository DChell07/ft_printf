/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david_chellen <david_chellen@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:18:22 by david_chell       #+#    #+#             */
/*   Updated: 2024/10/14 01:01:48 by david_chell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		print_putstr_fd(char *s, int fd);
int		print_putnbr_fd(int n, int fd);
int		print_putchar_fd(char c, int fd);

int		ft_unsigned_putnbr_fd(unsigned int nb, unsigned long int fd);
int		change_base_uppercase(unsigned int nb, unsigned int base);
int		change_base_lowercase(unsigned int nb, unsigned int base);
int		change_base_adress(unsigned long int nb, unsigned long int base);
int		print_adress(void *ptr);
#endif