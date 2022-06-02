/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:56:30 by tphophan          #+#    #+#             */
/*   Updated: 2022/06/02 15:54:01 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*a;

	a = (char *) b;
	while (len > 0)
	{
		*a++ = (char)c;
		len--;
	}
	return (b);
}

/*int	main(void)
{
	char	str[50] = "Test memset is for programming.";

	printf("\nBefore memset(): %s\n", str);
	memset(str + 11, '.', 8 * sizeof(char));
	printf("len = %lu\n", 8 * sizeof(char));
	printf("After memset(): %s\n", str);
	ft_memset(str + 11, '.', 8 * sizeof(char));
	printf("len = %lu\n", 8 * sizeof(char));
	printf("After ft_memset(): %s\n", str);
	return (0);
}*/
