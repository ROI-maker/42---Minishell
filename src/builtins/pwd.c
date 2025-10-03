/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:55:03 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 20:51:53 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : pwd.c (pwd with no options)
 * Description vulgarisée : Affiche le chemin du dossier actuel.
 * 
 * Description technique : Utilise getcwd() pour récupérer le path courant, 
 * le print avec \n. Pas d'options.
 * 
 * Fonctions potentielles :
 *   - builtin_pwd() : Appel getcwd, write, free buffer.
 * 
 * Interactions : Potentiellement errors.c si échec getcwd.
 */