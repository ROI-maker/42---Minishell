/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expansions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:49:59 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 14:41:52 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Rôle principal : Gère l'expansion de variables ($VAR, $?) dans les tokens/cmds.
// Recherche dans env, remplace strings.

//Fonctions attendues : char *expand_vars(char *str, t_env *env, int last_exit);
// char *get_var_value(t_env *env, char *key);

//Conseils : N'expanse pas dans quotes simples. Gère $$ comme $.
// Appelé après parsing basique.

#include "pipes.h"