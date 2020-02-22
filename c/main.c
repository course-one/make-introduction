#include <stdio.h>
#include "calculate.h"

int main() {

    // add 1 and 3
    int result = calculate( 1, 2, '+' );

    // print result
    printf( "calculate( 1, 2 ) => %d\n", result );

    return 0; // exit status code: 0
}