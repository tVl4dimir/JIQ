#include "dispatcher.h"

int dispatcher::m_sID { 0 };

dispatcher::dispatcher()
    :  m_nID(m_sID++), m_Iq()
{

}

int dispatcher::getID()
{
    return m_nID;
}

void dispatcher::addQueue(int x)
{
    m_Iq.push(x);
}

int dispatcher::getQueue()
{
    return m_Iq.pop();
}

void dispatcher::dispatch(std::queue <int> Pq)
{
    if (dispatcher::m_Iq.empty())
    {// Dispatch job to a random processor queue
        std::cout << "Lol";
    }
    else
    {// q.dequeue and dispatch job to said q.dequeue
        std::cout << "Lel";
    }
}
