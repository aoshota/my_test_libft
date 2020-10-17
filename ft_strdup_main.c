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
		char	*p;
		char	*myp;

		printf("\n s1 = %s\n", argv[1]);
		printf(" s1 = %p\n\n", argv[1]);

		p = strdup(argv[1]);
		printf(" p = strdup(s1)\n");
		printf(" p = %s\n", p);
		printf(" p = %p\n\n", p);


		myp = ft_strdup(argv[1]);
		printf(" myp = ft_strdup(s1)\n");
		printf(" myp = %s\n", myp);
		printf(" myp = %p\n\n", myp);
	}
	return(0);
}
