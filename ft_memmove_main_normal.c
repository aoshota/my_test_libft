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

	if (argc < 4)
	{
		printf("\n --- input like this ---\n");
		printf(" --- ./a.out \"*****\" \"hello\" \"3\"      ---\n\n");
	}
	else
	{
		char	*dst;
		char	*src;

		dst = strdup(argv[1]);
		src = strdup(argv[2]);

		printf("\n dst = %s\n", dst);
		printf(" src = %s\n", src);
		printf(" ft_memmove(dst, src, atoi(argv[3]))\n");
		memmove(dst, src, atoi(argv[3]));
		printf(" dst = %s\n", dst);
		printf(" src = %s\n\n", src);

		printf("\n argv[1] = %s\n", argv[1]);
		printf(" argv[2] = %s\n", argv[2]);
		printf(" ft_memmove(argv[1], argv[2], atoi(argv[3]))\n");
		ft_memmove(argv[1], argv[2], atoi(argv[3]));
		printf(" argv[1] = %s\n", argv[1]);
		printf(" argv[2] = %s\n\n", argv[2]);
	}

	return(0);
}
