*This project has been created as part of the 42 curriculum by Avixyr.*

# libft

## Description

`libft` is a C library developed as part of the 42 curriculum. The goal of the project is to recreate a collection of commonly used C standard-library functions and implement additional string, memory, output, and linked-list utilities. The resulting static library can be reused in other C projects.

The library is written in C and is built as `libft.a`.

## Instructions

### Requirements

- A C compiler (the Makefile uses `cc`).
- GNU Make.
- The system headers required by `libft.h`, including `<bsd/string.h>`.

### Build

From the repository root, run:

```sh
make
```

This should produce the static archive `libft.a`. To remove object files, run `make clean`; to remove both object files and the archive, run `make fclean`. Run `make re` to clean and rebuild.

### Use the library

Include `libft.h` in your C source and link the archive when compiling. For example:

```sh
cc -Wall -Wextra -Werror -I. your_file.c -L. -lft -o your_program
```

The library is not an executable by itself. Your program must provide its own `main` function.

## Library contents

The library provides the following functions:

### Character checks and conversions

- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, and `ft_isprint` classify characters.
- `ft_tolower` and `ft_toupper` convert ASCII letters between lowercase and uppercase.

### Memory utilities

- `ft_bzero` fills a memory region with zero bytes.
- `ft_calloc` allocates zero-initialized memory for an array.
- `ft_memset` fills a memory region with a byte value.
- `ft_memcpy` copies a memory region; `ft_memmove` supports overlapping regions.
- `ft_memchr` searches a memory region for a byte.
- `ft_memcmp` compares two memory regions byte by byte.

### String utilities

- `ft_strlen` returns a string's length.
- `ft_strchr` and `ft_strrchr` locate the first or last occurrence of a character.
- `ft_strncmp` compares strings up to a specified number of characters.
- `ft_strnstr` searches for a substring within a specified limit.
- `ft_strdup` duplicates a string; `ft_substr` allocates a substring.
- `ft_strjoin` concatenates two strings; `ft_strtrim` removes characters from a specified set at the beginning and end of a string.
- `ft_split` splits a string using a delimiter character.
- `ft_strlcpy` and `ft_strlcat` copy and concatenate strings with a size limit.
- `ft_strmapi` creates a transformed string by applying a callback to each character; `ft_striteri` applies a callback to each character in place.
- `ft_atoi` converts the initial numeric portion of a string to an integer; `ft_itoa` converts an integer to an allocated string.

### File-descriptor output

- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, and `ft_putnbr_fd` write a character, string, newline-terminated string, or integer to a file descriptor.

### Linked-list utilities

The library defines `t_list`, a singly linked-list node containing a `void *content` pointer and a `next` pointer. Its list functions are:

- `ft_lstnew` creates a node; `ft_lstsize` counts nodes; `ft_lstlast` returns the last node.
- `ft_lstadd_front` and `ft_lstadd_back` add a node at either end of a list.
- `ft_lstdelone` deletes one node using a caller-provided content destructor; `ft_lstclear` deletes a list and its contents.
- `ft_lstiter` applies a callback to each node's content.
- `ft_lstmap` creates a new list by applying a transformation callback to each content item.

Callbacks and content destructors are supplied by the caller. Consult `libft.h` for the exact function prototypes.

## Resources

- The C standard library reference: [cppreference — C library](https://en.cppreference.com/w/c)
- Linux manual pages for standard functions such as `memcpy`, `memmove`, `strlen`, and `write`: [man7.org](https://man7.org/linux/man-pages/)
- The 42 curriculum and the subject provided by the campus are the project requirements for expected behavior and function prototypes.

### AI use

AI assistance was used to review the repository's function implementations for potential edge cases and to help draft this README. The review was static and advisory: it did not execute the library or generate the implementation code. The function descriptions above summarize the repository's API; AI-assisted findings should be independently checked against the project subject and tests.
