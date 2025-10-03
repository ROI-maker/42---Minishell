/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:52:00 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 14:41:48 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Rôle principal : Gère les pipelines (|).
// Crée pipes, fork pour chaque cmd, connecte fds.

//Fonctions attendues : void execute_pipeline(t_cmd *cmds, t_env *env);
// int create_pipes(int pipe_fds[2]);

//Conseils : Boucle sur cmds, fork, dup2 pipe[0]/pipe[1],
// close inutiles. Attends avec waitpid dans parent.

#include "pipes.h"