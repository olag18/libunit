/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strlen_ko_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 00:02:16 by jtoty             #+#    #+#             */
/*   Updated: 2017/02/12 00:02:17 by jtoty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "launcher.h"

int			strlen_basic_test_02(void)
{
	if (ft_strlen("") == strlen(""))
		return (0);
	return (-1);
}