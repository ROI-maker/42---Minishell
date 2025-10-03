/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:55:27 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 20:50:58 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : export.c (export with no options)
 *
 * Description vulgarisée : Ajoute ou modifie des variables d'environnement, 
 * comme ajouter une note dans ton inventaire pour que d'autres commandes l'utilisent.
 * 
 * Description technique : Parse "KEY=value", ajoute ou update dans la liste env (triée alphabétiquement). 
 * Si sans "=", affiche la liste exportée (comme env mais triée avec declare -x).
 * 
 * Fonctions potentielles :
 *   - builtin_export() : Pour chaque arg, split KEY=value, insert dans env list.
 *   - export_print() : Si no args, print sorted env avec "declare -x ".
 * 
 * Interactions : Utilise env_utils.c pour manipuler la liste env, errors.c pour invalid identifiers.
 */