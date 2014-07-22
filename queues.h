#ifndef QUEUES_H_
#define QUEUES_H_

class queues
{
public:
    queues();
    ~queues();
    int *m_queue;
    int m_size;
    int m_count;

    int checkQueue();
    void pushQueue();
    int popQueue();
};

#endif // QUEUES_H_
