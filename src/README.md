# libft 📚  
A custom implementation of essential C library functions, plus additional utilities, developed as part of the 42 curriculum to reinforce knowledge of C programming, memory management, and algorithms.

## Description 📜  
libft is your very own C library, containing reimplementations of functions from the standard library as well as new ones that are frequently useful in future projects.  
The main goal is to provide a personal toolkit to replace or extend `<string.h>`, `<ctype.h>`, `<stdlib.h>` and others.

---

## The Library Includes 🧩  

### **Part 1 – Standard C Library Functions**
| **Category** | **Functions** |
|--------------|---------------|
| **Memory** | `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp` |
| **Strings** | `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr` |
| **Character checks** | `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint` |
| **Conversions** | `atoi`, `toupper`, `tolower` |
| **Memory allocation** | `calloc` |
| **String duplication** | `strdup` |

---

### **Part 2 – Additional Functions**
| **Category** | **Functions** |
|--------------|---------------|
| **String manipulation** | `substr`, `strjoin`, `strtrim`, `split` |
| **Conversion** | `itoa` |
| **Function application** | `strmapi`, `striteri` |
| **Output functions** | `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd` |

---

### **Bonus – Linked List Functions**
| **Category** | **Functions** |
|--------------|---------------|
| **Linked list creation & addition** | `lstnew`, `lstadd_front`, `lstadd_back` |
| **Linked list info** | `lstsize`, `lstlast` |
| **Linked list deletion & iteration** | `lstdelone`, `lstclear`, `lstiter`, `lstmap` |

---

## Technologies & Concepts 🛠️  
- C language  
- Pointer manipulation  
- Memory management (`malloc`, `free`)  
- String handling  
- Linked lists  

---

## Source Code 📂  
- `libft.h` → Header file with function prototypes and necessary includes.  
- `*.c` → Each `.c` file implements a single function for clarity and maintainability.  
- `Makefile` → Automates compilation of the library into `libft.a`.  

---

## Instructions 🚀  
Compile the library:  
```bash
make
```
This will create the `libft.a` library, which you can link to your projects.

- To clean the object files generated during compilation, run the command `make clean`.
```bash
make clean
```
- To remove the libft.a library, run the command `make fclean`.
```bash
make fclean
```
- To recompile the entire project, run the command `make re`.
```bash
make re
```

- To compile the bonus section, run the command `make bonus`
```bash
make bonus
```

## Used Tests 🧪
- [Francinette](https://github.com/xicodomingues/francinette)

## Grade: 125 / 125 🏅
Iuuhu!

## Useful Links 🔗
- [Dynamic Memory Allocation](https://www.geeksforgeeks.org/c/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
- [C String Library](https://www.w3schools.com/c/c_ref_string.php)
- [Linked Lists](https://medium.com/@luiz.gandra/estruturas-de-dados-por-que-usar-linked-lists-e-como-manipul%C3%A1-las-a80e425d3006)

## License 📜
This project was developed for academic purposes at 42, but feel free to use it as reference or inspiration.