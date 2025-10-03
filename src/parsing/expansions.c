/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expansions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:28:49 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 20:55:51 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : expansions.c
 * Description vulgarisée : Remplace les $VAR par leur valeur réelle, 
 * et gère les guillemets pour protéger du split, comme traduire des variables dans une phrase.
 * 
 * Description technique : Après parsing, expand $VAR, $? (exit status), 
 * dans les tokens/args (sauf dans ' '). Remove quotes. Gère ~ pour home.
 * 
 * Fonctions potentielles :
 *   - expand_vars() : Remplace $KEY par env value.
 *   - remove_quotes() : Strip ' et " des tokens.
 * 
 * Interactions : Appel par parser.c, utilise env_utils.c pour get env values.
 */