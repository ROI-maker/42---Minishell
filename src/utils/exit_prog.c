/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_prog.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:00:00 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 14:41:25 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Rôle principal : Gère la sortie globale du shell (free tout, exit avec status).

//Fonctions attendues : void shell_exit(int status, t_minishell *data);

//Conseils : Appelé par builtin_exit ou ctrl-D. Inclut clear_history et free_all.

#include "utils.h"