global _ft_strcpy

section .text

_ft_strcpy:
			push	rbp
			mov rax, 0
			mov rbp, -1

_loop:
			inc rbp
			mov dl, BYTE[rsi + rbp]
			mov BYTE[rdi + rbp], dl
			cmp dl, byte 0
			je _exit
			jmp _loop

_exit:
			pop	rbp
			mov rax, rdi
			ret
