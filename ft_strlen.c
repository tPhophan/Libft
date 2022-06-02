/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphophan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:46:32 by tphophan          #+#    #+#             */
/*   Updated: 2022/06/02 15:54:20 by tphophan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str ++ != 0)
		i++;
	return (i);
}

/*int	main(int ac, char *av[])
{
	(void) ac;
	printf("strlen(av[1]) : %lu\n", strlen(av[1]));
	printf("ft_strlen(av[1]) : %zu\n", ft_strlen(av[1]));
	return (0);
}*/
