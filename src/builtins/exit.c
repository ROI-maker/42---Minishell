/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:56:52 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 14:42:53 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Rôle principal : Implémente exit (quitte avec status optionnel).

//Fonctions attendues : int builtin_exit(char **args, int last_exit);

//Conseils : Atoi args[1] si présent, else 0. Gère non-numérique (error, exit 255).

#include "builtins.h"