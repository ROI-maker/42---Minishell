/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:48:55 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 20:57:04 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : exec.c
 * Description vulgarisée : Lance les commandes externes (pas builtins), 
 * comme demander à l'ordi d'exécuter un programme comme "ls" ou "/bin/cat".
 * 
 * Description technique : Pour une commande, check si builtin (sinon route), 
 * sinon fork(), execve() avec PATH resolution, waitpid pour status.
 * 
 * Fonctions potentielles :
 *   - exec_cmd() : Fork, child: execve, parent: wait.
 *   - find_path() : Résout cmd via PATH env.
 * 
 * Interactions : Appel par pipes.c (pour multi-cmd), 
 * utilise builtins/ pour check, env_utils.c pour PATH.
 */