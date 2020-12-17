global _ft_write

extern ___error

section .text


_ft_write:
		mov	rax, 0
		mov rax, 0x2000004
		syscall
		jc _error
		ret

_error:
		push rax
		call ___error
		pop rcx
		mov [rax], rcx
		mov	rax, -1
		ret
