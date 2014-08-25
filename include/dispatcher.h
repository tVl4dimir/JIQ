#ifndef DISPATCHER_H_
#define DISPATHCER_H_

#include <queue>
#include <atomic>
#include <iostream>


class dispatcher
{
private:
    static int m_sID;
    int m_nID;
    std::queue <int> m_Iq;
public:
    dispatcher();
    int getID();
    void addQueue(int x);
    int getQueue();
    void dispatch(std::queue <int> Pq);
};

#endif // DISPATCHER_H_
