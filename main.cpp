#include "main.h"

using namespace std;

int getJob();
void init(vector<Core> &vCore, vector<Dispatcher> &vDisp, int i);

int main()
{
    /// Initializations
    srand(time(NULL));
    vector<Dispatcher> vDisp;
    vector<Core> vCore;
    /// Constructions
    disp_constr(vDisp);
    core_constr(vCore);

    for(unsigned int i=0;i!=vCore.size();i++)
    {
        vCore.at(i).setEvent(C_TOPOLOGY);
        for (unsigned int y = 0; y < TABLE_SIZE; y++)
        {
            if ( (vCore.at(i).getState() == s_table[y].state) )
            {
                if ( (vCore.at(i).getEvent() == s_table[y].event) )
                {
                    init(vCore,vDisp, i);
                    cout << vCore.at(i).getState() << endl;
                    break;
                }
            }
        }
    }

    //do
    //{
    for (int iii=0; iii<5;iii++)
    {
        for (int i = 0; i < MAX_D; i++)
        {

            /// Get a job and add it to Job Queue
            vDisp.at(i).addJQ(getJob());
            /// Set current event
            vDisp.at(i).setEvent(JOB);
            /// Search S_TABLE for the state/event match
            for (unsigned int y = 0; y < TABLE_SIZE; y++)
            {
                if ( (vDisp.at(i).getState() == s_table[y].state) )
                {
                    if ( (vDisp.at(i).getEvent() == s_table[y].event) )
                    {
                        vDisp.at(i).setState(s_table[y].n_state);
                        cout << vDisp.at(i).getState() << endl;
                        break;
                    }
                }
            }
        }
    } /*while(true)*/;

    return 0;
}

int getJob()
{
    return myrand(0,2);
}

void init(vector<Core> &vCore, vector<Dispatcher> &vDisp, int i)
{
    int x = myrand(0,2);
    vDisp.at(x).addIQ(vCore.at(i).getID());
    vCore.at(i).setEvent(ACK);

    for (unsigned int y = 0; y < TABLE_SIZE; y++)
    {
        if ( (vCore.at(i).getState() == s_table[y].state) )
        {
            if ( (vCore.at(i).getEvent() == s_table[y].event) )
            {
                vCore.at(i).setState(s_table[y].n_state);
                cout << vCore.at(i).getState() << endl;
                break;
            }
        }
    }
}
