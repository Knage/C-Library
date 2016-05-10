/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 11:22:04 by knage             #+#    #+#             */
/*   Updated: 2016/05/10 12:14:13 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *str1, const void *str2, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);
#endif
