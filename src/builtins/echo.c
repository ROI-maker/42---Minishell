/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:53:34 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 20:48:24 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : echo.c (echo with option -n)
 *
 * Description vulgarisée : Affiche du texte à l'écran. 
 * Gère l'option -n pour ne pas ajouter de saut de ligne à la fin.
 * 
 * Description technique : Parcourt les arguments, les print avec write ou printf, 
 * skip le saut de ligne si -n est présent. Pas d'expansion ici (gérée ailleurs).
 * 
 * Fonctions potentielles :
 *   - builtin_echo() : Check -n, puis write les args séparés par espaces.
 * 
 * Interactions : Utilise errors.c si mauvais args, 
 * potentiellement utils.c pour string handling.
 */