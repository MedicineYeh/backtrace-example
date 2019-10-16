#include <stdlib.h>
#include <stdio.h>
#include "backtrace.h"

void foo() {
    printf("Hello World\n");
    print_stacktrace();
}

int main(int argc, char *argv[])
{
    foo();
    return 0;
}
