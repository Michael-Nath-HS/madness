// Michael Nath
// Period 10 - Systems Level Programming
// 10/07/2020
#include <stdio.h>
int main()
{
    // step 1
    char myChar = 'h';
    int myInt = 0;
    long myLong = 2131243434;

    // step 2
    printf("myChar Hex: %p\n", &myChar);
    printf("myChar Dec: %lu\n", &myChar);
    printf("myInt Hex: %p\n", &myInt);
    printf("myInt Dec: %lu\n", &myInt);
    printf("myLong Hex: %p\n", &myLong);
    printf("myLong Dec: %lu\n\n", &myLong);
    // step 3
    char *cp = &myChar;
    int *ip = &myInt;
    long *lp = &myLong;

    // step 4
    printf("*cp: %p\n", cp);
    printf("*ip: %p\n", ip);
    printf("*lp: %p\n\n", lp);

    // step 5
    *cp = 'e';
    *ip = 16;
    *lp = 1234532123;
    printf("myChar: %c\n", myChar);
    printf("myInt: %d\n", myInt);
    printf("myLong: %ld\n\n", myLong);

    // step 6
    unsigned int pos = 30000000000;
    int *ipos = &pos;
    char *cpos = &pos;

    // step 7
    printf("ipos: %p\n", ipos);
    printf("ipos points to: %d\n", *ipos);
    printf("cpos: %p\n", cpos);
    printf("cpos points to: %c\n\n", *cpos);

    // step 8
    printf("pos in hex: %x\n", pos);
    printf("pos in dec: %u\n\n", pos);

    // step 9
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("pos dec %d %hhu\n", i + 1, *(cpos + i));
    }
    for (i = 0; i < 4; i++)
    {
        printf("pos hex %d %hhx\n", i + 1, *(cpos + i));
    }
    printf("\n");

    // step 10
    for (i = 0; i < 4; i++)
    {
        *(cpos + i) += 1;
        printf("pos in hex: %x\n", pos);
        printf("pos in dec: %u\n\n", pos);
    }
    for (i = 0; i < 4; i++)
    {
        printf("pos dec %d %hhu\n", i + 1, *(cpos + i));
    }
    for (i = 0; i < 4; i++)
    {
        printf("pos hex %d %hhx\n", i + 1, *(cpos + i));
    }
    printf("\n");

    //step 11
    for (i = 0; i < 4; i++)
    {
        *(cpos + i) += 16;
        printf("pos in hex: %x\n", pos);
        printf("pos in dec: %u\n\n", pos);
    }
    for (i = 0; i < 4; i++)
    {
        printf("pos dec %d %hhu\n", i + 1, *(cpos + i));
    }
    for (i = 0; i < 4; i++)
    {
        printf("pos hex %d %hhx\n", i + 1, *(cpos + i));
    }
    printf("\n");
}
