/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:56:32 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 20:48:51 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : env.c (env with no options or arguments)
 *
 * Description vulgarisée : Liste toutes les variables d'environnement,
 * comme un inventaire de ce que le shell sait sur ton système (PATH, HOME, etc.).
 *  
 * Description technique : Itère sur la liste env (copiée de envp), 
 * print chaque "KEY=value" suivi d'un \n. Pas d'args supportés.
 * 
 * Fonctions potentielles :
 *   - builtin_env() : Boucle sur env list, write chaque entry.
 * 
 * Interactions : Utilise env_utils.c pour accéder à la liste env.
 */