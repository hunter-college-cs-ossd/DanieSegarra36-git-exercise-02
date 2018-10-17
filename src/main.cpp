/******************************************************************************
  Title          : main.cpp
  Author         : 
  Created on     : October  7, 2018
  Description    : Displays random peculiar facts
  Purpose        : To exercise collaborative source code development
  Usage          : nuttyfact
  Build with     : g++ -Wall -g -o oddities  main.cpp

  Modifications  : Added the function Jimmyzs_oddity to main.cpp
                   Added audiencia-cereal oddity.

  Notes:
  The number N below is the number of people on each team.
  This program prints N peculiar facts, called "oddities" here.
  The main program calls N functions, each with the syntax defined
  by the output_function typedef defined below. Each function must be 
  named 
       username_oddity

  where username is the GitHub username of its author.
  For example, 
      output_function  stewartweiss_oddity;

  Oddities are found in the file "oddities.txt" in the project source directory
 
******************************************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;

/******************************************************************************/

// The syntax of the output function that must be used to print an oddity.
typedef ostream& (*output_function) (ostream & out);

ostream& audiencia_cereal_oddity(ostream& out)
{
    out << "If you're in a vehicle going the speed of light, what happens when you turn on the headlights?";
    return out;
}

/******************************************************************************
        
                        All Function Definitions

******************************************************************************/



ostream& yizongk_oddity(ostream& out) {
    out << "If 7-11 is open 24 hours a day, 365 days a year, why are there locks on the doors?\n";
    return out;
}

ostream& Jimmyzs_oddity(ostream & out)
{
    out<<"Why do we drive on parkways and park on driveways?\n";
    return out;
}

int main(int argc, char* argv[] )
{

    // Calls to output functions

    output_function a;
    a = &yizongk_oddity;
    a(cout);

    output_function Jimmyzs;
    Jimmyzs = Jimmyzs_oddity;
    Jimmyzs(cout);

    output_function audiencia_cereal = &audiencia_cereal_oddity;
    audiencia_cereal(cout); 

    return 0;
}