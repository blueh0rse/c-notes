# C notes

Personal notes on the C programming language.

## Synthax

Minimal code:

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("Hello world!\n");
    return 0;
}
```

Header file including functions:

```c
#include <file.h>
```

## Variables

### Types

| Name          | Minimum           | Maximum          |
| ------------- | ----------------- | ---------------- |
| `signed char` | -128              | 127              |
| `int`         | -32 768           | 32 767           |
| `long`        | -2 147 483 648    | 2 147 483 647    |
| `float`       | 1.17549 × 10^-38  | 3.40282 × 10^38  |
| `double`      | 2.22507 × 10^-308 | 1.79769 × 10^308 |

| Name            | Minimum | Maximum       |
| --------------- | ------- | ------------- |
| `unsigned char` | 0       | 255           |
| `unsigned int`  | 0       | 65 535        |
| `unsigned long` | 0       | 4 294 967 295 |

### Initialisation

Declaring and assigning a variable in two steps:

```c
int myNumber;
myNumber = 1;
```

Preferred way to initialize with assignment:

```c
int myNumber = 1;
```

Creating a constant:

```c
int MY_CONST = 2;
```

### Display

Using `printf` to display variables based on their type:

| Format  | Type attendu   |
| ------- | -------------- |
| `"%d"`  | `int`          |
| `"%u"`  | `unsigned int` |
| `"%ld"` | `long`         |
| `"%f"`  | `float`        |
| `"%f"`  | `double`       |

```c
printf("Your number is: %d", myNumber);
printf("Your number is: %d\n", myNumber);
printf("Your number is %d and mine is %d", myNumber, MY_CONST);
```

## User Input

Prompting user for input:

```c
int age = 0;
scanf("%d", &age);
```

> Note: To get a float use `%f` but for double use `%lf`

## Maths

Basic mathematical operations:

```c
int results = 0;
results = 5 + 3;
results = 5 - 3;
results = 5 * 3;
results = 5 / 3;
results = 5 % 3;
```

For floating-point division:

```c
double results = 0;
results = 5.0 / 2.0;
printf ("5 / 2 = %lf", results);
```

### Incrementation

Instead of:

```c
results = results + 1;
results = results - 1;
```

Use:

```c
results++
results--
```

### Other

```c
int number = 2;

number += 4; // 6
number -= 3; // 3
number *= 5; // 15
number /= 3; // 5
number %= 3; // 2 (5=1*3+2)
```
