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
	if (argc < 4)
	{
		printf("\n --- input like this ---\n");
		printf(" --- ./a.out \"apple\" \"applz\" \"6\"     ---\n\n");
	}
	else
	{
		printf("\n str1 = %s\n", argv[1]);
		printf(" str2 = %s\n", argv[2]);
		printf(" n = %d\n\n", atoi(argv[3]));

		int	a;
		int b;

		printf(" a = memcmp(argv[1], argv[2], atoi(argv[3]))\n");
		printf(" b = ft_memcmp(argv[1], argv[2], atoi(argv[3]))\n");
		a = memcmp(argv[1], argv[2], atoi(argv[3]));
		b = ft_memcmp(argv[1], argv[2], atoi(argv[3]));
		printf(" a = %d\n", a);
		printf(" b = %d\n\n", b);
	}
	return(0);
}
