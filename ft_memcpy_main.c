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
	char	*p;
	char	*dst_null = (void *)0;
	char	*src_null = (void *)0;

	if (argc < 4)
	{
		printf("\n --- input dst src n like this ---\n");
		printf(" --- ./a.out \"dst\" \"src\" \"n\"   ---\n");
		printf(" --- argv[4] == \"NULL\": ft_memcpy NULL case ---\n\n");
		printf(" --- memcpy when argv[4] == \"0\" ---\n\n");
		printf(" --- argv[5] == \"NULL\": ft_memcpy NULL case ---\n\n");
	}
	else if (argv[4] == "0")
	{
		printf("\n dst = %s\n", argv[1]);
		printf(" p = memcpy(%s, %s, %s)\n", argv[1], argv[2], argv[3]);
		p = memcpy(argv[1], argv[2], atoi(argv[3]));
		printf(" dst = %s\n", argv[1]);
		printf(" p = %p\n\n", p);
	}
	else if (argv[4] == "0" && argv[5] == "NULL")
	{
		printf("dst = (void *)0");
		printf("src = (void *)0");
		printf("n = 5");
		p = memcpy(dst_null, src_null, 5);
		// printf(" dst = %s\n", argv[1]);
		printf(" p = %p\n\n", p);
	}
	else if (argv[4] == "1")
	{
		printf("\n dst = %s\n", argv[1]);
		printf(" p = ft_memcpy(%s, %s, %s)\n", argv[1], argv[2], argv[3]);
		p = ft_memcpy(argv[1], argv[2], atoi(argv[3]));
		printf(" dst = %s\n", argv[1]);
		printf(" p = %p\n\n", p);
	}

	return(0);
}
