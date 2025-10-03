/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirections.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:50:18 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 14:41:44 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Rôle principal : Setup les redirections pour une cmd (< > >> <<).
// Ouvre files, dup2 fds, gère heredoc (read jusqu'au délimiteur sans history).

//Fonctions attendues : int setup_redirs(t_redirect *redirs); 
// char *handle_heredoc(char *delimiter);

//Conseils : Utilise open/fcntl pour modes (O_RDONLY, O_WRONLY etc.)
// Restore fds après exec si besoin.

#include "pipes.h"