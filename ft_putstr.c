/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:13:57 by fael-bou          #+#    #+#             */
/*   Updated: 2021/12/09 17:06:36 by fael-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_putstr(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[i])
		i++;
	write(1, str, i);
	return (i);
}
