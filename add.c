#include<stdio.h>

// Functions
int add( int a, int b ) {
    return a+b;
}

// Main Program
int main(void){

    //Initialize Variables
    int a=1, b=2, c;

    //Perform Addition
    c = add(a,b);

    //Print Results
    printf( "a + b = %i\n", c );
    
}