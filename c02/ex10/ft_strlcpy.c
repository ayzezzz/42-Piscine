/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayaz <zayaz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:39:49 by zayaz             #+#    #+#             */
/*   Updated: 2023/10/30 14:30:50 by zayaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count])
	{
		count++;
	}
	if (size < 1)
		return (count);
	while (src[i] && i < size -1)
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
