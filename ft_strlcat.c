/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:37:19 by asorrent          #+#    #+#             */
/*   Updated: 2021/04/02 14:27:16 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		j;
	int		len;

	len = 0;
	while (src[len])
		len++;
	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	j = 0;
	while (src[j] && (i + j + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	return (i + len);
}
/*
# include <stdio.h>


void test_strlcat()
{
	char dst1[30] = "B";
	char dst2[30] = "B";
	char src[10] = "AAAAAAAAAA";
	size_t dstsize = 3;

	ft_strlcat(dst1, src, dstsize);
	printf("Ma fonction = %s\n", dst1);
	strlcat(dst2, src, dstsize);
	printf("vraie fonction = %s\n", dst2);
}

int main()
{
	test_strlcat();
}*/
