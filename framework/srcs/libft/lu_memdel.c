/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lu_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 10:28:19 by jtoty             #+#    #+#             */
/*   Updated: 2016/11/09 14:02:56 by jtoty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	lu_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
