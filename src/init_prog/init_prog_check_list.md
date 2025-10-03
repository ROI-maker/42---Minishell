
## 3. Dossier `init_prog/` (`init_env.c` et `init_prog.h`)

### Checklist générale

* [ ] Initialiser l’environnement à partir de `envp`
* [ ] Stocker les variables dans une structure (liste chainée ou tableau)
* [ ] Fournir fonctions pour accéder et modifier l’environnement (`get`, `set`, `unset`)
* [ ] Libération mémoire de l’environnement à la fin du shell
* [ ] Test d’affichage de l’environnement initial et modifié

### `init_env.c`

* [ ] Fonction `init_env` qui copie `envp`
* [ ] Gestion mémoire pour chaque variable
* [ ] Initialisation de `$?` à 0

### `init_prog.h`

* [ ] Déclaration des structures pour variables d’environnement
* [ ] Déclaration des fonctions `init_env`, `get_env`, `set_env`, `unset_env`
