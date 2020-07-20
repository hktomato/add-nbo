#include "add-nbo.h"

int main(int argc, char *argv[])
{
    /*Usage*/
    if (argc!=3) {
        printf("Usage: add_nbo <file1> <file2>\n");
    }

    uint32_t num1;
    uint32_t num2;

    num1 = add_nbo(argv[1]);
    num2 = add_nbo(argv[2]);

    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n",num1,num1, num2,num2, num1+num2, num1+num2);

    return 0;
}
