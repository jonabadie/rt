/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabint_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabadie <jabadie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:43:44 by jabadie           #+#    #+#             */
/*   Updated: 2014/11/07 17:44:03 by jabadie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_tabint_sort(int *tab, int size)
{
	int i;
	int a;

	i = 1;
	while (i < size)
	{
		if (tab[i - 1] > tab[i])
		{
			a = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = a;
			i = 0;
		}
		i++;
	}
}
