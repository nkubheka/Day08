/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:07:30 by nkubheka          #+#    #+#             */
/*   Updated: 2020/06/25 14:17:36 by nkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define ABS(a) (a) < 0 ? -(a) : (a)
int main(void)
{
	write("%d\n", ABS(-3) + 1);
	return 0;
}
