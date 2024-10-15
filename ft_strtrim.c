/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navera-m <navera-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:14:44 by navera-m          #+#    #+#             */
/*   Updated: 2024/10/15 13:24:46 by navera-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	size_t	n;
	char	*sp;

	n = ft_strlen(s1);
	sp = malloc(n * sizeof(char) + 1);
	if (!sp)
		return (NULL);
	i = 0;
	while (set == s1[i] && s1[i] != '\0')
		sp[i] = s1[i];
		i++;
	j = 0;
	while (n > j)
		sp[j] = s1[j];
		j--;
	return (sp);
}

int main(void)
{
	char	s1[]= "jiji librejij";
	char	set[]= "ji";
	char	*k;
	
	k = ft_strtrim(s1, &set);
	printf("%s\n", k);
	return (0);
}