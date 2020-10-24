/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mezz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 16:13:16 by ael-mezz          #+#    #+#             */
/*   Updated: 2019/10/21 11:23:35 by ael-mezz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int n1;

	n1 = n;
	if (n1 < 0)
	{
		ft_putchar_fd('-', fd);
		n1 *= -1;
	}
	if (n1 >= 10)
	{
		ft_putnbr_fd(n1 / 10, fd);
		ft_putnbr_fd(n1 % 10, fd);
	}
	else
		ft_putchar_fd(n1 + 48, fd);
}
