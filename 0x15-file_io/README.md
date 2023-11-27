# 0x15. C - File I/O

This project is about how to use file input and output in C. The project covers the following topics:

- How to create, open, close, read and write files
- What are file descriptors and how to use them
- What are the standard input, output and error and how to use them
- How to use the I/O system calls open, close, read and write
- What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
- What are file permissions and how to set them when creating a file with the open system call
- What is a system call and how to use it
- How to use the other functions: dprintf, printf, putchar, puts, getc, fgets, etc.

## Requirements

- Ubuntu 20.04 LTS
- gcc 9.3.0
- GNU make 4.2.1
- Betty style and code checker

## Usage

To compile the C files, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o <output_file>
```

To run the executable file, use the following command:

```bash
./<output_file>
```

To check the code style and quality, use the following command:

```bash
betty <file_name>
```

## Tasks

The project contains the following tasks:

- [0. Tread lightly, she is near]: A function that reads a text file and prints it to the POSIX standard output.
- [1. Under the snow]: A function that creates a file.
- [2. Speak gently, she can hear]: A function that appends text at the end of a file.
- [3. cp]: A program that copies the content of a file to another file.
- [4. elf]: A program that displays the information contained in the ELF header at the start of an ELF file.

## Author

- KyoZer0 - [GitHub](https://github.com/KyoZer0) - [LinkedIn](https://ma.linkedin.com/in/lahcen-aharouane-457a29223)
