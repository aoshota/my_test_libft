/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:10:47 by saoyama           #+#    #+#             */
/*   Updated: 2020/10/18 20:24:15 by saoyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	t_list	*p;
	t_list	lst;
	t_list	new;

	char	*c1 = "head";
	char	*c2 = "new";

	p = &lst;

	lst.content = c1;
	lst.next = NULL;
	new.content = c2;
	new.next = NULL;

	printf("\n lst.content = %s\n", lst.content);
	printf(" lst.next = %p\n", lst.next);
	printf(" &lst = %p\n\n", &lst);
	printf(" new.content = %s\n", new.content);
	printf(" new.next = %p\n", new.next);
	printf(" &new = %p\n\n", &new);

	ft_lstadd_front(&p, &new);
	printf("\n ft_lstadd_front(p, &new)\n");
	printf("\n lst.content = %s\n", lst.content);
	printf(" lst.next = %p\n", lst.next);
	printf(" &lst = %p\n\n", &lst);
	printf(" new.content = %s\n", new.content);
	printf(" new.next = %p\n", new.next);
	printf(" &new = %p\n\n", &new);
}
