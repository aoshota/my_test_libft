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
		printf(" --- ./a.out \"--++--string--+--\" \"-+\" ---\n\n");
	}
	else
	{
		printf("\n s1 = %s\n", argv[1]);
		printf(" set = %s\n", argv[2]);
		printf(" p = ft_strtrim(s1, set)\n");
		char	*p;
		p = ft_strtrim(argv[1], argv[2]);
		printf(" p = %s\n\n", p);
	}
	return(0);
}
