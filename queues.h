#ifndef QUEUES_H_
#define QUEUES_H_

class queues
{
public:
    queues();
    ~queues();
    int *m_queue;
    int m_size, m_count, m_start, m_end;

    int checkQueue();
    void pushQueue(int x);
    int popQueue();
    int getQueue(int x);
};

#endif // QUEUES_H_
