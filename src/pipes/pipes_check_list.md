## 4. Dossier `pipes/` (`executions.c`, `pipes.c`, `redirections.c`, `pipes.h`, `expansions.c`)

### Checklist générale

* [ ] Execution de commandes simples avec `execve`
* [ ] Gestion des chemins via `$PATH`
* [ ] Gestion des pipes simples et multiples
* [ ] Gestion des redirections `<`, `>`, `>>`
* [ ] Gestion des heredocs si nécessaire (`<<`)
* [ ] Gestion des erreurs de commande ou fichier non accessible
* [ ] Gestion des codes de sortie pour `$?`

### `executions.c`

* [ ] Fonction pour lancer une commande simple
* [ ] Gestion des forks et waitpid
* [ ] Redirection stdin/stdout si nécessaire

### `pipes.c`

* [ ] Création de pipes entre plusieurs commandes
* [ ] Duplication des fd correctement (`dup2`)
* [ ] Fermeture des fd inutiles dans chaque processus

### `redirections.c`

* [ ] Gérer `<`, `>`, `>>` pour chaque commande
* [ ] Vérifier l’ouverture des fichiers et les permissions
* [ ] Remonter les erreurs à l’utilisateur

### `expansions.c`

* [ ] Expansion des variables `$VAR` et `$?`
* [ ] Gestion des quotes simples et doubles

### `pipes.h`

* [ ] Déclaration des fonctions d’exécution, pipes et redirections
