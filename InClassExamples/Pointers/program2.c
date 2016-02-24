
#include <stdio.h>


int addOne(int input)
{
    return input + 1;
}

void addOneP(int * input){
    *input = *input + 1;
}

int main(void)
{
    int theVar = 12;

    int result = addOne(theVar);
    printf(" theVar = %d, result = %d \n", theVar, result);

    int theVar2 = 7;
    printf("theVar2 before = %d, address = 0x%x\n", theVar2, &theVar2);
    addOneP( &theVar2 );
    printf("theVar2 after = %d\n", theVar2);

    return 0;
}

