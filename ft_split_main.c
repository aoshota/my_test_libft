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
		printf(" --- ./a.out \"++hello+world+++from+42++tokyo\" \"+\"      ---\n\n");
	}
	else
	{
		char	**p;

		printf("\n s = %s\n", argv[1]);
		printf(" c = %c\n", argv[2][0]);

		p = ft_split(argv[1], argv[2][0]);
		int	i = 0;
		while (p[i])
		{
			printf("\n p = %s\n\n", p[i]);
			i++;
		}
	}
	return(0);
}
