/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:56:06 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 20:53:02 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : unset.c (unset with no options)
 * Description vulgarisée : Supprime des variables d'environnement.
 * 
 * Description technique : Pour chaque arg (KEY), cherche et remove de la liste env. 
 * Pas d'output.
 * 
 * Fonctions potentielles :
 *   - builtin_unset() : Pour chaque arg, find and delete from env list.
 * 
 * Interactions : Utilise env_utils.c pour search/remove dans env.
 */