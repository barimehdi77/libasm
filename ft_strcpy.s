global _ft_strcpy

section .text

_ft_strcpy:
			push	rbp					; push rbp to The stack
			mov rax, 0					; clean rax
			mov rbp, -1					; move -1 to rbp

_loop:
			inc rbp						; add 1 to rbp
			mov dl, BYTE[rsi + rbp]		; move the current char to dl
			mov BYTE[rdi + rbp], dl		; move dl to the rdi
			cmp dl, byte 0				; compare the char in dl with '\0' 
			je _exit					; if dl == '\0'  jump to _exit
			jmp _loop					; else jump fo loop

_exit:
			pop	rbp						; get the old value of rbp from the stack
			mov rax, rdi				; move rdi (the coped string) to rax
			ret							; return
