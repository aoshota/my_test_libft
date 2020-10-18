/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 20:23:26 by saoyama           #+#    #+#             */
/*   Updated: 2020/10/18 20:26:00 by saoyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	t_list	*p;
	t_list	lst;
	t_list	first;
	t_list	second;
	t_list	third;
	t_list	*last;

	char	*c1 = "head";
	char	*c2 = "one";
	char	*c3 = "two";
	char	*c4 = "three";

	p = &lst;

	lst.content = c1;
	lst.next = NULL;

	first.content = c2;
	first.next = NULL;

	second.content = c3;
	second.next = NULL;
	
	third.content = c4;
	third.next = NULL;

	ft_lstadd_front(&p, &first);
	ft_lstadd_front(&p, &second);
	ft_lstadd_front(&p, &third);

	last = ft_lstlast(p);

	printf("\n last->content %s\n", last->content);
	printf(" last->next %p\n\n", last->next);
}
