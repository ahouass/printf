# ft_printf - 1337 Project  

[![1337 Badge](https://img.shields.io/badge/1337-Project-blue)](https://www.42network.org/)  

## 📜 Project Overview  

**ft_printf** is a core project in the **1337 curriculum** (part of the 42 Network) that requires reimplementing the standard `printf` function. This project deepens understanding of variadic functions, formatting, and precise output handling in C.  

---

## 🚀 Features  

- Supports formatted output similar to the standard `printf`.  
- Handles various conversions and format specifiers.  
- Implements custom memory and string manipulation utilities for efficient output generation.  

---

## 📂 Repository Structure  

```plaintext  
|-- Makefile                    // Compilation rules for building the library  
|-- ft_printf.c                 // Core implementation of the ft_printf function  
|-- ft_printf.h                 // Header file containing function prototypes  
|-- ft_printf_utils.c           // Helper functions for formatting and output  
|-- ft_printf_utils_bonus.c     // Bonus-specific helper functions  
|-- handle_d.c                  // Handles integer (%d, %i) formatting  
|-- handle_p.c                  // Handles pointer (%p) formatting  
|-- handle_s.c                  // Handles string (%s) formatting  
|-- handle_s_bonus.c            // Bonus: Handles advanced string formatting  
|-- handle_u.c                  // Handles unsigned integer (%u) formatting  
|-- handle_x.c                  // Handles hexadecimal (%x, %X) formatting  
```  

---

## 🛠️ How to Use  

### 1. Clone the Repository  
```bash  
git clone https://github.com/ahouass/42-ft_printf_1337.git ft_printf_42
cd ft_printf_42
```  

### 2. Compile the Library  

Use the provided `Makefile` to compile:  
- **Without Bonus**  
  ```bash  
  make  
  ```  

The compiled library (`libftprintf.a`) will be generated.  

### 3. Include ft_printf in Your Project  

Link the library during compilation:  
```bash  
gcc your_main_file.c -L. -lftprintf -o your_program  
```  

Include the `ft_printf.h` header in your source code:  
```c  
#include "ft_printf.h"  
```  

---

## 📖 Supported Format Specifiers  

### Standard Specifiers:  
- `%c` – Character  
- `%s` – String  
- `%p` – Pointer address  
- `%d` – Signed decimal integer  
- `%i` – Signed integer  
- `%u` – Unsigned decimal integer  
- `%x` – Hexadecimal (lowercase)  
- `%X` – Hexadecimal (uppercase)  
- `%%` – Percentage symbol

---

## 📖 Usage Examples  

### Without Bonus  

```c  
#include "ft_printf.h"  

int main(void) {  
    int num = 42;  
    char *str = "Hello, World!";  

    ft_printf("Integer: %d\n", num);  
    ft_printf("String: %s\n", str);  
    ft_printf("Pointer: %p\n", &num);  
    ft_printf("Hexadecimal: %x\n", num);  

    return 0;  
}  
```  

Output:  
```plaintext  
Integer: 42  
String: Hello, World!  
Pointer: 0x7ffeefbff580  
Hexadecimal: 2a  
``` 

---

## 🛡️ Makefile Targets  

- `make` – Compiles the mandatory part of the library.
- `make clean` – Removes object files.  
- `make fclean` – Removes object files and the compiled library (`libftprintf.a`).  
- `make re` – Cleans and recompiles everything.  

---

## 📋 Objectives  

- Reimplement the standard `printf` function.  
- Master variadic functions and formatting output in C.  
- Extend functionality with bonus formatting flags for advanced output.  

---

## 🌟 Achievements  

- Gained a deeper understanding of variadic functions.  
- Successfully handled complex formatting, output scenarios, and bonus flags.  
- Created a reusable `ft_printf` library for future projects.  

---

## 🛡️ License  

This project is part of the 1337 curriculum. It is shared here for educational purposes and should not be used for plagiarism. 
