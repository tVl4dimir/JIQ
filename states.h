#ifndef STATES_H_
#define STATES_H_

/********States*******/
enum
{
    TOPOLOGY,
    IDLE,
    SERVE
};
/*********************/

/********Events*******/
enum
{
    C_TOPOLOGY,
    JOB,
    ACK
};
/*********************/

/*******Structs********/
typedef struct {
        int state;              /// Current state
        int event;              /// Current event
        int n_state;            /// Next state
        int (*flist)(void);     /// Function to return new state
} S_TABLE;
/*********************/

extern int init(void);

/*****Event Table*****/
static const S_TABLE s_table[] =    /// Table
{
    {IDLE,          JOB,                SERVE,          init},
    {IDLE,          C_TOPOLOGY,         TOPOLOGY,       0},
    {SERVE,         ACK,                IDLE,           0},
    {TOPOLOGY,      ACK,                IDLE,           0}
};

static const unsigned int  TABLE_SIZE =  /// Table size
    sizeof(s_table) / sizeof(s_table[0]);
/********************/

#endif // STATES_H_
