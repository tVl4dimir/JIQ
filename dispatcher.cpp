#include "dispatcher.h"

/****************Static Init**********************/
int Dispatcher  ::  m_siID {0};
int Core        ::  m_siID {0};
/*************************************************/


/****************Constructors*********************/
Dispatcher::Dispatcher()
    : m_nJQ(), m_nIQ(), m_nID(m_siID++), m_nState(IDLE), m_nEvent(-1) {}

Core::Core()
    : m_nPQ(), m_nID(m_siID++), m_nState(IDLE), m_nEvent(-1) {}
/*************************************************/


/****************Setters**************************/
/// Add to queue
void Dispatcher ::addJQ     (int job )      {m_nJQ.push(job); }
void Dispatcher ::addIQ     (int core)      {m_nIQ.push(core);}
void Core       ::addPQ     (int job )      {m_nPQ.push(job); }
/// Set state
void Dispatcher ::setState  (int state)     {m_nState = state;}
void Core       ::setState  (int state)     {m_nState = state;}
/// Set event
void Dispatcher ::setEvent  (int event)     {m_nEvent = event;}
void Core       ::setEvent  (int event)     {m_nEvent = event;}
/*************************************************/

/***************Getters***************************/
/// Get front queue
int Dispatcher  ::getJQ     ()              {return m_nJQ.front();}
int Dispatcher  ::getIQ     ()              {return m_nIQ.front();}
int Core        ::getPQ     ()              {return m_nPQ.front();}
/// Get ID
int Dispatcher  ::getID     ()              {return m_nID;}
int Core        ::getID     ()              {return m_nID;}
/// Get state
int Dispatcher  ::getState  ()              {return m_nState;}
int Core        ::getState  ()              {return m_nState;}
/// Get event
int Dispatcher  ::getEvent  ()              {return m_nEvent;}
int Core        ::getEvent  ()              {return m_nEvent;}
/*************************************************/
