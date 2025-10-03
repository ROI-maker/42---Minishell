## 5. Dossier `utils/` (`env_utils.c`, `errors.c`, `exit_prog.c`, `free.c`, `history.c`, `signals.c`, `utils.c`, `utils.h`)

### Checklist générale

* [ ] Fonctions utilitaires réutilisables dans le shell
* [ ] Gestion mémoire, erreurs, exit global, signaux, historique

### `env_utils.c`

* [ ] Fonctions `get_env`, `set_env`, `unset_env`
* [ ] Vérifier l’existence d’une variable

### `errors.c`

* [ ] Fonctions pour afficher des messages d’erreur uniformes
* [ ] Codes d’erreur standardisés

### `exit_prog.c`

* [ ] Fonction pour quitter le shell proprement
* [ ] Libération mémoire et fermeture des fd

### `free.c`

* [ ] Libération des structures principales (commandes, tokens, environnements)

### `history.c`

* [ ] Ajouter une commande à l’historique
* [ ] Implémenter navigation dans l’historique si nécessaire

### `signals.c`

* [ ] Gestion de SIGINT (`Ctrl-C`) et SIGQUIT (`Ctrl-\`)
* [ ] Gestion des signaux dans le shell et dans les enfants

### `utils.c` et `utils.h`

* [ ] Fonctions diverses : `ft_strcpy`, `ft_strlen`, `ft_split`, etc.
* [ ] Fonctions de parsing d’arguments si nécessaire
