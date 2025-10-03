/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_shell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:59:53 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 21:01:17 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : init_shell.c
 * Description vulgarisée : Prépare tout au lancement du shell, 
 * comme allumer les lumières et vérifier les outils avant de commencer.
 * 
 * Description technique : Alloue structs globales, 
 * appelle init_env, setup signals, history, etc.
 * 
 * Fonctions potentielles :
 *   - init_shell() : Main init, appelle autres inits.
 * 
 * Interactions : Appel par main.c, utilise init_env.c, signals.c, history.c.
 */