#include <iostream>
#include "agent.h"

use namespace parameters

  class World  
  {
    public:
    // Constructor
    World() : ID(0) {}
    // Destructor
    ~World()  { }

    // IO
    // save data (for restarts)
    // read data
    // export data to read in  python


    // setPDF from list points

    // remove dead agents in the world
    RemoveDeadAgents()
    {
      int j=0;
      for (int i=0;i<nagents;i++)
      {
        // Agent aux = array_agent[i];
        // if (aux.status==0) 
        // {

        //   array_agent[i] = 
        // }

      }
    }



    private:

    int ID;
    int nagents,nagentsmax,nagentslive;

    Agent array_agent[NMAXAGENTS];


  }