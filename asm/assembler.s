.intel_syntax noprefix
.section .rdata
message:
    .asciz "Hello to 304 from Yaroslav Bezmaternykh, number 4, group M3O-103BV-26!"

.text
.globl main
.extern puts
main:
    sub rsp, 40
    lea rcx, [rip + message]
    call puts
    xor eax, eax
    add rsp, 40
    ret
