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

char	my_topper(unsigned int index, char c)
{
	(void)index;

	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("\n --- input like this ---\n");
		printf(" --- ./a.out \"word\"       ---\n\n");
	}
	else
	{
		char	(*p)(unsigned int, char) = my_topper;
		char	*ans;

		printf("\n argv[1] = %s\n", argv[1]);
		ans = ft_strmapi(argv[1], p);
		printf(" p = %s\n\n", ans);
	}
	return(0);
}
