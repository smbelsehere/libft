/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navera-m <navera-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:49:34 by navera-m          #+#    #+#             */
/*   Updated: 2024/10/09 14:44:35 by navera-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *st1;
	unsigned char *st2;
	int	i;
	
	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (st1[i] != '\0' && st2[i] != '\0' && st1[i] == st2[i] && i < n)
		i++;
	return (st1[i] - st2[i]);
}

int main(void)
{
	char	s2[] = "cas";
	char	s1[] = "cal";

	printf("%d\n",ft_memcmp(s2, s1, 6));
	return (0);
}