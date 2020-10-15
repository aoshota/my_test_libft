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

#include <stdint.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char *p;

	if (argc < 4)
	{
		printf("\n --- input like this ---\n");
		printf(" --- ./a.out \"Hello world!\" \"7\" \"5\" ---\n\n");
	}
	else
	{
		printf(" \ns = %s", argv[1]);
		printf(" p = ft_substr(%s, %s, %s)\n", argv[1], argv[2], argv[3]);
		p = ft_substr(argv[1], atoi(argv[2]), atoi(argv[3]));
		printf(" p = %s\n", p);
	}
	return(0);
}
