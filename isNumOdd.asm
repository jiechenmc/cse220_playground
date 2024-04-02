.data
  arr: .word 1, 2, 3123
  prompt: .asciiz "Input a number: " 
  oddPrompt: .asciiz "The number is odd!\n"
  evenPrompt: .asciiz "The number is even!\n"
  .align 2 # this is important because those bytes from the strings above may break the 4 byte word alignment
.text
main:
	# reads user input
	# print if it's odd or even
	
	
	# prompt for user input
	la $a0 prompt
	li $v0 4
	syscall
	
	# read user input
	li $v0 5
	syscall
	
	# s0 holds user input
	move $s0 $v0
	
	# 4
	# 0100
	# 5
	# 0101
	andi $t0 $s0 1 # if $t0 is not 0, then this number is odd
	
	# if $t0 is 0
	# print_even
	beqz $t0 print_even
	
	# else
	# print_odd
	j print_odd
	
	
print_odd:
    	la $a0 oddPrompt
    	li $v0 4
    	syscall
	j return #IMPORTANT, otherwise execution will step into print_even
	
print_even:
	la $a0 evenPrompt
	li $v0 4
	syscall
	j return
	
return:
	li $v0 10 #exit program
	li $a0 0 # exit code 0
	syscall # execute system call
	
