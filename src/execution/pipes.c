/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:52:00 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 20:57:53 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : pipes.c
 * Description vulgarisée : Gère les chaînes de commandes avec |
 * 
 * Description technique : Pour une liste de cmds, crée pipes (pipe()), 
 * fork pour chaque cmd, dup2 pour redir stdin/stdout vers pipes.
 * 
 * Fonctions potentielles :
 *   - exec_pipes() : Boucle sur cmds, create pipe, fork, dup2, exec_cmd.
 *   - close_pipes() : Ferme les fds inutiles.
 * 
 * Interactions : Utilise exec.c pour single cmd, 
 * redirections.c pour redirs dans pipes, wait dans main.
 */