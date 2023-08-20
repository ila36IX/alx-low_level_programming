# Preprocessor
### The C Preprocessor
The C preprocessor modifies a source code file before handing it over to the compiler.
```
// Preprocess only; do not compile, assemble or link.
gcc -E file.c
```
##  Static Libraries & Dynamic Libraries
### Static Libraries
- **Static Linking:** The code from the library is copied into your program at compile time and the code doesn't rely on any external libraries at runtime.
- **File Size:** It can increase the file size of your program because all the library code is included directly.
- **Performance:** They can result in faster startup times as there's no need to load external libraries at runtime.
- **Windows:** *.lib* (Library)
- **Linux:** *.a* (Archive)
### Dynamic Libraries
- **Dynamic Linking:** Dynamic libraries are linked at runtime, not compile time. Your program uses these libraries as separate files that are loaded into memory when needed.
-  **File Size:** Dynamic libraries reduce the size of your program on disk since the library code is stored in separate files.
- **Performance:** Multiple programs can share a single copy of a dynamic library in memory, which can save memory resources.
- **Windows:** *.dll* (Dynamic link library)
- **Linux:** *.so* (Shared object)

## Macros
![](https://media4.giphy.com/media/v1.Y2lkPTc5MGI3NjExcXo2MGZqczY5OHBidWlqbTR6d2VnMTg4M3o2ODlrMG8xOXFmMWVqeCZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/tiVSazK48Ax449ZZqU/giphy.gif)

### What is a Macro?
A macro is a snippet (reusable block) of code which has been given a name.
In other words, it's a string replacer.
### Predefined macros
There are several predefined macros that provide information about the environment, compiler, and code being compiled, for exemple:
- **__ FILE__:** It expands to the name of the current source code file as a string.
- **__ LINE__:** It expands to the current line number within the source code file as an integer.
- **__ DATE__:** This macro expands to a string that represents the date the source code was compiled. The format is typically "Mmm dd yyyy."
- **__ TIME__:** It expands to a string that represents the time the source code was compiled. The format is typically "hh:mm:ss."

### Object-like Macros
An object-like macro is a simple identifier which will be replaced by a code fragment.
```
#define BUFFER_SIZE 1024
 foo = (char *) malloc (BUFFER_SIZE);
// After preprocessor
 foo = (char *) malloc (1024);
```
### Function-like Macros
Macros whose use looks like a function and can take arguments.
```
#define min(X, Y)  ((X) < (Y) ? (X) : (Y))
```
### Conditional Compilation Directives
- **#define & #undef:** Define and undefine symbols that can be used in conditional compilation.
- **#ifdef & #ifndef & #endif:** Checks if a symbol exists or doesn't exist, respectively.
****The block must be terminated with a closing #endif***
- **#if & #elif & #else & #endif:**  Allow you to evaluate expressions and include code based on the result.
****The block must be terminated with a closing #endif***
- **#error "Error details":** Prints error essage on stderr and kill the comilation
```
// Tactic can be used for defining specific constants, such as NULL
#ifndef NULL
#define NULL (void *)0
#endif // #ifndef NULL
```
###  C - The one definition rule / include guards
 **include guard:** is a specific technique used to prevent the issue of a header file being included more than once when using the #include directive in programming.
When a file has indirectly included two copies of the text in the header file, it causes a compilation error, since the the all definations in the header file will be defined twice, this would be called a violation of the one definition rule.
 This will fix the problem:
 ```
#ifndef GRANDPARENT_H
#define GRANDPARENT_H

struct foo {
    int member;
};

#endif /* GRANDPARENT_H */
```
 *Know we can include the the grand_parent.h file to our code without worring about violating the one difinition rule
