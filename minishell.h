/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:21:19 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 22:13:05 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>      /* perror */
# include <stdlib.h>     /* malloc, free, exit */
# include <unistd.h>     /* access, open, read, close, fork, execve, dup, dup2, pipe, getcwd, chdir, unlink, isatty, ttyname, ttyslot */
# include <sys/wait.h>   /* wait, waitpid, wait3, wait4 */
# include <signal.h>     /* signal, sigaction, sigemptyset, sigaddset, kill */
# include <sys/stat.h>  /* stat, lstat, fstat */
# include <sys/ioctl.h>  /* ioctl */
# include <dirent.h>     /* opendir, readdir, closedir */
# include <string.h>     /* strerror (bien que perror l'utilise indirectement) */
# include <termios.h>    /* tcsetattr, tcgetattr */
# include <term.h>       /* tgetent, tgetflag, tgetnum, tgetstr, tgoto, tputs (terminfo) */
# include <readline/readline.h>  /* readline, rl_clear_history, rl_on_new_line, rl_replace_line, rl_redisplay */
# include <readline/history.h>   /* add_history */
# include <fcntl.h>      /* O_RDONLY, O_WRONLY, etc., */
# include <sys/types.h>
# include <sys/wait.h>
# include <stdbool.h>
# include <limits.h>
# include <errno.h>

/* Les libs .h */
# include "includes/minilib/ft_printf/ft_printf.h"
# include "includes/minilib/libft.h"

/******************************************************************************
*								MACROS										  *
******************************************************************************/


/******************************************************************************
*							GLOBAL VARIABLE									  *
******************************************************************************/

/******************************************************************************
*								STRUCTS									      *
******************************************************************************/


/******************************************************************************
*								ENUMS									      *
******************************************************************************/


/******************************************************************************
*								PROTOTYPES									  *
******************************************************************************/

/* ------------------------ BUILTINS ----------------------------------*/
//cd.c
void	exemple(void);

//echo.c
//............

/* ------------------------ EXECUTION ----------------------------------*/

/* ------------------------ INIT ----------------------------------*/

/* ------------------------ PARSING ----------------------------------*/

/* ------------------------ UTILS ----------------------------------*/




#endif