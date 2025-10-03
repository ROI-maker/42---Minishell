## 1. `main.c` (boucle principale du shell)

* [ ] Initialiser le shell et l’environnement (`init_env`)
* [ ] Boucle principale `while (1)`
* [ ] Afficher le prompt `$> `
* [ ] Lire la ligne avec `readline`
* [ ] Ajouter la ligne à l’historique avec `add_history`
* [ ] Vérifier `Ctrl-D` pour quitter proprement
* [ ] Gérer `Ctrl-C` pour interrompre la ligne sans quitter le shell
* [ ] Passer la ligne à la fonction de parsing (`parsing.c`)
* [ ] Passer les commandes parsees à l’execution (`executions.c`)
* [ ] Libérer la mémoire temporaire après chaque commande
* [ ] Boucle continue jusqu’à exit ou EOF
