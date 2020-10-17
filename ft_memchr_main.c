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
		printf(" --- ./a.out \"abcdefg\" \"d\" \"5\"      ---\n\n");
	}
	else
	{
		char	*p;
		char	*myp;

		printf("\n s = %s\n", argv[1]);
		printf(" c = %c\n", argv[2][0]);
		printf(" n = %d\n\n", atoi(argv[3]));

		printf(" p = memchr(argv[1], argv[2][0], atoi(argv[3]))\n");
		printf(" myp = ft_memchr(argv[1], argv[2][0], atoi(argv[3]))\n");
		p = memchr(argv[1], argv[2][0], atoi(argv[3]));
		myp = ft_memchr(argv[1], argv[2][0], atoi(argv[3]));
		printf("\n p = %p\n", p);
		printf(" myp = %p\n\n", myp);
	}
	return(0);
}
