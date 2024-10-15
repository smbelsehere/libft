/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navera-m <navera-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:33:40 by navera-m          #+#    #+#             */
/*   Updated: 2024/09/12 14:55:54 by navera-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c = ft_isalpha(c)) || (c = ft_isdigit(c)))
		return (1);
	return (0);
}

/*int	main(void)
{
	int	c;
	
	c = ft_isalnum(126);
	printf("%d", c);
	return (0);
}*/