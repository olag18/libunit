/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbadia <rbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 12:44:46 by rbadia            #+#    #+#             */
/*   Updated: 2016/11/15 18:19:49 by rbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_arrprint(char **array)
{
	int		y;

	y = 0;
	while (array[y] != NULL)
	{
		ft_putendl(array[y]);
		y++;
	}
}
