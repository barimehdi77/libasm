global _ft_strlen


section .text

_ft_strlen:
			mov rax, 0

_loop:
			cmp BYTE[rdi], 0
			je 	_exit
			inc rdi
			inc rax
			jmp _loop

_exit:
			ret
