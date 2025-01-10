# C - File I/O

This project focuses on file input/output (I/O) operations in C, including creating, reading, writing, and appending files, as well as copying file contents. The tasks make use of system calls like `open`, `read`, `write`, and `close`.

---

## Table of Contents
1. [Description](#description)
2. [Requirements](#requirements)
3. [Tasks and Files](#tasks-and-files)
4. [Compilation and Usage](#compilation-and-usage)
5. [Examples](#examples)
6. [Author](#author)

---

## Description

The project explores:
- File descriptors and their purpose.
- POSIX system calls for file operations.
- Permissions and flags for file creation and manipulation.
- Error handling when dealing with files.

---

## Requirements

- **Operating System:** Ubuntu 20.04 LTS
- **Compiler:** `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Coding Style:** Betty-compliant
- **System Calls Used:** `open`, `read`, `write`, `close`

---

## Tasks and Files

| Task                                   | File                         | Description                                                                 |
|----------------------------------------|------------------------------|-----------------------------------------------------------------------------|
| **0. Tread lightly, she is near**      | `0-read_textfile.c`          | Reads a text file and prints it to POSIX standard output.                   |
| **1. Under the snow**                  | `1-create_file.c`            | Creates a file with specified content and permissions.                      |
| **2. Speak gently, she can hear**      | `2-append_text_to_file.c`    | Appends text at the end of an existing file.                                |
| **3. cp**                              | `3-cp.c`                     | Copies the content of one file to another using a buffer.                   |

---

## Compilation and Usage

1. **Clone the Repository**
   ```bash
   git clone <repository_url>
   cd file_io

