#include "functions.h"

int myrand(int mini, int maxi){
   return rand()%maxi+mini;
}

void disp_constr(std::vector<Dispatcher> &vDisp)
{
    int n_disps{MAX_D};
    ///reserves a number of slots for vectors which is defined by user
    vDisp.reserve(n_disps);

    for (int i=0;i<n_disps;i++)
    {
        ///creates instances of Cores and pushes it back in the Vector
        vDisp.push_back(Dispatcher());
    }
}

void core_constr(std::vector<Core> &vCore)
{
    int n_cores{MAX_C};
    ///reserves a number of slots for vectors which is defined by user
    vCore.reserve(n_cores);

    for (int i=0;i<n_cores;i++)
    {
        ///creates instances of Cores and pushes it back in the Vector
        vCore.push_back(Core());
    }
}
