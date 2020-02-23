#include <stdio.h>
#include "calculate.h"

int main() {

    // add 1 and 2
    int result = calculate( 1, 2, '+' );

    // print result
    printf( "c:calculate( 1, 2. '+' ) => %d\n", result );

    return 0; // exit status code: 0
}