/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:27:53 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 20:54:25 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : lexer.c
 * Description vulgarisée : Découpe la commande tapée en petits morceaux (tokens), 
 * comme couper une phrase en mots et signes de ponctuation, en gérant les guillemets.
 * 
 * Description technique : Scanner l'input string, identifie tokens : 
 * mots, operators (| < > << >>), quotes ' " (sans split dedans). Crée une liste de tokens.
 * 
 * Fonctions potentielles :
 *   - lexer() : Main func, boucle sur input, handle quotes et metas.
 *   - add_token() : Ajoute un token à la liste (type: WORD, PIPE, REDIR_IN, etc.).
 * 
 * Interactions : Appel par parser.c, utilise parsing_utils.c pour helpers, output vers parser.c.
 */

