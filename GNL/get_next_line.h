/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amargy <amargy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:31:46 by amargy            #+#    #+#             */
/*   Updated: 2019/06/18 16:11:18 by amargy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 2
# include "libft/libft.h"
# include <stddef.h>
# include <stdio.h>
# include <fcntl.h>

int		get_next_line(const int fd, char **line);
#endif
