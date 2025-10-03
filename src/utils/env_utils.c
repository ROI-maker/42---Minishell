/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:58:26 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 21:02:12 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : env_utils.c
 * Description vulgarisée : Outils pour manipuler les variables d'env, 
 * comme chercher, ajouter, supprimer dans l'inventaire.
 * 
 * Description technique : Fonctions pour liste chaînée env : 
 * add, del, find, get_value, to_array (pour execve).
 * 
 * Fonctions potentielles :
 *   - env_add() : Insert sorted.
 *   - env_del() : Free and remove node.
 *   - env_get() : Return value de KEY.
 *   - env_to_array() : Convert list to char **.
 * 
 * Interactions : Utilisé par builtins/export.c, unset.c, env.c, expansions.c.
 */