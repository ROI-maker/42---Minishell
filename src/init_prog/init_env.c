/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:47:40 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 14:42:15 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Rôle principal : Initialise la liste d'environnement à partir de envp.
// Crée une copie chaînée (t_env) pour manipuler vars sans modifier l'original.

//Fonctions attendues : t_env *init_env(char **envp); 
// – Boucle sur envp, split key=value, malloc nodes.

//Conseils : Appelé dans main. Utilise ft_strdup pour copier. 
// Free en cas d'erreur malloc.

#include "init_prog.h"