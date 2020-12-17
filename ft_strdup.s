global _ft_strdup
extern _malloc
extern _ft_strlen
extern _ft_strcpy

section .text

_ft_strdup:
			mov rax, 0
			push rdi
			call _ft_strlen
			inc rax
			mov rdi, rax
			call _malloc
			pop rdi
			mov rsi, rdi
			mov rdi, rax
			call _ft_strcpy
			ret
