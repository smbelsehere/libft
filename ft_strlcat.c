/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navera-m <navera-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:26:14 by navera-m          #+#    #+#             */
/*   Updated: 2024/10/14 14:10:15 by navera-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		len;
	int		leng;
	int		i;
	
	len = ft_strlen(src);
	leng = ft_strlen(dst);
	i = 0;
	if (leng == size)
		return (leng + len);
	if (size > (leng + len))
	{
		while ((size - 1) > i && src [i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (leng + len);
}

/*  int	main(void)
{
	char	dst[] = "string";
	char	src[] = "append";

	printf("%zu\n",ft_strlcat(dst, src, 20));
	printf("%s\n", dst);
	return (0);
} */