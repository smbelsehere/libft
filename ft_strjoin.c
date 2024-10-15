/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navera-m <navera-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:36:51 by navera-m          #+#    #+#             */
/*   Updated: 2024/10/15 12:13:44 by navera-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;
	size_t	size;
	int		i;
	int		j;

	size = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	s3 = malloc (sizeof(char) * size);
	if (!s3)
		return (NULL);
	i = 0;
	while (ft_strlen(s1) > i && s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (ft_strlen(s2) > j && s2[j] != '\0')
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = '\0';
	return (s3);
}

/* int main (void)
{
	char	s1[]= "Hola";
	char	s2[] = "Maro";
	char	*k;

	k = ft_strjoin(s1, s2);
	printf("%s\n", k);
	return (0);
} */