/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   history.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:57:44 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 21:03:51 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : history.c
 * Description vulgarisée : Gère l'historique des commandes, 
 * comme se souvenir de ce que tu as tapé avant pour le rappeler avec flèches haut/bas.
 * 
 * Description technique : Utilise add_history() de readline, 
 * potentiellement load/save from file.
 * 
 * Fonctions potentielles :
 *   - add_to_history() : Si ligne non vide, add_history.
 *   - init_history() : Load from ~/.minishell_history si bonus.
 * 
 * Interactions : Appel par main.c après readline, utilise free.c pour cleanup.
 */