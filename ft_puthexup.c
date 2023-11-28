/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:03:26 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/28 18:53:51 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexup(unsigned int nb, int i)
{
	if (nb >= 16)
		i = ft_puthexup(nb / 16, i);
	if (nb % 16 < 10)
		i += ft_putchar(nb % 16 + '0');
	else
		i += ft_putchar(nb % 16 - 10 + 'A');
	return (i);
}
