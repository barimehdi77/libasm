global _ft_read


section .text
extern	___error

_ft_read:					; fd = rdi , buf = rsi, size = rdx
		mov rax, 0
		mov rax, 0x2000003
		syscall					;rax = 9
		jc	error				;jump
		ret

error :
	push	rax
	call	___error
	pop		rcx
	mov		[rax], rcx
	mov		rax, -1
	ret
