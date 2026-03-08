

*This activity has been created as part of the 42 curriculum by subu-kha*
# libft



## Description

Libft is a custom C library that reimplements a set of standard C library functions and adds additional utility functions for string manipulation, memory management, data handling, and linked list operations. 

The project aims to help developers understand low-level C operations, including dynamic memory and data structures, and provides a foundation for building more complex programs.
# Libft

Libft is a custom C library that reimplements standard C library functions and adds additional useful utilities. This library is developed as part of the 42 curriculum.

---

## **Part 1: Mandatory functions**

### Character checks
- **`ft_isalpha(int c)`** – checks if `c` is an alphabetic character.  
- **`ft_isdigit(int c)`** – checks if `c` is a digit.  
- **`ft_isalnum(int c)`** – checks if `c` is alphanumeric.  
- **`ft_isascii(int c)`** – checks if `c` is an ASCII character.  
- **`ft_isprint(int c)`** – checks if `c` is printable.  

### Conversion
- **`ft_toupper(int c)`** – converts a lowercase letter to uppercase.  
- **`ft_tolower(int c)`** – converts an uppercase letter to lowercase.  
- **`ft_atoi(const char *str)`** – converts a string to an integer.  

### Memory
- **`ft_bzero(void *s, size_t n)`** – fills `n` bytes of memory with zero.  
- **`ft_calloc(size_t count, size_t size)`** – allocates and zeroes memory.  
- **`ft_memset(void *b, int c, size_t len)`** – fills memory with a constant byte.  
- **`ft_memcpy(void *dst, const void *src, size_t n)`** – copies `n` bytes from `src` to `dst`.  
- **`ft_memmove(void *dst, const void *src, size_t len)`** – copies memory safely with overlap.  
- **`ft_memchr(const void *s, int c, size_t n)`** – locates byte `c` in memory.  
- **`ft_memcmp(const void *s1, const void *s2, size_t n)`** – compares two memory areas.  

### Strings
- **`ft_strlen(const char *s)`** – returns the length of string `s`.  
- **`ft_strchr(const char *s, int c)`** – locates first occurrence of `c` in `s`.  
- **`ft_strrchr(const char *s, int c)`** – locates last occurrence of `c` in `s`.  
- **`ft_strdup(const char *s1)`** – duplicates a string.  
- **`ft_strlcpy(char *dst, const char *src, size_t size)`** – copies string safely.  
- **`ft_strlcat(char *dst, const char *src, size_t size)`** – concatenates string safely.  
- **`ft_strncmp(const char *s1, const char *s2, size_t n)`** – compares first `n` characters.  
- **`ft_strnstr(const char *haystack, const char *needle, size_t len)`** – finds substring in string.  

### Output
- **`ft_putchar_fd(char c, int fd)`** – writes character to file descriptor.  
- **`ft_putstr_fd(char *s, int fd)`** – writes string to file descriptor.  
- **`ft_putendl_fd(char *s, int fd)`** – writes string with newline.  
- **`ft_putnbr_fd(int n, int fd)`** – writes integer as string.  

---

## **Part 2: Additional functions**

### Strings
- **`ft_substr(char const *s, unsigned int start, size_t len)`** – returns substring from `s`.  
- **`ft_strjoin(char const *s1, char const *s2)`** – joins two strings into one.  
- **`ft_strtrim(char const *s1, char const *set)`** – trims characters from start/end.  
- **`ft_split(char const *s, char c)`** – splits string by delimiter `c`.  
- **`ft_itoa(int n)`** – converts integer to string.  
- **`ft_strmapi(char const *s, char (*f)(unsigned int, char))`** – applies function to each character, returns new string.  
- **`ft_striteri(char *s, void (*f)(unsigned int, char *))`** – applies function to each character, in-place.  

### Linked list
- **`t_list`** – struct containing `void *content` and `t_list *next`.  
- **`ft_lstnew(void *content)`** – creates a new list element.  
- **`ft_lstadd_front(t_list **lst, t_list *new)`** – adds element at front.  
- **`ft_lstadd_back(t_list **lst, t_list *new)`** – adds element at back.  
- **`ft_lstsize(t_list *lst)`** – counts elements in list.  
- **`ft_lstlast(t_list *lst)`** – returns last element.  
- **`ft_lstdelone(t_list *lst, void (*del)(void *))`** – deletes one element.  
- **`ft_lstclear(t_list **lst, void (*del)(void *))`** – clears entire list.  
- **`ft_lstiter(t_list *lst, void (*f)(void *))`** – applies function to each element.  
- **`ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))`** – creates new list applying function.  

---

### **Usage example**

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *joined = ft_strjoin(s1, s2);

    if (joined)
    {
        printf("%s\n", joined); // Output: Hello, world!
        free(joined);
    }
    return 0;
}

## Instructions

make        #complie library

make fclean #Remove object files



## Resources

- Man pages for function behaviors

- 42 project guides

- AI for testing and explanations

- Peer collaboration
