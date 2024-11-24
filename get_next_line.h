/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajadid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:55:50 by hajadid           #+#    #+#             */
/*   Updated: 2024/11/17 14:55:53 by hajadid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <fcntl.h>
# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

char	*ft_strdup(char *str, int len);
char	*ft_strjoin(char *s1, char *s2);
int		check_line(char	*temp);
char	*print_line(char **temp);
char	*get_next_line(int fd);
size_t	ft_strlen(char *s);

#endif
