# EmbeddedSystems_Linux_ViTextEditor.md

# Embedded System Introduction – Linux – VI Text Editor

## What is meant by Embedded Systems?

> The Embedded Systems is a specialized computer system designed to perform a dedicated function within a larger mechanical or electrical system.

### To be familiar with Development tools. There are four steps:

1. **Writing a C program** by using text editors. *(VI or VIM)*
2. **Compilation** of the C Program – *Compiler (GCC)*
3. **Debugging** the C Program – *Debugger (GDB)*
4. **Loading** the Program – *Loader (LDD)*

---

## 1. Text Editors

A **Text Editor** is a software application used for editing plain text files. It allows users to create, modify, and save text-based content, such as code, configuration files, or simple notes.

Text editors are of two types:

- GUI (Graphical User Interface) Text Editors
- CLI (Command Line Interface) Text Editors

### i. Graphical User Interface (GUI)

A GUI in a text editor provides a visual and interactive way for users to interact with the software.

- **Features**: Windows and Menus, Icons and Buttons, Visual Elements, Mouse Interaction.
- **Examples**: Notepad (Windows), TextEdit (macOS), VS Code, Sublime Text, Atom.

### ii. Command Line Interface (CLI)

A CLI provides a text-based interface where users interact with the software by typing commands into a terminal.

- **Features**: Command-based Interaction, Text-centric Environment, Keyboard-driven Efficiency, No Graphical Elements.
- **Examples**: VI/VIM, Nano, Emacs (can also be used with a GUI).

---

## CLI vs GUI Comparison

| Feature         | Command Line Interface (CLI)             | Graphical User Interface (GUI)           |
|----------------|-------------------------------------------|------------------------------------------|
| Definition     | Interaction is by typing commands         | Interactions via graphics, visuals, icons|
| Understanding  | Commands must be memorized                | Icons and visuals are easy to understand |
| Memory         | Requires less memory                      | Requires more memory                     |
| Speed          | Keyboard-based; generally faster          | Mouse-based; generally slower            |
| Resources Used | Only keyboard                             | Both mouse and keyboard                  |
| Accuracy       | High                                      | Comparatively lower                      |
| Flexibility    | CLI remains constant                      | GUI can change with updates              |

---

## 2. Compiler

A **Compiler** is a software program that translates source code written in a high-level programming language into a low-level language, typically machine code or assembly code.

- **We use**: GNU C Compiler (GCC)

### Compilation Process:

```
HIGH LEVEL LANGUAGE  --->  COMPILER  --->  LOW LEVEL LANGUAGE
```
