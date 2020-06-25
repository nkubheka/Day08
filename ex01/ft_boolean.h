/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:54:25 by nkubheka          #+#    #+#             */
/*   Updated: 2020/06/25 14:02:47 by nkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int main() {
	bool arr[2] = {true, false};
	
	void	ft_putstr(char *str)
	{
		while (*str)
			write(1, str++, 1);
	}
	t_bool  ft_is_even(int nbr)
	{
		return ((EVEN(nbr)) ? TRUE : FALSE);
	}
	int		main(int argc, char **argv)
	{
		(void)argv;
		if (ft_is_even(argc - 1) == TRUE)
			ft_putstr(EVEN(EVEN_MSG);
					else
					ft_putstr(ODD_MSG);
					return(SUCCESS);
}
