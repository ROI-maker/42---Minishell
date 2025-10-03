/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:54:10 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 20:48:03 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : cd.c (cd with only a relative or absolute path)
 *
 * Description vulgarisée : Gère la commande "cd" pour changer de dossier. 
 * Supporte les chemins relatifs, absolus, et le tiret "-" pour revenir en arrière.
 * 
 * Description technique : Utilise chdir() pour changer le répertoire courant, 
 * met à jour les variables d'env PWD et OLDPWD. 
 * Gère les erreurs comme "no such file or directory".
 * 
 * Fonctions potentielles :
 *   - builtin_cd() : Prend les args, résout le path, appelle chdir, update env.
 * 
 * Interactions : Travaille avec env_utils.c pour update PWD/OLDPWD, 
 * errors.c pour afficher les erreurs.
 */
