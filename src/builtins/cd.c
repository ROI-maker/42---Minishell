/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:54:10 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 15:39:44 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Rôle principal : Implémente cd (path relatif/absolu, ~).
// Change dir avec chdir, update PWD/OLDPWD dans env.

//Fonctions attendues : int builtin_cd(char **args, t_env *env);

//Conseils : Gère no arg (HOME), trop d'args (error). Perte si dir inexistant.

#include "builtins.h"
