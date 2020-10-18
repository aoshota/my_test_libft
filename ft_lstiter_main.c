/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 20:32:05 by saoyama           #+#    #+#             */
/*   Updated: 2020/10/18 21:00:10 by saoyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_change_content(void *);

void	ft_print_list(t_list *lst)
{
	while (lst)
	{
		printf(" lst->content = %s\n", lst->content);
		printf(" lst->next = %p\n", lst->next);
		lst = lst->next;
	}
}

int	main(void)
{
	// ======== generate list =============
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
	// ======== generate list =============

	void (*f)(void *);

	printf("\n === brefore === \n\n");
	ft_print_list(p);
	printf("\n");

	f = ft_change_content;
	ft_lstiter(p, f);

	printf("\n === after === \n\n");
	ft_print_list(p);
	printf("\n");
}

void	ft_change_content(void *content)
{
	// char	*p;
	// p = (char *)content;
	// while (*p)
	// {
		printf("hi\n");
	// 	p++;
	// }
}
