/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 12:23:18 by knage             #+#    #+#             */
/*   Updated: 2016/05/09 15:11:22 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	register const unsigned char	*p1;
	register const unsigned char	*p2;
	int								sub;

	if (n)
	{
		p1 = str1;
		p2 = str2;
		sub = n;
		while (--sub != -1)
		{
			if (*p1++ != *p2++)
				return (*--p1 - *--p2);
		}
	}
	return (0);
}
