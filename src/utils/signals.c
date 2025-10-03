/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:57:20 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 14:41:15 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Rôle principal : Gère les signaux (ctrl-C, ctrl-, ctrl-D).
//Set handlers, utilise g_signal seulement pour numéro.

//Fonctions attendues : void setup_signals(void); void sig_handler(int sig);

//Conseils : Signal(SIGINT, handler) pour new prompt. Ignore SIGQUIT. Appelé dans main.

#include "utils.h"