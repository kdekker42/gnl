/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_next_line.h                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/27 19:42:28 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/27 19:50:51 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 64
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "./libft/libft.h"

typedef struct	s_i
{
	char		*line;
	int			i;
}				t_line;

int				get_next_line(const int fd, char **line);

#endif
