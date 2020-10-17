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
		printf(" --- ./a.out \"hello world!\" \"3\" \"5\"      ---\n\n");
	}
	else
	{
		char	*p;

		printf("\n s = %s\n", argv[1]);
		printf(" start = %d\n", atoi(argv[2]));
		printf(" len = %d\n", atoi(argv[3]));

		printf("\n p = ft_substr(argv[1], atoi(argv[2]), atoi(argv[3]))\n");
		p = ft_substr(argv[1], atoi(argv[2]), atoi(argv[3]));
		printf(" p = %s\n\n", p);
	}
	return(0);
}
