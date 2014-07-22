#include "main.h"

int main(int argc, char *argv[])
{
    setRan();
    for (int i = 0; i < 10; i++)
        printf("%d\n", stream());
    return 0;
}
