/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:55:27 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 14:42:56 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Rôle principal : Implémente export (ajoute/modifie var dans env).
// Gère format VAR=value, tri alphabétique pour display.

//Fonctions attendues : int builtin_export(char **args, t_env **env);
// t_env *sort_env(t_env *env);

//Conseils : Si no arg, print sorted env comme declare -x. Vérifie valid key.

#include "builtins.h"