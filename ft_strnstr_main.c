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
		printf(" --- ./a.out \"apple*pine*banana\" \"pine\" \"20\"     ---\n\n");

		char	*haystack = "test\0apple";
		// char	*haystack;
		char	*needle = "";
		// char	*needle;
		size_t	len = 20;

		// needle = NULL;
		// haystack = NULL;

		printf("\n strnstr(haystack, needle, len) = %p\n", strnstr(haystack, needle, len));
		printf(" strnstr(haystack, needle, len) = %s\n", strnstr(haystack, needle,len));
		printf(" ft_strnstr(haystack, needle, len) = %p\n", ft_strnstr(haystack, needle,len));
		printf(" ft_strnstr(haystack, needle, len) = %s\n\n", ft_strnstr(haystack, needle,len));
	}
	else
	{
		printf("\n haystack = %s\n", argv[1]);
		printf(" needle = %s\n", argv[2]);
		printf(" len = %d\n", atoi(argv[3]));
		printf("\n strnstr(haystack, needle, len) = %p\n", strnstr(argv[1], argv[2], atoi(argv[3])));
		printf(" strnstr(haystack, needle, len) = %s\n", strnstr(argv[1], argv[2],atoi(argv[3])));
		printf(" ft_strnstr(haystack, needle, len) = %p\n", ft_strnstr(argv[1], argv[2],atoi(argv[3])));
		printf(" ft_strnstr(haystack, needle, len) = %s\n\n", ft_strnstr(argv[1], argv[2],atoi(argv[3])));
	}
	return(0);
}
