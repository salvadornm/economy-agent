#include <iostream>
#include "agent.h" // Include your Agent class header file

#include <random>

int main() {
    // Create an instance of the Agent class
    Agent agent;

    // Set ID and Fund
    agent.SetID(101);
    agent.SetFund(5000);

    // Print the Agent's information
    std::cout << "Testing Agent class:\n";
    agent.print();

    // Modify the Agent's fund
    agent.SetFund(10000);
    std::cout << "After modifying fund:\n";
    agent.print();

    // create an array of several agents 
    const int NAGENT = 20;
    Agent house[NAGENT];

    // create a normal distribution with Mean=0 and RMS=50
    std::random_device rd;
    std::mt19937 gen(rd());
    std::normal_distribution<double> dist(0.0, 50.0);
 
    // set labels and funds for agents within house
    for (int i = 0; i < NAGENT; i++){
    	house[i].SetID(i); 
        house[i].SetFund(200 + dist(gen));
     }


    // Loop over agents 
    for (int i = 0; i < NAGENT; i++) {
        house[i].print();
    }
    


    return 0;
}
