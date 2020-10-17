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
		printf(" --- ./a.out \"apple\" \"l\"      ---\n\n");
	}
	else
	{
		printf("\n s = %s\n", argv[1]);
		printf(" c = %c\n", argv[2][0]);
		printf("\n strrchr(s, c) = %p\n", strrchr(argv[1], argv[2][0]));
		printf(" strrchr(s, c) = %s\n", strrchr(argv[1], argv[2][0]));
		printf(" ft_strrchr(s, c) = %p\n", ft_strrchr(argv[1], argv[2][0]));
		printf(" ft_strrchr(s, c) = %s\n\n", ft_strrchr(argv[1], argv[2][0]));
	}
	return(0);
}
