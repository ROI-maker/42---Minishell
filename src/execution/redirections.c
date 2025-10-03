/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirections.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:50:18 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 20:58:37 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : redirections.c
 * Description vulgarisée : Gère les < > << >> pour rediriger les entrées/sorties,
 * 
 * Description technique : Pour chaque redir in cmd struct, 
 * open file (O_RDONLY, O_WRONLY|O_CREAT, etc.), dup2 vers stdin/stdout. 
 * Gère heredoc (<<) avec readline loop.
 * 
 * Fonctions potentielles :
 *   - handle_redirs() : Pour une cmd, applique tous les redirs.
 *   - heredoc() : Read until delimiter, write to tmp fd.
 * 
 * Interactions : Appel par exec.c ou pipes.c avant execve, 
 * utilise errors.c pour file not found.
 */