#include "main.h"

using namespace std;

static const int thread_disp_num = 5;
// static const int thread_queue_num = 20;

void streamDisp(vector<dispatcher> disps, int i);

int main()
{
    vector<dispatcher> disps(thread_disp_num);
    dispatcher d1;
    disps.push_back(d1);
    dispatcher d2;
    disps.push_back(d2);
    dispatcher d3;
    disps.push_back(d3);
    dispatcher d4;
    disps.push_back(d4);
    dispatcher d5;
    disps.push_back(d5);

    thread t[thread_disp_num];

    for (int i = 0; i < thread_disp_num; i++)
    {
        t[i] = thread(streamDisp, disps, i);
    }

    cout << disps[0].getQueue() << endl;
    cout << disps[1].getQueue() << endl;
    cout << disps[2].getQueue() << endl;
    cout << disps[3].getQueue() << endl;
    cout << disps[4].getQueue() << endl;

    for (int i = 0; i < thread_disp_num; i++)
    {
        t[i].join();
    }

    return 0;
}

void streamDisp(vector<dispatcher> disps, int i)
{
    disps[i].addQueue(getRand());
}

/*
static const int thread_num = 10;

void call_from_thread();

// in main()
thread t[thread_num];

    for (int i = 0; i < thread_num; i++)
    {
        t[i] = thread(call_from_thread);
    }

    for (int i = 0; i < thread_num; i++)
    {
        t[i].join();
    }

void call_from_thread()
{
    cout << getRand() << endl;
}
*/
