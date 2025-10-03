/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:21:19 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 16:39:46 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>      /* Pour printf, perror */
# include <stdlib.h>     /* Pour malloc, free, exit */
# include <unistd.h>     /* access, open, read, close, fork, execve, dup, dup2, pipe, getcwd, chdir, unlink, isatty, ttyname, ttyslot */
# include <sys/wait.h>   /* Pour wait, waitpid, wait3, wait4 */
# include <signal.h>     /* Pour signal, sigaction, sigemptyset, sigaddset, kill */
# include <sys/stat.h>   /* Pour stat, lstat, fstat */
# include <dirent.h>     /* Pour opendir, readdir, closedir */
# include <string.h>     /* Pour strerror (bien que perror l'utilise indirectement) */
# include <termios.h>    /* Pour tcsetattr, tcgetattr */
# include <sys/ioctl.h>  /* Pour ioctl */
# include <term.h>       /* Pour tgetent, tgetflag, tgetnum, tgetstr, tgoto, tputs (terminfo) */
# include <readline/readline.h>  /* Pour readline, rl_clear_history, rl_on_new_line, rl_replace_line, rl_redisplay */
# include <readline/history.h>   /* Pour add_history */
# include <fcntl.h>      /* Pour O_RDONLY, O_WRONLY, etc., utilisé avec open */
# include <stdbool.h>
# include <limits.h>
# include <errno.h>

/* Les libs .h */
# include "includes/minilib/ft_printf/ft_printf.h"
# include "includes/minilib/libft.h"

/* Les autres .h */
# include "src/builtins/builtins.h"
# include "src/init_prog/init_prog.h"
# include "src/pipes/pipes.h"
# include "src/utils/utils.h"

/* structs, prototypes, defines et extern g_signal ici... */

#endif