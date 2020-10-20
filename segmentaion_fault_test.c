/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segmentaion_fault_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoyama <saoyama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 12:00:38 by saoyama           #+#    #+#             */
/*   Updated: 2020/10/20 12:21:47 by saoyama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	*s1 = "";
	char	*s2;

	s2 = NULL;

	if (!*s1)
	{
		printf("\n !*s1 is false.\n");
		printf(" s1[0] = %d\n", s1[0]);
	}
	if (!s2)
		printf("\n !s2 is false.\n");
	if (!*s2)
		printf("\n !*s2 is false.\n");
}
