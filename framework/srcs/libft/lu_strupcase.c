/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lu_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 10:36:13 by jtoty             #+#    #+#             */
/*   Updated: 2016/11/04 12:30:12 by jtoty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lu_libft.h"

char	*lu_strupcase(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		str[i] = lu_toupper(str[i]);
		i++;
	}
	return (str);
}