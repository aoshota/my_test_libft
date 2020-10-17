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

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("\n --- input like this ---\n");
		printf(" --- ./a.out \"word\"       ---\n\n");
	}
	else
	{
		size_t a;
		size_t b;

		printf("\n s = %s\n\n", argv[1]);

		a = strlen(argv[1]);
		b = ft_strlen(argv[1]);

		printf(" a = strlen(s)\n");
		printf(" b = ft_strlen(s)\n");

		printf(" a = %ld\n", a);
		printf(" b = %ld\n\n", b);
	}
	return(0);
}
