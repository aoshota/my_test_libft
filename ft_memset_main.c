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
		printf(" --- ./a.out \"hello\" \"*\" \"3\"      ---\n\n");
	}
	else
	{
		char	*dst;
		char	*src;

		dst = strdup(argv[1]);
		src = strdup(argv[2]);
		printf("\n dst = %s\n", dst);
		printf(" dst = %p\n", dst);
		printf(" memset(dst, *src, atoi(argv[3]))\n");
		memset(dst, *src, atoi(argv[3]));
		printf(" dst = %s\n\n", dst);

		printf(" argv[1] = %s\n", argv[1]);
		printf(" argv[1] = %p\n", argv[1]);
		printf(" ft_memset(argv[1], *argv[2], atoi(argv[3]))\n");
		ft_memset(argv[1], *argv[2], atoi(argv[3]));
		printf(" argv[1] = %s\n\n", argv[1]);
	}
	return(0);
}
