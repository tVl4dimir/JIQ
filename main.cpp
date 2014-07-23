#include "main.h"

int main(int argc, char *argv[])
{
    queues q1;
    queues q2;
    queues q3;

    int x;

    setRan();
    for (int i = 0; i < 100; i++)
    {
        x = rand() % 3;
        if (x == 0)
        {
            if (!q1.checkQueue())
                break;
            q1.pushQueue(stream());
        }
        else if (x == 1)
        {
            if (!q2.checkQueue())
                break;
            q2.pushQueue(stream());
        }
        else if (x == 2)
        {
            if (!q3.checkQueue())
                break;
            q3.pushQueue(stream());
        }
    }

    printf("Queue 1:\n");
    for (int j = 0; j < 10; j++)
    {
        printf("%d,",q1.getQueue(j));
    }
    printf("\n");
    printf("Queue 2:\n");
    for (int j = 0; j < 10; j++)
    {
        printf("%d,",q2.getQueue(j));
    }
    printf("\n");
    printf("Queue 3:\n");
    for (int j = 0; j < 10; j++)
    {
        printf("%d,",q3.getQueue(j));
    }
    printf("\n");

    return 0;
}
