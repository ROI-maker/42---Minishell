/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupont <jdupont@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:40:50 by jdupont           #+#    #+#             */
/*   Updated: 2025/10/03 16:03:49 by jdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

// Handler pour Ctrl-C
void handle_sigint(int sig)
{
    (void)sig;               // éviter warning unused
    write(1, "\n$> ", 4);    // affiche un nouveau prompt
    rl_on_new_line();         // informe readline d'une nouvelle ligne
    rl_replace_line("", 0);   // efface la ligne en cours
    rl_redisplay();           // rafraîchit l'affichage
}

int main(void)
{
    char *line;

    signal(SIGINT, handle_sigint);

    while (1)
    {
        line = readline("$> ");
        if (!line) // Ctrl-D
            break;
        if (*line)
            add_history(line);
        printf("%s\n", line);
        free(line);
    }

    printf("\nBye !\n");
    return 0;
}
