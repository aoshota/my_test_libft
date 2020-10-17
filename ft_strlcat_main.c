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
		printf(" --- ./a.out \"hello\" \"world\" \"10\"      ---\n\n");
	}
	else
	{
		char *dst = strdup(argv[1]);
		char *src = strdup(argv[2]);
		char *mydst = strdup(argv[1]);
		char *mysrc = strdup(argv[2]);
		size_t len;
		size_t mylen;

		printf("\n dst = %s\n", dst);
		printf(" src = %s\n", src);
		printf(" dstsize = %d\n", atoi(argv[3]));
		printf(" len = strlcat(dst, src, atoi(argv[3]))\n");
		len = strlcat(dst, src, atoi(argv[3]));
		printf(" dst = %s\n", dst);
		printf(" src = %s\n", src);
		printf(" len = %ld\n\n", len);

		printf(" mydst = %s\n", mydst);
		printf(" mysrc = %s\n", mysrc);
		printf(" dstsize = %d\n", atoi(argv[3]));
		printf(" mylen = ft_strlcat(mydst, mysrc, atoi(argv[3]))\n");
		mylen = ft_strlcat(mydst, mysrc, atoi(argv[3]));
		printf(" mydst = %s\n", mydst);
		printf(" mysrc = %s\n", mysrc);
		printf(" len = %ld\n\n", mylen);
	}
	return(0);
}
