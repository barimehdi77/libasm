global _ft_strcmp


section .text


_ft_strcmp:								; rdi = s1, rsi = s2
			push rbp					; push rbp to the Stack
			mov rax, 0					; clean rax
			xor rdx, rdx				; clean rdx
			mov rbp, -1					; set rbp to -1

_loop:
			inc rbp						; add 1 to rbp
			mov dl, BYTE[rdi + rbp]		; move the current byte of rdi to dl
			mov al, BYTE[rsi + rbp]		; move the current byte of rsi to al
			cmp al, byte 0					; check the '\0' in rsi
			je _exit					; if CF change then jump to _exit
			cmp al, dl					; check if al == dl
			je _loop					; if al != dl then jump to _exit
			
_exit:
			pop rbp						; get the old value of rbp
			sub dl, al					; compare between al and dh
			movsx eax, dl				; move the value of al == al - dl
			ret							; return 
