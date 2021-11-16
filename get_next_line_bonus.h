/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 20:29:29 by vantonie          #+#    #+#             */
/*   Updated: 2021/10/04 23:41:58 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifndef FD_SIZE
#  define FD_SIZE 256
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

/**
 * @brief Function to get a next file from a fd.
 *
 * @param fd to be search
 * @return the address of the first N.
 */
char	*get_next_line(int fd);

/**
 * @brief Function locates the first N in the STR.
 *
 * @param str to be search
 * @param n to be find
 * @return the address of the first N.
 */
char	*ft_strchr(const char *str, int n);

/**
 * @brief 	Function returns the length of STR.
 *
 * @param str string to be counted.
 * @return length of the STR.
 */
size_t	ft_strlen(const char *str);

/**
 * @brief Copy the STR to a new pointer.
 *
 * @param str the string to be copied.
 * @return a new address with the same string of str.
 */
char	*ft_strdup(const char *str);

/**
 * @brief Copy the from the (S + START) to (LEN).
 *
 * @param s the address of the start of the string
 * @param start start the copy from here.
 * @param len number of the bytes to be copied.
 * @return a new address to with the copy.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Copy the S1 concatenate with S2.
 *
 * @param s1 string to start the new string.
 * @param s2 string to end the new string.
 * @return new address with the s1 + s2.
 */
char	*ft_strjoin(char const *s1, char const *s2);

#endif
