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
		printf(" --- ./a.out \"apple\" \"apple\" \"10\"     ---\n\n");
	}
	else
	{
		printf("\n s1 = %s\n", argv[1]);
		printf(" s2 = %s\n", argv[2]);
		printf(" n = %d\n", atoi(argv[3]));
		printf("\n strnstr(s1, s2, n) = %d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
		printf(" ft_strnstr(s1, s2, n) = %d\n\n", ft_strncmp(argv[1], argv[2],atoi(argv[3])));
	}
	return(0);
}
