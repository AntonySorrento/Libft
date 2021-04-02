/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 11:28:07 by asorrent          #+#    #+#             */
/*   Updated: 2021/04/02 07:55:52 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	abs_val(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static int	count_c(int n)
{
	int		nb_c;

	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
		nb_c = 1;
	else
		nb_c = 0;
	n = abs_val(n);
	while (n > 0)
	{
		n = n / 10;
		nb_c++;
	}
	return (nb_c);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * count_c(n) + 1);
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n == 0)
		return (ft_strcpy(str, "0"));
	i = count_c(n);
	n = abs_val(n);
	str[0] = '-';
	str[i] = 0;
	while (n > 0)
	{
		str[i - 1] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (str);
}
