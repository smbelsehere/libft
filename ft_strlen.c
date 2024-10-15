/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navera-m <navera-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:26:59 by navera-m          #+#    #+#             */
/*   Updated: 2024/10/02 16:43:19 by navera-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;
	
	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char *str;
	str = "hola";
	size_t	len;
	
	len = ft_strlen(str);
	printf("%zu", len);
	return(0);
}*/