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
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{

	if (argc < 2)
	{
		printf("\n --- input number like this ---\n");
		printf(" --- ./a.out \"0\"       ---\n\n");
		printf(" --- 0: dst = NULL, src = normal ---\n");
		printf(" --- 1: dst = normal, src = NULL ---\n");
		printf(" --- 2: dst = NULL, src = NULL ---\n\n");
	}
	else
	{
		int 	flag = atoi(argv[1]);
		char	*p = "test";
		if (flag == 0)
		{
			printf(" memcpy(NULL, p, 5)\n");
			memcpy(NULL, p, 5);
		}
		else if (flag == 1)
		{
			printf(" memcpy(p, NULL, 5)\n");
			memcpy(p, NULL, 5);
		}
		else if (flag == 2)
		{
			printf(" memcpy(NULL, NULL, 5)\n");
			memcpy(NULL, NULL, 5);
		}
	}

	return(0);
}
