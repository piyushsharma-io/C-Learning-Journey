                                                            NOTES OF DAY-1


# What is C?

***C is a general-purpose programming language designed for system programming and application development. It provides low-level memory access while supporting high-level programming constructs, which is why it is often described as a "middle-level" language.. It offers features like:***
- Portibility
- Fast
- Gives full memory control
- Is close to hardware
- It is an IDE language


# #Include <stdio.h>
***The #include directive is processed before compilation. It tells the preprocessor to include the contents of the stdio.h header file into the source file. This header provides declarations for standard input and output functions such as `printf()` and `scanf()`.***

# Int main()
***Here `int` means the type of data that will be returned to the function which in this case is a integer and `main()` is the part from where the function starts.***
#

# Today's code
```c
#include <stdio.h> 
int main() 
{ 
    printf("Hello World"); 
    return 0; 
    }
```
This is just an introductional program to C which helps us understand some basic parts of it.

## Output
``` Hello World ```

## Key Takeaways

- Every C program starts execution from main().
- #include is handled by the preprocessor.
- printf() is used to display output.
- return 0; indicates successful program termination.