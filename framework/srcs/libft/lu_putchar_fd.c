/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lu_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:35:29 by jtoty             #+#    #+#             */
/*   Updated: 2016/11/05 15:40:39 by jtoty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	lu_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
