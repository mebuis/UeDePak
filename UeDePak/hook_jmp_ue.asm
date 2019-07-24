; 设置跳板

.DATA
EXTERN JmpFunc:dq;
EXTERN OrgDencryptCode:dq;

.CODE
Fix_Jump_4_21 PROC

; hook点位于 AES解密函数头

push rax
push rbx
push rcx
push rdx
push rsi
push rdi
push rbp
push rsp
push r8
push r9
push r10
push r11
push r12
push r13
push r14
push r15
; 这个大小满足函数内部使用即可
sub rsp,50
mov rcx, rdx
call JmpFunc
add rsp,50
pop r15
pop r14
pop r13
pop r12
pop r11
pop r10
pop r9
pop r8
pop rsp
pop rbp
pop rdi
pop rsi
pop rdx
pop rcx
pop rbx
pop rax

jmp  OrgDencryptCode

Fix_Jump_4_21 ENDP

END