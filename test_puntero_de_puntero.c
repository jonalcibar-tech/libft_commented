/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test puntero de puntero.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 11:32:03 by jalcibar          #+#    #+#             */
/*   Updated: 2026/08/18 09:51:41 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//C00 ex.05 de piscina
#include <stdio.h>

void	ft_ultimate_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	k;
	int	*p1;
	int	**p2;
	int	***p3;
	int	****p4;
	int	*****p5;
	int	******p6;
	int	*******p7;
	int	********p8;
    
	p1 = &k;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	ft_ultimate_ft(&********p8);
	printf("\n%d", k);
	return (0);
}*/