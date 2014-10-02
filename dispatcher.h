#ifndef DISPATCHER_H_
#define DISPATCHER_H_

#include <queue>

#include "states.h"

class Core;

class Dispatcher
{
private:
    std::queue<int>     m_nJQ;      /// Job Queue
    std::queue<int>     m_nIQ;      /// Idle Queue
    static int          m_siID;     /// Static ID
    int                 m_nID;      /// Personal ID
    int                 m_nState;   /// State of Dispatcher
    int                 m_nEvent;   /// Current Event

public:
    /*********Constructors*********/
    Dispatcher();
    /******************************/

    /*********Setters**************/
    void    addJQ   (int);          /// Adds Job to Queue
    void    addIQ   (int);          /// Adds Core to Queue
    void    setState(int);          /// Sets Dispatcher State
    void    setEvent(int);          /// Sets Dispatcher Event
    /******************************/

    /*********Getters**************/
    int     getJQ   ();             /// Returns front of Job Queue
    int     getIQ   ();             /// Returns front of Core Queue
    int     getID   ();             /// Returns Dispatcher ID
    int     getState();             /// Returns Dispatcher State
    int     getEvent();             /// Returns Dispatcher Event
    /******************************/
};

class Core
{
private:
    std::queue<int>     m_nPQ;      /// Processor Queue
    static int          m_siID;     /// Static ID
    int                 m_nID;      /// Personal ID
    int                 m_nState;   /// State of Core
    int                 m_nEvent;   /// Current Event

public:
    /*********Constructors*********/
    Core();
    /******************************/

    /*********Setters**************/
    void    addPQ   (int);          /// Adds Job to Processor Queue
    void    setState(int);          /// Sets Core State
    void    setEvent(int);          /// Sets Core Event
    /******************************/

    /*********Getters**************/
    int     getPQ   ();             /// Returns front of Processor Queue
    int     getID   ();             /// Returns Core ID
    int     getState();             /// Returns Core State
    int     getEvent();             /// Returns Core Event
    /******************************/
};

#endif // DISPATCHER_H_
