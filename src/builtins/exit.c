/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:56:52 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 20:49:39 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : exit.c (exit with no options)
 *
 * Description vulgarisée : Quitte le shell proprement. 
 * Peut prendre un numéro pour le code de sortie.
 * 
 * Description technique : Parse l'arg en int (si présent), appelle exit_prog pour free tout, 
 * puis exit() avec le code (défaut 0). Gère les erreurs si arg non-numérique.
 * 
 * Fonctions potentielles :
 *   - builtin_exit() : Check args, atoi, puis appel à exit_prog et exit.
 * 
 * Interactions : Travaille avec exit_prog.c pour la sortie globale, errors.c pour bad args.
 */