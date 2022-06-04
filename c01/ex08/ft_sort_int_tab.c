/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 22:33:15 by shahn             #+#    #+#             */
/*   Updated: 2022/02/13 02:49:37 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;
	int	swapdnv;

	swapdnv = 1;
	size = size -1;
	while (swapdnv != 0)
	{
		swapdnv = 0;
		i = 0;
		j = i +1;
		while (i < size)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
				swapdnv++;
			}
			j++;
			i++;
		}	
	}
}
