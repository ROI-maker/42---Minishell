/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:56:06 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 14:43:02 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Rôle principal : Implémente unset (supprime var de env).

//Fonctions attendues : int builtin_unset(char **args, t_env **env);

//Conseils : Boucle sur args, trouve et free node dans liste.

#include "builtins.h"