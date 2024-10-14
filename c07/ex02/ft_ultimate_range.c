/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayaz <zayaz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:47:37 by zayaz             #+#    #+#             */
/*   Updated: 2023/11/08 15:31:46 by zayaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	range[0] = malloc((max - min) * sizeof(int));
	if (!range[0])
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < (max - min))
	{
		range[0][i] = min + i;
		i++;
	}
	return (max - min);
}
