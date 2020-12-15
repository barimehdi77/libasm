global _ft_read


section .text

_ft_read:					; fd = rdi , buf = rsi, size = rdx
		mov rax, 0
		mov rax, 0x2000003
		syscall
		ret
