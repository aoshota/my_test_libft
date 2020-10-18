/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:10:47 by saoyama           #+#    #+#             */
/*   Updated: 2020/10/18 20:14:54 by saoyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	t_list	*p;
	t_list	lst;
	t_list	new;
	t_list	back;

	char	*c1 = "head";
	char	*c2 = "new";
	char	*c3 = "back";

	p = &lst;

	lst.content = c1;
	lst.next = NULL;
	new.content = c2;
	new.next = NULL;
	back.content = c3;
	back.next = NULL;

	ft_lstadd_front(&p, &new);
	printf("\n new.content = %s\n", new.content);
	printf(" new.next = %p\n", new.next);
	printf(" &new = %p\n\n", &new);
	printf(" lst.content = %s\n", lst.content);
	printf(" lst.next = %p\n", lst.next);
	printf(" &lst = %p\n\n", &lst);

	printf(" back.content = %s\n", back.content);
	printf(" back.next = %p\n", back.next);
	printf(" &back = %p\n\n", &back);

	ft_lstadd_back(&p, &back);

	printf(" ft_lstadd_back(&p, &back)\n\n");
	printf(" new.content = %s\n", new.content);
	printf(" new.next = %p\n", new.next);
	printf(" &new = %p\n\n", &new);
	printf(" lst.content = %s\n", lst.content);
	printf(" lst.next = %p\n", lst.next);
	printf(" &lst = %p\n\n", &lst);

	printf(" back.content = %s\n", back.content);
	printf(" back.next = %p\n", back.next);
	printf(" &back = %p\n\n", &back);

	int	size;

	size = ft_lstsize(&new);
	printf("\n ==== list size ==== \n");
	printf(" ===     %d     === \n\n", size);
}
