/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navera-m <navera-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:42:04 by navera-m          #+#    #+#             */
/*   Updated: 2024/09/30 15:42:54 by navera-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t;
	int		len;

	t = (char *)s;
	len = ft_strlen(t);
	t = t + len;
	while (len >= 0)
	{
		if (*t == c)
			return (t);
		t--;
		len--;
	}
	if (*t == '\0')
		return (t);
	return (t);
}

int	main(void)
{
	const char	s1[] = "ALA";
	char	ch = 'A';
	char	*result;

	result = ft_strrchr(s1, ch);
	printf("Ultima aparacion de %c en %s esta en posicion esta en posicion %ld\n", ch, result, result - s1);
	return (0);
}