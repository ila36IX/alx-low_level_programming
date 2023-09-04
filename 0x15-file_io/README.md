# C - File I/O
## File Descriptors (FD)
**It is an integer number that uniquely represents an opened file of the process.**
- When you open a file, the operating system creates an **entry** (information about file) to represent that file.
- These **entries** are represented by *integers* like (100, 101, 102....): This entry number is the **File Descriptor**.

**To paint a clearer picture..**
- In Linux/Unix, everything is a file (Regular file, Directories, and even Devices are files) 
- Every File has an associated number called **File Descriptor (FD)**.
  - Your screen also has a File Descriptor.
  - When a program is executed the output is sent to File Descriptor of the *screen*
  - Then you'll see program output on your *monitor*. 
  - Or... If the output is sent to File Descriptor of the printer
  - The program output would have been printed.

In fact, in linux, you can see the open fds with:
```
$ ls /proc/$$/fd      // Output: 0 1 2 10 12 255
                      // You can geuss what 0, 1, 2 are for 😎
```
## Standard File Descriptors
Whenever you execute a program/command at the terminal, 3 files are always open and a file descripter is associated with each of these files.
File | POSIX | File Descriptor
:--: | :--: | :--: 
standard input | `stdin` | 0
standard output | `stdour` | 1
standard error | `stderr` | 2
## Input/Output System Calls
### 1. create()
The `create()` function is used to create a new empty file in C.
```
#inlclude <unistd.h>    // (Unix standard header) The permission and the name 
#include <fcntl.h>      // (File Control) For the flags
```

Syntax of create() in C
```
int create(char *filename, mode_t mode);
```
- **Parameter**
`filename`: name of the file which you want to create
`mode`: indicates permissions of the new file.
- **Return Value**
  - return first unused file descriptor
  - return `-1` when an error

How C create() works in OS
1. Create a new empty file on the disk.
2. Create file table entry.
3. Set the first unused file descriptor to point to the file table entry.
4. Return file descriptor used, -1 upon failure.

### 2. open()
The `open()` function in C is used to open the file for reading, writing, or both. It is also capable of creating the file if it does not exist.

Syntax of open() in C
```
int open (const char* Path, int flags);
```
- **Parameters**
`Path`: Path to the file which we want to open. 
`flags`: It is used to specify how you want to open the file. We can use the following flags.
- **Return value**
  - return first unused file descriptor
  - return `-1` when an error

Some flags:
Flags | Description
-- | --
`O_RDONLY` | Opens the file in read-only mode.
`O_WRONLY` | Opens the file in write-only mode.
`O_RDWR` | Opens the file in read and write mode.
`O_CREAT` | Create a file if it doesn’t exist.
`O_EXCL` | Prevent creation if it already exists.
`O_ APPEND` | Opens the file and places the cursor at the end of the contents.
`O_ASYNC` | Enable input and output control by signal.
`O_CLOEXEC` | Enable close-on-exec mode on the open file.
`O_NONBLOCK` | Disables blocking of the file opened.
`O_TMPFILE` | Create an unnamed temporary file at the specified path.

Example of C `open()`

```
#include <fcntl.h>   // File control
#include <stdio.h>   // Standrad I/O
#include <unistd.h>  // Unix standard header
  
int main()
{
    // if file does not have in directory
    // then file foo.txt is created.
    int fd = open("foo.txt", O_RDONLY | O_CREAT);

    printf("fd = %d\n", fd);

    if (fd == -1) {
        // If program failed
        printf("Error");
    }
    return 0;
}
```
### 3. close()
The `close()` function in C tells the operating system that you are done with a file descriptor and closes the file pointed by the file descriptor.
Syntax of close() in C
```
int close(int fd);
```
- **Parameter**
`fd`: File descriptor of the file that you want to close.
- **Return Value**
  - `0` on success.
  - `-1` on error.

Example of C `close()`
 ```
#include<stdio.h> 
#include<fcntl.h> 
int main() 
{ 
    // assume that foo.txt is already created 
    int fd1 = open("foo.txt", O_RDONLY, 0); 
    close(fd1); 
    exit(0); 
} 
```
### 4. read()
The `read()` function reads the specified amount of bytes `cnt` of input into the memory area indicated by `buf`. 
Syntax of `read()` in C
```
size_t read (int fd, void* buf, size_t cnt);
```
- **Parameters**
`fd`: file descriptor of the file from which data is to be read.
`buf`: buffer to read data from
`cnt`: length of the buffer
- **Return Value**
  - return Number of bytes read on success
  - return 0 on reaching the end of file
  - return -1 on error
  - return -1 on signal interrupt

Example of `read()` in C
```
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
  
int main()
{
    int fd, sz;
    char* c = (char*)calloc(100, sizeof(char));
  
    fd = open("foo.txt", O_RDONLY);
  
    sz = read(fd, c, 10);
    c[sz] = '\0';
    printf("Those bytes are as follows: % s\n", c);
  
    return 0;
}
```
### 5. write()
Writes `cnt` bytes from `buf` to the file or socket associated with fd. cnt should not be greater than `INT_MAX`.

Syntax of `write()` in C
```
size_t write (int fd, void* buf, size_t cnt); 
```
- **Parameters**
`fd`: file descriptor
`buf`: buffer to write data to.
`cnt`: length of the buffer.
- **Return Value**
  - returns the number of bytes written on success.
  - return 0 on reaching the End of File.
  - return -1 on error.
  - return -1 on signal interrupts.

Example of `write()` in C
``` 
#include<stdio.h> 
#include <fcntl.h> 
main() 
{ 
int sz; 
  
int fd = open("foo.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); 
if (fd < 0) 
{ 
    perror("r1"); 
    exit(1); 
} 
  
sz = write(fd, "hello geeks\n", strlen("hello geeks\n")); 

close(fd); 
} 
```

