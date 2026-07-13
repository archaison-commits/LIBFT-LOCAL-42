This project has been created as part of the 42 curriculum by brechied.

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

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`

### Character conversion

* `ft_toupper`
* `ft_tolower`

### Memory functions

* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_memchr`
* `ft_memcmp`
* `ft_calloc`

### String functions

* `ft_strlen`
* `ft_strlcpy`
* `ft_strlcat`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_strnstr`
* `ft_strdup`
* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_strmapi`
* `ft_striteri`

### Conversion

* `ft_atoi`
* `ft_itoa`

### File descriptor output

* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

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

