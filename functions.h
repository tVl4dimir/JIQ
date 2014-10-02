#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <cstdlib>
#include <vector>

#include "dispatcher.h"

#define MAX_D 2     /// Maximum Dispatchers
#define MAX_C 16    /// Maximum Cores

int  myrand(int, int);
void disp_constr(std::vector<Dispatcher> &vDisp);
void core_constr(std::vector<Core>       &vCore);

#endif
