## 2. Dossier `builtins/` (builtins du shell)

### Checklist générale

* [ ] Implémenter tous les builtins requis (`cd`, `echo`, `pwd`, `env`, `export`, `unset`, `exit`)
* [ ] Chaque builtin doit gérer correctement les erreurs et retourner un code de sortie (`$?`)
* [ ] Libération mémoire spécifique aux builtins si nécessaire
* [ ] Tests unitaires pour chaque builtin

### `cd.c`

* [ ] Changer le répertoire courant (`chdir`)
* [ ] Mettre à jour `PWD` et `OLDPWD` dans l’environnement
* [ ] Gérer `cd -` (retour au précédent répertoire)
* [ ] Gérer erreurs (`directory not found`, `permission denied`)

### `echo.c`

* [ ] Afficher les arguments à l’écran
* [ ] Gérer option `-n` (pas de newline final)

### `env.c`

* [ ] Afficher toutes les variables d’environnement
* [ ] Gérer erreurs si l’environnement est vide

### `exit.c`

* [ ] Quitter le shell correctement
* [ ] Gérer un code de sortie donné en argument
* [ ] Libérer toutes les ressources avant de quitter

### `export.c`

* [ ] Ajouter ou modifier une variable d’environnement
* [ ] Vérifier la validité des noms de variables
* [ ] Gérer affichage si aucun argument (`export` seul)

### `pwd.c`

* [ ] Afficher le répertoire courant

### `unset.c`

* [ ] Supprimer une variable d’environnement
* [ ] Gérer suppression de variables inexistantes sans crash

### `builtins.h`

* [ ] Déclarer toutes les fonctions builtins
* [ ] Inclure structures et typedef nécessaires pour l’accès à l’environnement

