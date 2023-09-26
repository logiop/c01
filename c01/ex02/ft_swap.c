/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvernare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:46:00 by gvernare          #+#    #+#             */
/*   Updated: 2023/09/26 16:30:28 by gvernare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void ft_swap(int *a, int *b)
{
	int	asd = *a;
	*a = *b;
	*b = asd;
}

int	main()
{
	int	num	=	42;
	int	num2	=	32;
	ft_swap(&num, &num2);
	printf("num: %d and num2: %d\n", num, num2);
}
