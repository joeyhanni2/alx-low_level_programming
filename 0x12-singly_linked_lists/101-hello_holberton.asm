section .data
hello_holberton db "Hello, Holberton", 0
format db "%s", 10, 0

section .text
extern printf
global _start

main:
mov rdi,format
mov rsi,'msg'
call printf
push rbp
mov rax,0

mov rax,0
pop rbp
ret 0
