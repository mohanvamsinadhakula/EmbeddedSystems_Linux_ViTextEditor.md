# What is meant by Embedded Systems?

The **Embedded System** is a specialized computer system designed to perform a dedicated function within a larger mechanical or electrical system.

---

## Development Tools in Embedded Systems

To work with embedded systems, you need to be familiar with the development tools. There are four main steps:

1. **Writing a C program using text editors** (e.g., VI or VIM)
2. **Compiling the C Program** – using a **Compiler** (GCC)
3. **Debugging the C Program** – using a **Debugger** (GDB)
4. **Loading the Program** – using a **Loader** (LDD)

---

## 1. Text Editors

A **text editor** is a software application used for editing plain text files. It allows users to create, modify, and save text-based content such as code, configuration files, or simple notes.

### Types of Text Editors:

- **GUI (Graphical User Interface) Text Editors**
- **CLI (Command Line Interface) Text Editors**

#### i. GUI (Graphical User Interface):

A GUI in a text editor provides a visual and interactive way for users to interact with the software.

**Features:**

- Windows and Menus  
- Icons and Buttons  
- Visual Elements  
- Mouse Interaction

**Examples:**  
Notepad (Windows), TextEdit (macOS), VS Code, Sublime Text, Atom

#### ii. CLI (Command Line Interface):

A CLI in a text editor provides a text-based interface where users interact with the software by typing commands into a terminal or console.

**Features:**

- Command-based Interaction  
- Text-centric Environment  
- Keyboard-driven Efficiency  
- No Graphical Elements

**Examples:**  
VI/VIM, Nano, Emacs (CLI mode)

---

### CLI vs GUI Comparison Table:

| Basics        | Command Line Interface (CLI)                            | Graphical User Interface (GUI)                    |
|---------------|--------------------------------------------------------|--------------------------------------------------|
| **Definition** | Interaction is by typing commands.                    | Interactions by graphics, visual components, icons. |
| **Understanding** | Commands need to be memorized.                   | Visual indicators and icons are easy to understand. |
| **Memory**     | Requires less memory.                                 | Requires more memory due to visual components.   |
| **Working Speed** | Faster due to keyboard commands.                 | Slower due to mouse-based interaction.           |
| **Resources Used** | Only keyboard is used.                          | Both mouse and keyboard are used.                |
| **Accuracy**   | High                                                   | Comparatively lower                              |
| **Flexibility** | CLI remains unchanged over time.                     | GUI structure/design may change with updates.    |

---

## 2. Compiler

A **compiler** is a software program that translates source code written in a high-level programming language into a low-level language such as machine code or assembly.

- **Tool Used:** GNU C Compiler (GCC)

---

## 3. Debugger

A **debugger** is a tool used to find and fix runtime errors in a program.

- **Types of Errors:**
  - **Compile-time Errors** – Resolved by the compiler.
  - **Run-time Errors** – Resolved using the debugger.

- **Tool Used:** GDB (GNU Debugger)

---

## 4. Linker/Loader

The **Linker/Loader (LDD)** is used to combine object files and load them into memory to run on a target device.

---
