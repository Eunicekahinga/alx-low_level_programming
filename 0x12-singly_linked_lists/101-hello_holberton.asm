section .data
	hello_format db "Hello, Holberton",0
	n1 db 10,0

extern printf

section .text
	global main

main:
	push rbp
	mov rbp, rsp

	mov rdi, hello_format
	mov rax, 0
	call printf

	mov rdi, n1
	mov rax, 0
	call printf

	xor eax, eax

	mov rsp, rbp
	pop rbp
	ret

