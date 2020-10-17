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
	if (argc < 3)
	{
		printf("\n --- input like this ---\n");
		printf(" --- ./a.out \"hello\" \"3\"      ---\n\n");
	}
	else
	{
		char	*dst;

		dst = strdup(argv[1]);

		printf("\n dst = %s\n", dst);
		int len = strlen(argv[1]);
		printf(" bzero(dst, atoi(argv[2]))\n");
		bzero(dst, atoi(argv[2]));
		int	i = 0;
		printf(" dst = ");
		while (i < len)
		{
			printf("%c", dst[i]);
			i++;
		}
		printf("\n");

		printf("\n argv[1] = %s\n", argv[1]);
		printf(" ft_bzero(argv[1], atoi(argv[2]))\n");
		ft_bzero(argv[1], atoi(argv[2]));
		printf(" argv[1] = ");
		i = 0;
		while (i < len)
		{
			printf("%c", argv[1][i]);
			i++;
		}
		printf("\n\n");
	}
	return(0);
}
