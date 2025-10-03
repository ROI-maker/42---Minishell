/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:28:30 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 20:55:12 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fichier : parser.c
 * Description vulgarisée : Prend les morceaux du lexer et 
 * construit un plan d'exécution.
 * 
 * Description technique : Parse la liste de tokens en structures (t_cmd) : 
 * commandes avec args, redirs, pipes. Vérifie syntaxe (pas de || consecutifs, etc.).
 * 
 * Fonctions potentielles :
 *   - parser() : Boucle sur tokens, build linked list de t_cmd (cmd, args, redirs).
 *   - syntax_check() : Vérifie erreurs comme "unexpected token".
 * 
 * Interactions : Prend input de lexer.c, appelle expansions.c après, output vers execution/.
 */