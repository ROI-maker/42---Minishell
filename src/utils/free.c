/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:59:05 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 14:41:22 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Rôle principal : Centralise les fonctions de libération mémoire

//Fonctions attendues : void free_env(t_env *env);
// void free_tokens(t_token *tokens); void free_cmds(t_cmd *cmds);
// void free_all(t_minishell *data);

//Conseils : Appelé partout (e.g., après exec). Boucle sur listes et free.

#include "utils.h"