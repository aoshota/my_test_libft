/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:35:37 by saoyama           #+#    #+#             */
/*   Updated: 2020/10/14 19:35:37 by saoyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("\n --- input number like this ---\n");
		printf(" --- ./a.out \"number\"       ---\n\n");
	}
	else
	{
		printf("\n isascii(%s) = %d\n", argv[1], isascii(argv[1][0]));
		printf(" ft_isascii(%s) = %d\n\n", argv[1], ft_isascii(argv[1][0]));
	}
	return (0);
}
