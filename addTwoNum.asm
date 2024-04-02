.data
  arr: .word 1, 2, 3123
  oddPrompt: .asciiz "The number is odd!"
  evenPrompt: .asciiz "The number is even!"
.text
main:
	
	# print First Number:
	la $a0 prompt1
	li $v0 4
	syscall 
	
	# read user input
	li $v0 5
	syscall
	
	# $v0 holds first number
	move $s0 $v0 # $s0 holds first number
	
	# prtint Second Number:
	la $a0 prompt2
	li $v0 4
	syscall
	
	# read second number
	li $v0 5
	syscall
	
	# $v0 has second number
	move $s1 $v0
	
	# print the result
	add $a0 $s0 $s1
	li $v0 1
	syscall
	
	# return 
	li $v0 10 #exit program
	li $a0 0 # exit code 0
	syscall # execute system call
	
