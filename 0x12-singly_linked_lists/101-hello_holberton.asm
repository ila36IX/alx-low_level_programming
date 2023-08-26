section .data
	hello db 'Hello, Holberton!', 10, 0 ;

section .text
	global main

main:
    mov rax, 1
    mov rdi, 1
    mov rsi, hello
    mov rdx, 19

    syscall
    mov rax, 60
    xor rdi, rdi
    syscall
