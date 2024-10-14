/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayaz <zayaz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:29:36 by zayaz             #+#    #+#             */
/*   Updated: 2023/11/05 10:34:22 by zayaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	control;

	control = 1;
	if (nb > 2147395600)
		return (0);
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (control <= nb / 2)
	{
		if (control * control == nb)
			return (control);
		control++;
	}
	return (0);
}
