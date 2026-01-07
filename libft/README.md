
*This activity has been created as part of the 42 curriculum by sarah alomari*

# Libft

## Description

Libft is a 42 project aiming to reimplement standard C library functions and additional utilities. The library provides functions for string manipulation, memory management, character checks, I/O, and linked list handling.

---

## Instructions

### Compilation

```bash
make
```
- Creates libft.a from all .c files.  

Other commands:

```bash
make clean    # Remove object files
make fclean   # Remove object files and libft.a
make re       # Clean then build again
```

---

### Usage

```c
#include "libft.h"

```

Compile with:

```bash
gcc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

---

## Resources

- 42 School Libft instructions  
- C Standard Library documentation (man pages)  
- Articles/tutorials on strings, memory, and linked lists in C  

---

## Library Overview

| Category               | Functions                                           |
|-----------------------|----------------------------------------------------|
| Character Checks       | ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower |
| String Functions       | ft_strlen, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr, ft_strdup, ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_strmapi, ft_striteri |
| Memory Functions       | ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp, ft_calloc |
| Conversion             | ft_atoi, ft_itoa                                   |
| File Descriptor Output | ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd |
| Linked List Functions  | ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap |

---

## Test Suites

| Test Suite          | Link                                                      |
|--------------------|-----------------------------------------------------------|
| libftTester        | [GitHub](https://github.com/Tripouille/libftTester)      |

---
