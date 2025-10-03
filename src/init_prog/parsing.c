/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:45:54 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 14:42:18 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//srcs/parsing.c
//Rôle principal : Parse la ligne d'entrée de readline en tokens et commandes. 
// Gère les quotes (' et "), split sur espaces/pipes/redirs, 
//   vérifie syntaxe (quotes fermées, no \ ou ;).

//Fonctions attendues : t_token *tokenize(char *line); 
// t_cmd *build_cmds(t_token *tokens); bool check_syntax(char *line);

//Conseils : Utilise libft pour split/join. 
// Libère tokens après build cmds. Intègre expansions après parsing basique.

#include "init_prog.h"