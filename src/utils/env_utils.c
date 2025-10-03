/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:58:26 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 14:41:32 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Rôle principal : Utils pour manipuler env (get/set var, convert to char**).

//Fonctions attendues : char *get_env_value(t_env *env, char *key);
// void set_env_var(t_env **env, char *key, char *value);
//  char **env_to_array(t_env *env); 

//Conseils : Pour execve et expansions. Free array après usage.

#include "utils.h"