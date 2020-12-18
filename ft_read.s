global _ft_read


section .text
extern	___error

_ft_read:						; fd = rdi , buf = rsi, size = rdx
		mov rax, 0				; clean the rax
		mov rax, 0x2000003		; call read function 
		syscall					; syscall to call the read function and set rax with it's return value
		jc	error				; if CF is change means there's an error need to be handle
		ret						; if no error happend return the number of the readed char

error :
	push	rax					; save the return value of the read function
	call	___error			; call ___error to set the errno
	pop		rcx					; get the return value from the stack and put it in rcx
	mov		[rax], rcx			; move the value of rcx to rax to set the value of errno
	mov		rax, -1				; move -1 to the rax
	ret							; return
