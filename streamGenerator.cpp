#include "streamGenerator.h"

void setRan()
{
    srand(time(NULL));
}

int stream()
{
    return rand() % 10;
}
