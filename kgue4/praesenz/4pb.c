#include <stdio.h>

// creates two variables in static storage, really probably only one because the unused a will get optimised away by compiler
int i, a; // declaration of global variables (available to the whole program)

// doesn't affect the stack
void f1(){
    i = i + 10;
    printf("i in f1=%d\n", i); // 0 + 10 = 10
}

// adds a new local variable to the stack, which is removed from the stack after completion of the function
void f2() {
    int i = 2; // new local declaration that shadows the global i and is only visible in the scope of this function
    i = i + 10;
    printf("i in f2=%d\n", i); // 2 + 10 = 12
    // forgetting the local declaration, the local i is never to be seen again
}

// call by value affects the stack as the value passed as a parameter is copied to a newly created local variable
void f3(int i) {
    i = i + 30;
    printf("i in f3=%d\n", i); // 10 + 30 = 40
}

// doesn't copy any values but still creates a new local variable for the pointer i
void f4(int* i) {
    *i = *i +10;
    printf("i in f4 zeigt auf den Wert %d\n", *i); // global 10 + 10 points to global 20
}

int main() {
    // creates another local variable a on the stack that is never used (probably optimised away too)
    int a=5;
    printf("i in main=%d\n", i); // 0
    f1(); // i = 0*10
    printf("i in main=%d\n", i); // 10
    f2(); // does its own shit with the local i
    printf("i in main=%d\n", i); // still 10
    f3(i); // does its own shit with i called by value
    printf("i in main=%d\n", i); // still 10 (call by value!)
    f4(&i); // call by reference - changes the global i
    printf("i in main=%d\n", i); // got changed in f4, so it's 20
    return 0;
}