# piscineC08

42 Piscine C08 exercises.

This repository contains my solutions for the C08 project completed during the 42 Piscine.  
The project focuses on header files, macros, typedefs, structures, and working with arrays of structs in C.

## Exercises

| Exercise | Name | Status |
|---|---|---|
| ex00 | ft.h | Done |
| ex01 | ft_boolean.h | Done |
| ex02 | ft_abs.h | Done |
| ex03 | ft_point.h | Done |
| ex04 | ft_strs_to_tab | Done |
| ex05 | ft_show_tab | Done |

## Project structure

```txt
piscineC08/
├── ex00/
├── ex01/
├── ex02/
├── ex03/
├── ex04/
├── ex05/
└── .gitignore
```

Each folder contains the required file or files for the corresponding exercise.

## Topics covered

- Header files
- Include guards
- Function prototypes
- Macros
- Macro functions
- `typedef`
- Structures
- Struct pointers
- Dynamic allocation with `malloc`
- Freeing memory with `free`
- Arrays of structures
- Output with `write`
- 42 Norminette formatting

## Compilation

Example compilation:

```sh
cc -Wall -Wextra -Werror ex04/ft_strs_to_tab.c
```

Some exercises are header-only and are meant to be tested with the provided main from the subject.

For macro exercises, Norminette should be run with the `CheckDefine` flag:

```sh
norminette -R CheckDefine ex01/ft_boolean.h
norminette -R CheckDefine ex02/ft_abs.h
```

## Structure used in ex04 and ex05

The last exercises use the `s_stock_str` structure to store information about strings:

```c
typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;
```

Where:

```txt
size = length of the string
str  = original string
copy = allocated copy of the string
```

## Notes

This repository is part of my work during the 42 Piscine.  
The goal of C08 is to understand how C programs can be organised using headers, macros, typedefs, and structures.

Testing `main` functions and unnecessary includes should be removed before submitting to 42.

## Author

KruKuma
