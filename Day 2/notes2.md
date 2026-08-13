                                                                NOTES OF DAY-2


# 1. Variables

A **variable** is a named container in memory that stores a value.
``` c
int age = 18;
```

Here: - `int` → data type - `age` → variable name - `18` → value stored
in the variable - `=` → assignment operator - `;` → ends the statement

The value of a variable can change during program execution.

``` c
int age = 18;
age = 19;
```

## Rules for Naming Variables

In C, variable names are called **identifiers**. Follow these rules:

1.  A variable name **cannot start with a number**.
2.  It can start with a **letter (`A-Z`, `a-z`) or underscore (`_`)**.
3.  After the first character, it can contain **letters, digits, and
    underscores**.
4.  It **cannot contain spaces, commas, or other invalid symbols**.
5.  Variable names are **case-sensitive**.

### Examples

``` c
int age;
int student_age;
```

Invalid examples:

``` c
int 1age;        // ❌ starts with a number
int student age; // ❌ contains a space
int student-age; // ❌ '-' is not allowed in an identifier
```

### Case-sensitive means:

``` c
int age = 18;
int Age = 20;
```

`age` and `Age` are **two different variables**.

## Best Practice: Use Meaningful Names

Choose names that tell you what the variable stores.

``` c
int student_age;
float temperature;
int total_marks;
```

This makes your program easier to **read, understand, debug, and
maintain**.

Avoid vague names when a meaningful name is possible:

``` c
int x;              // Not very descriptive
int student_age;    // Much clearer
```

------------------------------------------------------------------------

# 2. Constants

A **constant** is a fixed value that does not change.
Example: `1, 3, 67, 9`

------------------------------------------------------------------------

# 3. Data Types

A **data type** tells C: - what kind of data a variable stores - how
much memory is generally required - how the data should be interpreted

The main basic data types in today's notes are:

## a)`int` --- Integer

`int` is used to store **whole numbers**.

``` c
int age = 18;
int marks = 95;
int temperature = -5;
```

Typical memory: **4 bytes**

Common format specifier:`%d`

Example:

``` c
printf("%d", age);
```

------------------------------------------------------------------------

## b)`char` --- Character

`char` is used to store **a single character**.

``` c
char grade = 'A';
char symbol = '@';
char digit = '7';
```

Typical memory: **1 byte**

Format specifier:`%c`

Example:

``` c
printf("%c", grade);
```

### Remember:

``` c
char letter = 'A';    // ✅
char letter = "A";    // ❌
```

Single quotes are used for a character.

------------------------------------------------------------------------

## c)`float` --- Decimal Values

`float` is used for numbers with decimal values.

``` c
float percentage = 83.5;
float temperature = 36.6;
```

Typical memory: **4 bytes**

For `printf`, the commonly used format specifier is: `%f`
Example:

``` c
printf("%f", percentage);
```

------------------------------------------------------------------------
# Keywords

**Keywords are reserved words in C.**

Their meaning is already known to the compiler, so you cannot use them
as normal variable or function names.

For example:

``` c
int, float, while, for
```
------------------------------------------------------------------------

# Comments

**Comments are notes written inside source code for humans.**

The compiler ignores comments.

They are useful for: - explaining code - leaving reminders - documenting
logic - temporarily disabling code during development

------------------------------------------------------------------------

## a) Single-Line Comment

Use `//`.

``` c
// This is a single-line comment
int age = 18;
```

Everything after `//` on that line is treated as a comment.

------------------------------------------------------------------------

## b) Multi-Line Comment
Use `/* ... */`.

Example:

``` c
/*
   Store the student's marks
   and display them.
*/
int marks = 95;
```

------------------------------------------------------------------------
