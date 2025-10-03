/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:53:34 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 14:42:42 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Rôle principal : Implémente le builtin echo (avec -n option).
// Affiche args, gère newline.

//Fonctions attendues : int builtin_echo(char **args);

//Conseils : Check si args[1] == "-n", puis print le reste avec space separators.

#include "builtins.h"