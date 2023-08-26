extern printf
section .data
	msg: db "Hello, Holberton", 10, 0
	fmt: db "%s", 0

section .text
	global main
main:
	push rbp
	mov rdi,fmt
	mov rsi,msg
	mov rax,0
	call printf
	pop rbp
	mov rax,0
	ret
