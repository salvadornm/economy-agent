#include <iostream>

  class Agent  
  {
    public:

      // Constructor
      Agent() : ID(0), fund(0), status(1) {}
      // Destructor
      ~Agent()  { }
      
      // Setters (Mutators)
      void SetFund(int x) { fund = x; }
      void SetID(int x) { ID = x; }

      // Getter Functions
      int GetFund() const { return fund; }
      int GetID() const { return ID; }
      int GetStatus() const { return status; }

      // Print Agent
      void print()
      {
        std::cout << "-------------------" << std::endl;
        std::cout << " print (Agent)     " << std::endl;
        std::cout << " ID     = " << ID << std::endl;
        std::cout << " status = " << status << std::endl;
        std::cout << " fund   = " << fund << std::endl;
        std::cout << "-------------------" << std::endl;
      }

    private :
      int ID;
      int fund;
      int status;  // 0:dead 1: live
  };
