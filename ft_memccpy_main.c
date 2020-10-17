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

	if (argc < 5)
	{
		printf("\n --- input like this ---\n");
		printf(" --- ./a.out \"*******\" \"abcdefg\" \"d\" \"3\"      ---\n\n");
	}
	else
	{
		char	*dst;
		char	*src;
		char	*ans;
		char	*myans;

		dst = strdup(argv[1]);
		src = strdup(argv[2]);

		printf("\n dst = %s\n", dst);
		printf(" src = %s\n", src);
		printf(" ans = memccpy(dst, src, argv[3][0], atoi(argv[4]))\n");
		ans = memccpy(dst, src, argv[3][0], atoi(argv[4]));
		printf(" dst = %s\n", dst);
		printf(" src = %s\n", src);
		printf(" ans = %p\n\n", ans);

		printf(" argv[1] = %s\n", argv[1]);
		printf(" argv[2] = %s\n", argv[2]);
		printf(" myans = ft_memccpy(argv[1], argv[2], argv[3][0], atoi(argv[4]))\n");
		myans = ft_memccpy(argv[1], argv[2], argv[3][0], atoi(argv[4]));
		printf(" argv[1] = %s\n", argv[1]);
		printf(" argv[2] = %s\n", argv[2]);
		printf(" myans = %p\n\n", myans);
	}

	return(0);
}
