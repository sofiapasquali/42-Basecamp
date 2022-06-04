/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 02:51:43 by shahn             #+#    #+#             */
/*   Updated: 2022/02/18 02:57:09 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	while (((*str >= '\t' && *str <= '\r') || *str == ' ') && *str != '\0')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1 * sign;
		str++;
	}
	while (is_number(*str))
	{
		result = (result * 10) + (*str - 48);
		str++;
	}
	return (sign * result);
}
