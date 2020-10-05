	.file	"fib-iterative.c"
	.text
	.globl	fib_while
	.align	16, 0x90
	.type	fib_while,@function
fib_while:                              # @fib_while
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
	movl	%edi, -4(%rbp)
	movl	$0, -8(%rbp)
	movl	$1, -12(%rbp)
.LBB0_1:                                # =>This Inner Loop Header: Depth=1
	cmpl	$1, -4(%rbp)
	jle	.LBB0_3
# BB#2:                                 #   in Loop: Header=BB0_1 Depth=1
	movl	-8(%rbp), %eax
	addl	-12(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -4(%rbp)
	jmp	.LBB0_1
.LBB0_3:
	movl	-12(%rbp), %eax
	popq	%rbp
	ret
.Ltmp5:
	.size	fib_while, .Ltmp5-fib_while
	.cfi_endproc

	.globl	fib_for
	.align	16, 0x90
	.type	fib_for,@function
fib_for:                                # @fib_for
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
	movl	%edi, -4(%rbp)
	movl	$0, -8(%rbp)
	movl	$1, -12(%rbp)
.LBB1_1:                                # =>This Inner Loop Header: Depth=1
	cmpl	$1, -4(%rbp)
	jle	.LBB1_4
# BB#2:                                 #   in Loop: Header=BB1_1 Depth=1
	movl	-8(%rbp), %eax
	addl	-12(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, -12(%rbp)
# BB#3:                                 #   in Loop: Header=BB1_1 Depth=1
	movl	-4(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -4(%rbp)
	jmp	.LBB1_1
.LBB1_4:
	movl	-12(%rbp), %eax
	popq	%rbp
	ret
.Ltmp11:
	.size	fib_for, .Ltmp11-fib_for
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
	callq	fib_for
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
