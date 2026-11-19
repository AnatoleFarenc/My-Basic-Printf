# My-Basic-Printf

A minimal reimplementation of `printf` in C, built as a static library (`libftprintf.a`) on top of a small custom libc (`libft/`).

## Supported conversions

| Specifier | Output |
|-----------|--------|
| `%c` | character |
| `%s` | string (`(null)` for NULL) |
| `%p` | pointer address in hex (`(nil)` for NULL) |
| `%d` / `%i` | signed decimal |
| `%u` | unsigned decimal |
| `%x` / `%X` | hex, lowercase / uppercase |
| `%%` | literal `%` |

No flags, width or precision. Returns the number of characters printed.

## Build

```sh
make        # builds libftprintf.a
make clean  # removes object files
make fclean # removes objects and the library
make re     # rebuilds from scratch
```

## Usage

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, %d in hex is %x\n", "world", 255, 255);
    return (0);
}
```

```sh
cc main.c libftprintf.a -o demo && ./demo
```
