/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayaz <zayaz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:13:39 by zayaz             #+#    #+#             */
/*   Updated: 2023/11/08 15:32:00 by zayaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*buffer;

	if (min >= max)
		return (0);
	buffer = malloc((max - min) * sizeof(int));
	if (!buffer)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		buffer[i] = min + i;
		i++;
	}
	return (buffer);
}
