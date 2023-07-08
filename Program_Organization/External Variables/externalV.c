/*
- variables that are declared outside the function body.
*/

/*
- To illustrate how external variables might be used, let’s look at a data structure
known as a stack.
A stack, like an array, can store
multiple data items of the same type. However, the operations on a stack are lim¬
ited: we can eitherpush an item onto the stack (add it to one end—the “stack top")
orpop it from the stack (remove it from the same end). Examining or modifying an
item that's not at the top of the stack is forbidden.
*/

/**
- One way to implement a stack in C is to store its items in an array, which we’ll
call contents.
- A separate integer variable named top marks the position of the
stack top.
- When the stack is empty, top has the value 0.
- To push an item on the
stack, we simply store the item in contents at the position indicated by top, then increment top.
- Popping an item requires decrementing top, then using it as
an index into contents to fetch the item that’s being popped.
*/

//The program
#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100 //length of the stack

/*External Variables*/
int contents[STACK_SIZE]; //array contents has 100 elements
int top = 0; //position of the top of the stack when the stack is empty

//function to make the stack empty. 
//No type-def & parameters
void make_empty(void)
{
    top = 0;
}

//checker to see whether empty or not
bool is_empty(void)
{
    return top == 0;
}

//checker to see whether the function is full
bool is_full(void)
{
    return top == STACK_SIZE;
}

//adding elements to the stack
//before adding elemets to the stack, the function push checks whether the array is full _Field_size_part
//if not full, it increments the array elements by 1, then checks whether the array is full, and repeats the process
//until the array becomes full and it produces a stackoverflow error.
//the stackoverflow error is an error that is caused when the program exceeds more than the memory space it was allocated 
void push(int i)
{
    if(is_full())
    {
        stack_overflow();
    }else{
        contents[top++] = i;
    }
}

//removing elements from the stack
void pop(void)
{
    if(is_empty())
    {
        stack_underflow();
    }else{
        return contents[--top];
    }
}

/*
                SUMMARY OF THE PROGRAM
- we are using the <stdbool> library to check for true or false statements in the program
- we have two external variables; contents & top
- we have a function to;
 - make the stack empty
 - check whether the stack is empty
 - check whether the stack is full, and if so return value of the stack size
 - push an element to the stack and return a stack_overflow error if full
 - remove elements from the stack
*/