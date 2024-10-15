/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navera-m <navera-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:52:58 by navera-m          #+#    #+#             */
/*   Updated: 2024/10/02 12:45:35 by navera-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	size_t	n;
	
	i = 0;
	n = ft_strlen(little);
	while (n != 0)
	{
		if (big[i] == little[i])
			i++;
			return (little);
	}
	if (little[i] == '\0')
		return (little);
	return (big);
}
