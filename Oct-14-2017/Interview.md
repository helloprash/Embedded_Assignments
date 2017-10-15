# Part one

### 1.When we talk about variables there is a term called "Scope of a Variable" what is it can you explain to me ?
Scope of a variable is the region or block of program in which the variable is active. The two types of variables are:
1. Local Variables: These variables are active only in its native function or block and are destroyed once the function or block finishes it's execution.
1. Global Variables: These variables are active during the execution of the entire program.

### 2.We have to terms related to variables, Declaration and Defintion what are they, explain with an example
Declaration of a vairiable is telling the compiler, to what data type the variable belongs to.
Definition means allocation of memory to the declared variable.

### 3.What is you mean by declaring an array ? How is array different from a normal variable declaration.
An array is a variable which occupies consecutive memory locations according to its data type, unlike a normal
variable which occupies only one memory location according to its given data type.

### 4.When an array is declared where is array created ?
When an array is declared, it is created in the Stack.

### 5.What are the different types of Storate Class specifiers in C ? - List all of them When and how they should be used
The types of Storage class specifiers are
1. auto: Variables belonging to Auto are local to that block and are destroyed when the block has finished it's execution. All variables declared by default belongs to Auto storage class. It is declared by using the keyword Auto
1. extern: When extern specifier is used with a variable declaration then no storage is allocated to that variable and it is assumed that the variable has already been defined elsewhere in the program.
1. static: Static variables are not visible outside its function and they are not destroyed once the funtion or block has finished its execution.
1. register: The variables declared with register specifier are allocated memory in the CPU register.

### 6.I have doubt - can you tell me when I should use while() loop and do while() loop ? I really do not under stand the difference betweeb these two, can you explain to me ?
while() loop: A while loop is used when a given set of instruction are to be executed over and over until the condition is set false.

do while() loop: A do while loop is similar to that of a while loop except that the given set of instructions are executed atleast once before the conditions are checked.
		
### 7.Recently while going through a C program I saw two functions malloc() & calloc() can you tell me what are they used for ?
malloc() function is used to allocate a block of memory to the variable from the heap and returns a void pointer to the begining of the block.malloc doesn't initializes the allocated memory.

calloc() allocates a block of memory and initializes the allocated memory to zero.

### 8.Can you explain to me with the help of a small program how malloc() is used ?
```
#include<stdio.h>
#include<malloc.h>

main()
{
	int *temp;
	temp=(int*)malloc(sizeof(int));
	.
	.
	.
	.
	.
	free(temp);

}
```

### 9.I keep hearing the term Pointers in C, what is it all about ? Have you used it any time ?
A pointer is a variable which contains the address of another variable. It is declared by using the symbol *

### 10.I had heard of a term called dangling pointer Can you help me to understand what exactly is a dangling pointer
A pointer pointing to a memory which has been deleted or freed is called Dangling pointer.

### 11.What is called a void pointer and what are the uses of a void pointer
A void pointer is a pointer that points to some memory location that doesn't have a specific type and it cannot be dereferenced.
A void pointer can be dereferenced only by typecasting it. Pointer arithmetic is not possible on void pointers.

### 12.Have you heard of the term Modular programming is it different from structure programming if so how ?
Modular programming and structured programming are the same. 
A program is said to be modular if the program is divided into seperate modules which performs a particular task.

###  13.Let says we have switch()-case statement in C - Can you tell me what is the use of a switch case statement ?
A switch case statement is used to execute different parts of the code based on the value of the expression.

### 14.Can you Look at the following code ............ will the compiler gives an error ?
```
main()
     {
        int i ;
        
        switch(i)
        {
           case 1: {
                      break ;
                   }
           case 2: {
                      break ;
                   }
           default : {
                        break ;
                     }
           case 3:   {
                        break ;
                     }
           case 4:   {
                        break ;
                     }
                    
        }
     }
```
The compiler does not give any errors.
