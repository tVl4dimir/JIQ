#include "queues.h"

queues::queues()
{
    m_count = 0;
    m_size = 10;
    m_queue = new int[m_size];
    m_start = 0;
    m_end = 0;
    for (int i = 0; i < 10; i++)
        m_queue[i] = -1;
}

queues::~queues()
{
    delete[] m_queue;
}

int queues::checkQueue()
{
    if (m_count == m_size)
        return 0;
    else
        return 1;
}

void queues::pushQueue(int x)
{
    m_queue[m_start] = x;
    if (m_start == 9)
        m_start = 0;
    else
        m_start++;
    m_count++;
}

int queues::popQueue()
{
    m_count--;
    return m_queue[m_start--];
}

int queues::getQueue(int x)
{
    return m_queue[x];
}
