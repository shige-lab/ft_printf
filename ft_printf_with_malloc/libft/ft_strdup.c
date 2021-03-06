/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshigena <tshigena@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:40:47 by tshigena          #+#    #+#             */
/*   Updated: 2021/10/27 16:40:48 by tshigena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*cpy;
	size_t	str_size;

	str_size = ft_strlen(src) + 1;
	cpy = (char *)malloc(str_size * sizeof(char));
	if (cpy)
		ft_memcpy(cpy, src, str_size);
	return (cpy);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char a[30] = {"saa"};
// 	char *b = ft_strdup(a);
// 	printf("%s\n",a);
// 	printf("%s\n",b);
// 	char *c = ft_strdup(NULL);
// 	printf("%s\n",c);
// 	char *d = strdup(NULL);
// 	printf("%s\n",d);
// 	return 0;
// }
