/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaustin <afaustin@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:30:58 by afaustin          #+#    #+#             */
/*   Updated: 2021/10/03 21:45:04 by afaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		size;
	char		*substr;

	i = 0;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr || !s)
		return (NULL);
	size = 0;
	while (s[size])
		size++;
	while (start < size && i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!src && !dst)
		return (0);
	i = 0;
	while (n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
		n--;
	}
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		l1;
	int		l2;
	char	*new;

	if (s1 && s2)
	{
		l1 = 0;
		while (s1[l1])
			l1++;
		l2 = 0;
		while (s2[l2])
			l2++;
		new = (char *)malloc((l1 + l2 + 1) * sizeof(char));
		if (!new)
			return (NULL);
		ft_memcpy(new, s1, l1);
		ft_memcpy(&new[l1], s2, l2);
		new[l1 + l2] = '\0';
		return (new);
	}
	return (NULL);
}

char	*ft_strdup(const char *s)
{
	char	*cpy;
	int		size;

	size = 0;
	while (s[size])
		size++;
	cpy = (char *)malloc(((size + 1) * sizeof(char)));
	if (!cpy)
		return (NULL);
	cpy = ft_memcpy(cpy, s, size + 1);
	return (cpy);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *) s);
		s++;
	}
	if (c == '\0')
		return ((char *) s);
	return (NULL);
}
