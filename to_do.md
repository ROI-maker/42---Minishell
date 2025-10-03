# Minishell 42 - Checklist & répartition du travail

## 0. Préparation du repo et setup initial

* [ ] Créer repo Git et structure de dossiers (A & B)
* [ ] Créer Makefile minimal compilant tous les fichiers (A)
* [ ] Ajouter libreadline dans Makefile (A)
* [ ] Créer `minishell.h` avec includes et structures de base (B)
* [ ] Tester compilation Makefile vide (A & B)
* [ ] Qui fait A et qui fait B ?

## 1. Main loop

* [ ] Afficher le prompt `$> ` (A)
* [ ] Lire la ligne avec readline (A)
* [ ] Ajouter historique avec `add_history` (B)
* [ ] Ctrl-D pour quitter proprement (A)
* [ ] Ctrl-C gère nouvelle ligne (B)
* [ ] Test minimal shell (A & B)

## 2. Builtins & Utils
### Personne B

* [ ] cd
* [ ] pwd
* [ ] exit
* [ ] echo
* [ ] env
* [ ] export
* [ ] unset
* [ ] env_utils.c (get/set/unset variables d’environnement)
* [ ] free.c, errors.c, exit_prog.c, utils.c
* [ ] Test unitaire pour chaque builtin et utilitaires

## 3. Parsing
### Personne A

* [ ] Tokenisation simple (split par espace) (A)
* [ ] Gestion des quotes simples et doubles (A)
* [ ] Création de structure `t_command` ou équivalent (A)
* [ ] Test parsing avec quelques lignes simples (A & B)

### Personne B
* [ ] Gestion des expansions `$VAR` et `$?` (B)

## 4. Execution / Pipes / Redirections
* [ ] Execution simple avec execve (A)
* [ ] Gestion des chemins (`PATH`) (A)
* [ ] Pipes simples (2 commandes) (A & B)
* [ ] Pipes multiples (A & B)
* [ ] Redirections `<`, `>` et `>>` (A & B)
* [ ] Gestion des erreurs (command not found, fichiers non accessibles) (A & B)
* [ ] Test complet execution / pipes / redirections (A & B)

## 5. Expansions avancées

### Personne A
* [ ] Gestion de `$?` (A)
* [ ] Gestion des quotes imbriquées et edge cases (A)

### Personne B
* [ ] Gestion des variables d’environnement dans les commandes (B)
* [ ] Test complet des expansions (A & B)

## 6. Signals
### Personne B

* [ ] Ctrl-C / SIGINT
* [ ] Ctrl-\ / SIGQUIT
* [ ] Test gestion des signaux (A & B)

## 7. Env / Init
* [ ] init_env.c (A)
* [ ] Test affichage et modification variables d’environnement (A & B)

## 8. Tests finaux et polish
* [ ] Scripts de test builtins (B)
* [ ] Scripts de test pipes / redirections (A & B)
* [ ] Test mémoire avec valgrind (A & B)
* [ ] Derniers ajustements code / Makefile (A & B)
