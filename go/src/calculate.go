package main

// calculate result of an operation between two numbers
func calculate( a int, b int, op rune ) int {
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