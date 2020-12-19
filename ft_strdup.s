global _ft_strdup
extern _malloc
extern _ft_strlen
extern _ft_strcpy

section .text

_ft_strdup:
			mov rax, 0			; clean rax
			push rdi			; save rdi in the stack
			call _ft_strlen		; call _ft_strlen
			inc rax				; increment rax for '\0' 
			mov rdi, rax		; move the rax value to rdi
			call _malloc		; call malloc
			pop rdi				; get the saved value of rdi from the stack
			mov rsi, rdi		; move rdi to rsi
			mov rdi, rax		; move rax to rdi
			call _ft_strcpy		; call _ft_strcpy
			ret					; return
