/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:55:03 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 14:42:59 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Rôle principal : Implémente pwd. Affiche chemin actuel avec getcwd.

//Fonctions attendues : int builtin_pwd(void);

//Conseils : Simple write(STDOUT_FILENO, cwd, strlen(cwd)); free cwd.

#include "builtins.h"