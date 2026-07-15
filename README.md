*This project has been created as part of the 42 curriculum by brechied.*

# Libft

## Description

**Libft** is a custom implementation of a subset of the C standard library. The goal of this project is to gain a deeper understanding of low-level programming in C by recreating common library functions related to character handling, memory management, string manipulation, and file descriptor output.

The project produces a reusable static library (`libft.a`) that serves as a foundation for many subsequent 42 projects.

## Instructions

### Compile

```bash
make
```

### Clean object files

```bash
make clean
```

### Remove objects and library

```bash
make fclean
```

### Rebuild

```bash
make re
```

Include the header in your project:

```c
#include "libft.h"
```

Compile your program with:

```bash
cc main.c libft.a
```

## Library Reference

### Character classification

* `ft_isalpha` – Checks if a character is an alphabetic letter.
* `ft_isdigit` – Checks if a character is a decimal digit.
* `ft_isalnum` – Checks if a character is a letter or digit.
* `ft_isascii` – Checks if a character is within the ASCII range.
* `ft_isprint` – Checks if a character is printable.

### Character conversion

* `ft_toupper` – Converts a lowercase letter to uppercase.
* `ft_tolower` – Converts an uppercase letter to lowercase.

### Memory functions

* `ft_memset` – Fills a block of memory with a specified byte.
* `ft_bzero` – Sets a block of memory to zero.
* `ft_memcpy` – Copies memory from source to destination.
* `ft_memmove` – Copies memory safely, handling overlapping regions.
* `ft_memchr` – Finds the first occurrence of a byte in memory.
* `ft_memcmp` – Compares two memory blocks.
* `ft_calloc` – Allocates and zero-initializes memory.

### String functions

* `ft_strlen` – Returns the length of a string.
* `ft_strlcpy` – Copies a string with buffer size protection.
* `ft_strlcat` – Appends a string with buffer size protection.
* `ft_strchr` – Finds the first occurrence of a character in a string.
* `ft_strrchr` – Finds the last occurrence of a character in a string.
* `ft_strncmp` – Compares two strings up to `n` characters.
* `ft_strnstr` – Finds a substring within the first `n` characters.
* `ft_strdup` – Duplicates a string into newly allocated memory.
* `ft_substr` – Creates a substring from a string.
* `ft_strjoin` – Joins two strings into a new string.
* `ft_strtrim` – Removes specified characters from both ends of a string.
* `ft_split` – Splits a string into an array using a delimiter.
* `ft_strmapi` – Creates a new string by applying a function to each character.
* `ft_striteri` – Applies a function to each character of a string in place.

### Conversion

* `ft_atoi` – Converts a string to an integer.
* `ft_itoa` – Converts an integer to a string.

### File descriptor output

* `ft_putchar_fd` – Writes a character to a file descriptor.
* `ft_putstr_fd` – Writes a string to a file descriptor.
* `ft_putendl_fd` – Writes a string followed by a newline.
* `ft_putnbr_fd` – Writes an integer to a file descriptor.

## Resources

### References

* The C Programming Language.
* The Linux `man` pages (`man 3`)

### AI Usage

Gemini and ChatGPT was used to:

* Identify potential edge cases for testing;
* Explain C concepts and standard library behavior;
* Proofread this README.

All implementation, debugging, testing, and final code were completed independently.

### Testers Used

* Tripouille.
* Libft-War-Machine.
