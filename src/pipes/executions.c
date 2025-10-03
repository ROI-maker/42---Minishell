/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:48:55 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 14:41:55 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Rôle principal : Exécute les commandes (externes ou builtins).
// Cherche path, fork/execve pour externes, appelle builtins directement si pas pipe.

//Fonctions attendues : void execute_cmd(t_cmd *cmd, t_env *env, int *last_exit);
// char *find_path(char *cmd, t_env *env);

//Conseils : Utilise access pour tester paths. Exit 127 si not found.
// Convert env en char ** pour execve.

#include "pipes.h"