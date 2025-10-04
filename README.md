<!--HEADER-->
<h1 align="center">
  MiniShell | 
  <picture>
    <source media="(prefers-color-scheme: dark)" srcset="https://cdn.simpleicons.org/42/white">
    <img alt="42" width=40 align="center" src="https://cdn.simpleicons.org/42/Black">
  </picture>
  Cursus
  <img alt="Score 100" src="https://img.shields.io/badge/Score-0-green?style=flat-square" 
       style="vertical-align:middle; margin-left:10px;">
</h1>
<!--FINISH HEADER-->

### What is the project about
**Minishell** is a project that challenges you to recreate a simplified version of the UNIX shell.  

The goal is to build a small command-line interpreter capable of parsing and executing user commands, handling **pipes**, **redirections**, **environment variables**, and **basic builtins** (`echo`, `cd`, `pwd`, `export`, `unset`, `env`, `exit`).  

The objective is not only to execute commands correctly, but also to understand and reimplement the **core mechanisms of a real shell** — such as:
- Process creation with `fork` and `execve`
- Input/output redirections (`>`, `<`, `>>`, `<<`)
- Pipelines (`|`)
- Signal handling (Ctrl-C, Ctrl-D, Ctrl-\)
- Environment variable expansion (`$VAR`)

This project emphasizes **parsing**, **process management**, **system calls**, and a deep understanding of **UNIX internals**.

## 🧾 Mandatory Instructions

### Program Information

| **Category** | **Details** |
|---------------|-------------|
| **Program name** | `minishell` |
| **Turn-in files** | `Makefile`, `*.h`, `*.c` |
| **Makefile rules** | `NAME`, `all`, `clean`, `fclean`, `re` |
| **External functions allowed** | `readline`, `rl_clear_history`, `rl_on_new_line`, `rl_replace_line`, `rl_redisplay`, `add_history`, `printf`, `malloc`, `free`, `write`, `access`, `open`, `read`, `close`, `fork`, `wait`, `waitpid`, `wait3`, `wait4`, `signal`, `sigaction`, `sigemptyset`, `sigaddset`, `kill`, `exit`, `getcwd`, `chdir`, `stat`, `lstat`, `fstat`, `unlink`, `execve`, `dup`, `dup2`, `pipe`, `opendir`, `readdir`, `closedir`, `strerror`, `perror`, `isatty`, `ttyname`, `ttyslot`, `ioctl`, `getenv`, `tcsetattr`, `tcgetattr`, `tgetent`, `tgetflag`, `tgetnum`, `tgetstr`, `tgoto`, `tputs` |
| **Libft authorized** | ✅ Yes |

---

### 🧠 Description

You must **write your own shell** — a simplified version of `bash`.

Your shell should:

- Display a **prompt** while waiting for user input.  
- Maintain a **working history** using `readline`.  
- Search and launch executables based on the `$PATH` variable, or via relative/absolute paths.  
- Use **at most one global variable**, and **only** to indicate a received signal.  
  - ⚠️ This variable must not contain or give access to any other data.  
  - You cannot have global structs or “norm-type” global variables.  

---

### 🗣️ Input Parsing Rules

- Do **not** interpret:
  - Unclosed quotes  
  - Unrequired special characters such as `\` (backslash) or `;` (semicolon)

- Handle quotes:
  - `'single quotes'` → prevent all interpretation of meta-characters.  
  - `"double quotes"` → prevent all interpretation **except** `$` (for variable expansion).  

---

### 🔄 Redirections

Your shell must implement these redirections:

| Operator | Description |
|-----------|--------------|
| `<` | Redirect input |
| `>` | Redirect output (overwrite) |
| `<<` | Heredoc – read until a given delimiter (does **not** update history) |
| `>>` | Redirect output (append mode) |

---

### 🚰 Pipes

- Implement pipes (`|`)  
  - The **output** of each command is connected to the **input** of the next via a pipe.  

---

### 🌱 Environment Handling

- Support environment variables:  
  - `$VAR` → expands to its value.  
  - `$?` → expands to the exit status of the most recently executed command.  

---

### 🧨 Signal Handling

Your minishell must handle the following in **interactive mode**:

| Shortcut | Behavior |
|-----------|-----------|
| `Ctrl-C` | Displays a new prompt on a new line |
| `Ctrl-D` | Exits the shell |
| `Ctrl-\` | Does nothing |

Other requirements:
- `Ctrl-C`, `Ctrl-D`, and `Ctrl-\` must behave like in bash.
- Signal handling must use one global variable to store the signal number.

---

### ⚙️ Built-in Commands

Your shell must implement the following built-ins:

| Command | Behavior |
|----------|-----------|
| `echo` | Supports `-n` option |
| `cd` | Only with a relative or absolute path |
| `pwd` | No options |
| `export` | No options |
| `unset` | No options |
| `env` | No options or arguments |
| `exit` | No options |

---

### 💾 Memory Management

- `readline()` may leak memory — that’s acceptable (do not fix it).  
- ⚠️ **Your own code must not leak memory.**

---

### ⚠️ Important Notes

- Stick to the subject — **no extra features** are required.  
- If you have any doubt about behavior, **use `bash` as reference**.  

---

## ✅ Mandatory Checklist

### 🧩 Core Features
- [ ] Display prompt while waiting for input  
- [ ] Maintain command history (`readline`)  
- [ ] Execute commands found via `$PATH`  
- [ ] Handle relative and absolute paths  
- [ ] Use only **one** global variable (signal number only)  

### ✍️ Parsing
- [ ] Handle quotes (`'`, `"`)  
- [ ] Ignore unclosed quotes and unsupported characters (`\`, `;`)  
- [ ] Implement tokenization and parsing  
- [ ] Expand environment variables `$VAR` and `$?`  

### 🔁 Redirections & Pipes
- [ ] `<` redirect input  
- [ ] `>` redirect output (overwrite)  
- [ ] `>>` append mode  
- [ ] `<<` heredoc (no history)  
- [ ] Implement pipes between commands  

### 🧠 Builtins
- [ ] `echo -n`  
- [ ] `cd`  
- [ ] `pwd`  
- [ ] `export`  
- [ ] `unset`  
- [ ] `env`  
- [ ] `exit`  

### 🧨 Signals
- [ ] `Ctrl-C` → new prompt  
- [ ] `Ctrl-D` → exit shell  
- [ ] `Ctrl-\` → do nothing  
- [ ] Manage signals like bash  

### 💾 Memory & Norm
- [ ] No memory leaks (except from `readline`)  
- [ ] Norm-compliant  
- [ ] Proper free of all allocated memory  

---

> 🧘 *"As beautiful as a shell."* – 42 Subject

