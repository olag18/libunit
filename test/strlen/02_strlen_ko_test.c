/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strlen_ko_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 00:02:16 by jtoty             #+#    #+#             */
/*   Updated: 2017/02/12 18:08:14 by jtoty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "lu_libft.h"

int			strlen_ko_test_02(void)
{
	if (lu_strlen("Hello !") == strlen("Hi !"))
		return (0);
	return (-1);
}
