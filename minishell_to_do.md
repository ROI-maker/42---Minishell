# Minishell 42 - Checklist & répartition du travail

## 1. Main loop
- [ ] Afficher le prompt `$> `  (A)
- [ ] Lire la ligne avec readline (A)
- [ ] Ajouter historique (B)
- [ ] Ctrl-D pour quitter (A)
- [ ] Ctrl-C gère nouvelle ligne (B)

## 2. Builtins
### Personne A
- [ ] cd
- [ ] pwd
- [ ] exit
### Personne B
- [ ] echo
- [ ] env
- [ ] export
- [ ] unset

## 3. Parsing
- [ ] Découper la ligne en commandes et arguments (A)
- [ ] Gestion des quotes simples et doubles (B)
- [ ] Gestion des expansions $VAR et $? (B)

## 4. Execution / Pipes
- [ ] Execution simple (A)
- [ ] Pipes (B)
- [ ] Redirections (B)

## 5. Env / Init
- [ ] init_env (A)
- [ ] env_utils (B)

## 6. Signals
- [ ] Ctrl-C / SIGINT (A)
- [ ] Ctrl-\ / SIGQUIT (B)

## 7. Utils / Free
- [ ] free.c, errors.c (A)
- [ ] utils.c, exit_prog.c (B)

## 8. Tests
- [ ] Scripts de test builtins (A)
- [ ] Scripts de test pipes / redirections (B)
