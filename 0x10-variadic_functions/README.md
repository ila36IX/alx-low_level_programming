# Variadic Functions in C
![](https://media.tenor.com/VqoQZNqYdkQAAAAC/more-i-want-more.gif)
Variadic functions in C allow you to create functions that can accept a variable number of arguments.

## Calling Variadic Functions
Just put the arguments (required arguments, followed by optional ones) inside parentheses, separated by commas.

## Using stdarg.h
### Argument Access Macros
- **"va_list"**: A data type used to hold the variable arguments.
- **"va_start"**: Initializes the va_list to point to the first variable argument.
- **"va_arg"**: Retrieves the next variable argument of a specified data type.
- **"va_end"**: Ends the use of va_list declared variable (required).

### How Many Arguments Were Supplied
Variadic functions do not inherently know how many arguments were supplied.
Here are a couple of common methods to determine the number of arguments supplied to a variadic function:
- **Passing the Number of Arguments:** You can modify your variadic function to accept the number of arguments as the first argument. 
- **Using a Sentinel Value or Format String:** You can use a sentinel value (like -1) or a special format string to indicate the end of arguments. 
