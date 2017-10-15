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
1. ```auto```: Variables belonging to Auto are local to that block and are destroyed when the block has finished it's execution. All variables declared by default belongs to Auto storage class. It is declared by using the keyword Auto
1. ```extern```: When extern specifier is used with a variable declaration then no storage is allocated to that variable and it is assumed that the variable has already been defined elsewhere in the program.
1. ```static```: Static variables are not visible outside its function and they are not destroyed once the funtion or block has finished its execution.
1. ```register```: The variables declared with register specifier are allocated memory in the CPU register.

### 6.I have doubt - can you tell me when I should use while() loop and do while() loop ? I really do not under stand the difference betweeb these two, can you explain to me ?
```while()```: A while loop is used when a given set of instruction are to be executed over and over until the condition is set false.

```do while()```: A do while loop is similar to that of a while loop except that the given set of instructions are executed atleast once before the conditions are checked.
		
### 7.Recently while going through a C program I saw two functions malloc() & calloc() can you tell me what are they used for ?
```malloc()``` function is used to allocate a block of memory to the variable from the heap and returns a void pointer to the begining of the block.malloc doesn't initializes the allocated memory.

```calloc()``` allocates a block of memory and initializes the allocated memory to zero.

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
A switch-case statement is used to execute different parts of the code based on the value of the expression.

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

### 1.Do we really need a break statement in defualt condition of a switch() - case: statement
The ```break``` statement for the ```default``` condition is technically not needed.

### 2.For doing a file operation we need to open the file. What are the checks and things to be done while handling a file ?
When using command line arguments for specifying the file name, we need to check if the file name is included in the command line.

We have to check if the pointer to the file returns a ```NULL```

Once the operations on the file have been done, we need to close the file using ```fclose(pointer)```

### 3.What is the function call (or API) to open a file. Can you explain all the parameters that this API takes and list all possible variations of the parameters of this function.
The function call for opening a file is ```FILE *fopen(const char *filename, const char *mode)```
Filename is the name of the file that has to be opened.
Mode is the type of operation that is performed on the file.

### 4.Have you heard of a term called enumuration ?
### 5.In fprintf() which prints a string to a file, what happen if the first parameter is replaced with stdout ?
### 6.Have you heard of word recursion, what is it used ? Can you write a small program which uses recursion ?
### 7.Can you help to understand what are bit wise operators ?
### 8.While talking to a friend I heard of a term called variable parameters in C what exactly it is can you explain to me ?
### 9.Can you explain to me with an example how to use command line program with an example ?
### 10.I wrote a big program, but the entry point main() is empty is there any thing wrong with it ?
### 11.I have heard of a term called structures in C - what is its relation to structured programming
### 12.In a C function while declaring variables, I had mentioned a keyword static will this make any difference ? if so what it is ?
### 13.I am writing a C program to accuratly calculate the path of a aeroplane flying in the sky, with help of radar signals. What in the data type I need to use to get accurate value ?
### 14.Arrays are easy to use,still we go with Linked list what is the reason for this ?
### 15.In C function there are two terms, actual parameters and formal parameters. What are they ?
