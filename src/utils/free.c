/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:59:05 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 21:03:18 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : free.c
 * Description vulgarisée : Nettoie la mémoire allouée
 * 
 * Description technique : Fonctions pour free structs (t_token, t_cmd, env list), arrays, etc. 
 * Appelées à chaque loop ou exit.
 * 
 * Fonctions potentielles :
 *   - free_cmd() : Free une t_cmd et ses childs.
 *   - free_tokens() : Free liste tokens.
 *   - free_all() : Global free.
 * 
 * Interactions : Appel par main.c, exit_prog.c, parser.c après usage.
 */