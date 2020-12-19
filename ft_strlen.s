global _ft_strlen


section .text

_ft_strlen:
			mov rax, 0				; clean rax

_loop:
			cmp BYTE[rdi], 0		; comoare current byte to '\0'
			je 	_exit				; if the CF change jump to exit
			inc rdi					; add 1 to rdi
			inc rax					; add 1 to rax
			jmp _loop				; jump to _loop

_exit:
			ret						; return
