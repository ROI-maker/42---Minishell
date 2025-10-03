/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:57:20 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 21:04:27 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : signals.c
 * Description vulgarisée : Gère les interruptions comme Ctrl+C (annule), 
 * Ctrl+D (quit), Ctrl+\ (rien), pour que le shell réagisse bien.
 * 
 * Description technique : Utilise signal() ou sigaction pour handlers : 
 * SIGINT redisplay prompt, SIGQUIT ignore, EOF handle.
 * 
 * Fonctions potentielles :
 *   - signal_handler() : Pour SIGINT, rl_replace_line("", 0); rl_redisplay();
 *   - init_signals() : Set handlers.
 * 
 * Interactions : Appel par init_shell.c, impacte main.c loop.
 */