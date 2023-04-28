global main
extern printf

msg db 'Hello, Holberton',0Ah,0

main:
    push rbp
    mov rbp, rsp

    mov edi, msg
    xor eax, eax
    call printf

    mov edi, 0Ah
    xor eax, eax
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
