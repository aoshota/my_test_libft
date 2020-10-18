/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:10:47 by saoyama           #+#    #+#             */
/*   Updated: 2020/10/18 19:49:16 by saoyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("\n --- input like this --- \n");
		printf(" --- ./a.out \"hello\" --- \n\n");

		return (0);
	}
	char	*p = "hello";
	t_list	*lst;

	lst = ft_lstnew(argv[1]);
	printf("\n lst->content = %s\n", lst->content);
	printf(" lst->next = %p\n\n", lst->next);
}
