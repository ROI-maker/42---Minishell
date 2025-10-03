/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_prog.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:00:00 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 21:05:04 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : exit_prog.c
 * Description vulgarisée : Quitte le programme en nettoyant tout.
 * 
 * Description technique : Appelle free_all, save history si besoin, 
 * exit avec status.
 * 
 * Fonctions potentielles :
 *   - exit_prog() : Global cleanup and exit.
 * 
 * Interactions : Appel par builtin_exit.c, main.c sur erreur fatale, 
 * utilise free.c, history.c.
 */