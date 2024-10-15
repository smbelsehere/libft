/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navera-m <navera-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:31:17 by navera-m          #+#    #+#             */
/*   Updated: 2024/10/10 13:29:49 by navera-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*o;
	char		*d;
	int			i;

	o = (const void *)src;
	d = (void *)dest;
	i = 0;
	if (!n || d == o)
		return (d);
	if (d < o)
		return (ft_memcpy(d, o, n));
	while (n--)
	{
		d[i] = o[i];
		i++;
	}
	return (d);
}

/*int main(void)
{
	char	d[] = " ";
	char	o[] = "oak";
	
	printf("%p\n",ft_memmove(d, o, 10));
	printf("%s\n",d);
	return (0);
}*/