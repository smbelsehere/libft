/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navera-m <navera-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:17:11 by navera-m          #+#    #+#             */
/*   Updated: 2024/10/11 12:18:47 by navera-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;

	s1 = malloc(sizeof(char) * len + 1);
	if (!s1)
		return (NULL);
	ft_memmove(s1, &s[start], len);
	if (!s && s == 0)
		return (NULL);
	return (s1);
}

/* int main(void)
{
	char	s[]= "";
	char	*v;

	v = ft_substr(s, 2, 5);
	printf("%s\n",v);
	return (0);
} */