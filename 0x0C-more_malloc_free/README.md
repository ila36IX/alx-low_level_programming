# Memory allocation (malloc, free)
![](https://images.velog.io/images/stthunderl/post/cca32f2a-7dff-4370-8246-24230215f4e8/zz.jpeg)
## What is malloc?
`malloc` is a function that allows you to allocate memory dynamically from the **heap**. This means that you can request a specific amount of memory, and the malloc function will find a free space in the heap that is large enough and return a pointer to it.
## How to use malloc?
The syntax for `malloc` is as follows:
```
void *malloc(size_t size);
```
*`size` parameter is the amount of memory that you want to allocate, in bytes. The malloc function returns a pointer to the allocated memory, or `NULL` if the memory could not be allocated.

Here is an example of how to use `malloc`:
```
int main() {
  // Allocate 100 bytes of memory.
  int *ptr = malloc(100 * sizeof(int));

  // If the memory was allocated successfully, then print the pointer.
  if (ptr != NULL) {
    printf("The pointer is %p\n", ptr);
  }

  return 0;
}
```
## What happens when malloc fails?
If the `malloc` function fails, it will return `NULL`. This means that the memory could not be allocated, and you should take appropriate action. For example, you could display an error message or exit the program using `exit` function.

## When should you use malloc?
You should use `malloc` when you need to allocate memory dynamically. This is useful when you don't know how much memory you need ahead of time, or when you need to allocate memory that is larger than the stack can handle.

- Always check the return value of `malloc`. If it returns `NULL`, then the memory could not be allocated and you should take appropriate action.
- Free the memory that you allocate with `malloc` when you are finished with it. This will prevent memory leaks.
- Use a memory debugging tool to help you find and fix memory errors, you can use `valgrind` it will help a lot.

## What is free?
`free` is a function that allows you to deallocate memory that was previously allocated with the `malloc` function. This means that you can return the memory back to the heap so that it can be used by other programs.
The syntax for `free` is as follows:
```
void free(void *ptr);
```
The `ptr` parameter is the pointer to the memory that you want to deallocate.
