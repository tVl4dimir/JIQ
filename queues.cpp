#include "queues.h"

queues::queues()
{
    m_size = 10;
    m_queue = new int[m_size];
}

int queues::checkQueue()
{
    if (m_count == m_size)
        return 1;
    else
        return 0;
}

void queues::pushQueue()
{
    m_count++;
}

int queues::popQueue()
{
    m_count--;
}
