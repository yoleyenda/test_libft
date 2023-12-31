/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:58:16 by lluque            #+#    #+#             */
/*   Updated: 2023/09/21 20:50:14 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "../repo_github/libft.h"

void    *ft_print_memory(void *addr, unsigned int size);

void	ft_test_memset(void *original, void *ft, int c, size_t len)
{
	printf("PRUEBA memset con original = '%zu', ft = '%zu', int = '%d', len = '%zu'\n", (unsigned long)original, (unsigned long)ft, c, len);
	printf("\t Antes de modificar:\n");
	printf("\t original:\n");
	ft_print_memory(original, 150);
	printf("\n\t version ft:\n");
	ft_print_memory(ft, 150);
	memset(original, c, len);
	ft_memset(ft, c, len);
	printf("\t original:\n");
	ft_print_memory(original, 150);
	printf("\n\t version ft:\n");
	ft_print_memory(ft, 150);
	printf("\n");
}
/*
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*((unsigned char *)b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
*/
