	.file	"fib.c"
	.text
	.globl	_fib
	.align	16, 0x90
	.type	_fib,@function
_fib:                                   # @_fib
	.cfi_startproc
# BB#0:
	pushq	%rbp
.Ltmp2:
	.cfi_def_cfa_offset 16
.Ltmp3:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp4:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	%edi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	cmpl	$0, -8(%rbp)
	jne	.LBB0_2
# BB#1:
	movl	-16(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.LBB0_3
.LBB0_2:
	movl	-8(%rbp), %eax
	subl	$1, %eax
	movl	-12(%rbp), %ecx
	addl	-16(%rbp), %ecx
	movl	-12(%rbp), %edx
	movl	%eax, %edi
	movl	%ecx, %esi
	callq	_fib
	movl	%eax, -4(%rbp)
.LBB0_3:
	movl	-4(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	ret
.Ltmp5:
	.size	_fib, .Ltmp5-_fib
	.cfi_endproc

	.globl	fib
	.align	16, 0x90
	.type	fib,@function
fib:                                    # @fib
	.cfi_startproc
# BB#0:
	pushq	%rbp
.Ltmp8:
	.cfi_def_cfa_offset 16
.Ltmp9:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp10:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$1, %esi
	movl	$0, %edx
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %edi
	callq	_fib
	addq	$16, %rsp
	popq	%rbp
	ret
.Ltmp11:
	.size	fib, .Ltmp11-fib
	.cfi_endproc

	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# BB#0:
	pushq	%rbp
.Ltmp14:
	.cfi_def_cfa_offset 16
.Ltmp15:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp16:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$100, %edi
	callq	fib
	leaq	.L.str, %rdi
	movl	$100, %esi
	movl	%eax, %edx
	movb	$0, %al
	callq	printf
	movl	$0, %edx
	movl	%eax, -4(%rbp)          # 4-byte Spill
	movl	%edx, %eax
	addq	$16, %rsp
	popq	%rbp
	ret
.Ltmp17:
	.size	main, .Ltmp17-main
	.cfi_endproc

	.type	.L.str,@object          # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"fib(%d) = %d\n"
	.size	.L.str, 14


	.ident	"clang version 3.4.2 (tags/RELEASE_34/dot2-final)"
	.section	".note.GNU-stack","",@progbits
