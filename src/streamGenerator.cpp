#include "streamGenerator.h"

using namespace std;

int getRand()
{
    static __thread mt19937* generator = nullptr;

    if (!generator)
        generator = new mt19937(clock() + hash<thread::id>()(this_thread::get_id()));

    uniform_int_distribution<int> distribution(0, 9);

    return distribution(*generator);
}
