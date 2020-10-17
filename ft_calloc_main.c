/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 13:01:44 by saoyama           #+#    #+#             */
/*   Updated: 2020/10/15 13:01:44 by saoyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	*p;
	char	*c;
	char	*myc;
	int 	i;

	p = malloc(5 * sizeof(char));

	i = 0;
	printf("\n p = malloc(5 * sizeof(char))\n");
	while (i < 5)
	{
		printf(" p[%d] = %c\n", i, p[i]);
		i++;
	}
	printf("\n");

	c = calloc(5, sizeof(char));

	i = 0;
	printf("\n c = calloc(5, sizeof(char))\n");
	while (i < 5)
	{
		printf(" c[%d] = %c\n", i, c[i]);
		i++;
	}
	printf("\n");

	myc = ft_calloc(5, sizeof(char));

	i = 0;
	printf("\n myc = ft_calloc(5, sizeof(char))\n");
	while (i < 5)
	{
		printf(" myc[%d] = %c\n", i, myc[i]);
		i++;
	}
	printf("\n");

	return(0);
}
