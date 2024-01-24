# Snake game using SDL

![](https://i.imgur.com/Fa6DZx1.png)

## The beauty of SDL

SDL simplifies the process of building cross-platform applications,  It abstracts the use of OS resources by providing a low level access to audio, keyboard, mouse ... as the application will work perfectly on Windows, MacOS and of course Linux/GNU.

The ability to write a game/app on Lunix and then go on to compile it on Windows or MacOS with no changes in the code is extremely powerful and perfect for developers who want to target as many platforms as possible.

SDL has a large user base and is being actively updated and maintained. Documentation for SDL 2.0 is up-to-date and constantly maintained.

You can visit the [SDL](https://libsdl.org/) website, where the documentation is very organized and easy to use. Additionally, there is a high probability that most of the challenges you will face in your journey with this library have been faced by someone on the internet. Therefore, the problem-solving space is limited to the gap between finding an issue and searching for a solution on Google.
## Why linked list

Building a simple snake game using Native C language and the SDL library, the snake is a nice way to  get use on **data structure** especially doubly linked list, as the snake body is actually a double linked list,  it's perfect because  of the growing nature of the snake, it's length is getting changed over time, by inserting a new node (snake piece) every time the snake  eats a piece of food which randomly got new position in the screen.

Also the doubly linked list is very helpful in the snake movement logic, as the movement of every node is based on its previous node using this simple algorithm:
1. Move the head
2. Make a recursion movement of other segments by making each segment to take the saved position of its *previous* node before it moved.

You can have a look to the functions inside the file `snake_body.c`, you will find the algorithms to make a linked list, and of course functions that will free up the allocated  memory to avoid any possible leaks.

## Makefile

The `makefile` file in this directory highlights the impotence of the *makefile* software, It is a helpful time-saver, encapsulating compilation and memory leak checks in simple commands:

```shell
make
make leaks
```
