/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:59:50 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 21:00:37 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : init_env.c
 * Description vulgarisée : Copie les variables d'environnement au démarrage, 
 * comme charger l'inventaire initial du shell.
 * 
 * Description technique : Du envp (char **), crée une liste chaînée triée pour env, 
 * handle SHLVL increment.
 * 
 * Fonctions potentielles :
 *   - init_env() : Alloue et fill env list de envp.
 *   - increment_shlvl() : Find SHLVL, atoi +1, update.
 * 
 * Interactions : Appel par init_shell.c, utilisé par env_utils.c 
 * et builtins comme export/unset.
 */