#include <stdio.h>
#include "calculate.h"
#include "add.h"
#include "sub.h"

// calculate result of an operation between two numbers
int calculate( int a, int b, char op ) {
    switch( op ) {

        // add two numbers
        case '+': {
            return add( a, b );
        }

        // subtract two numbers
        case '-': {
            return sub( a, b );
        }
        
        // return `0` by default
        default: {
            return 0;
        }
    }
}