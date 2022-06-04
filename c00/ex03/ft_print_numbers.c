/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 23:02:49 by shahn             #+#    #+#             */
/*   Updated: 2022/02/09 18:05:30 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	algarismo;

	i = 0;
	algarismo = 48;
	while (i < 10)
	{
		write(1, &algarismo, 1);
		algarismo++;
		i++;
	}
}
