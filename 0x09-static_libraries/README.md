# Creating A Static "C" Library Using

1. Compile and assemble, but do not link
```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

```
2. Creating the archive
```
ar -rc libschool.a *.o
```

3. Indexing the archive 

```
ranlib libschool.a
```
4. Using the library
```
gcc main.c -L. -lschool -o alpha
```
> *How the archive name got changed
> - libname.a => -lname

4. If you want to show the archive

```
ar -t libschool.a
-- or
nm libmy.a 
```

