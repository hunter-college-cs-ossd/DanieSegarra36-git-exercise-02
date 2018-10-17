/******************************************************************************
  Title          : main.cpp
  Authors        : Team 1 - github.com/hunter-college-cs-ossd/DanieSegarra36-git-exercise-02/blob/master/teams.csv
  Created on     : October 7, 2018
  Description    : Displays random peculiar facts
  Purpose        : To exercise collaborative source code development
  Usage          : nuttyfact
  Build with     : g++ -Wall -g -o oddities  main.cpp
  Modifications  : Added the function LiudmilaZyrianova239_oddity to main.cpp.
                   Added the function yizongk_oddity to main.cpp.
                   Added the function Jimmyzs_oddity to main.cpp.
                   Added the function audiencia_cereal_oddity to main.cpp.
                   Added the intro/prompt function to main.cpp.

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

  Oddities are found in the file "oddities.txt" in the project source directory:
  github.com/hunter-college-cs-ossd/DanieSegarra36-git-exercise-02/blob/master/src/oddities.txt
 
******************************************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;

/******************************************************************************
 *****************       GLOBALS & FUNCTION DECLARATIONS      *****************
 ******************************************************************************/

// The syntax of the output function that must be used to print an oddity.
typedef ostream& (*output_function) (ostream & out);

// Intro / Prompt
ostream& intro(ostream & out);

// The following functions print a peculiar fact to the screen:
ostream& audiencia_cereal_oddity(ostream& out);
ostream& LiudmilaZyrianova239_oddity(ostream & out);
ostream& yizongk_oddity(ostream& out);
ostream& Jimmyzs_oddity(ostream & out);

/******************************************************************************
 ***********************              MAIN              ***********************
 ******************************************************************************/
int main(int argc, char* argv[]) {

    /* 1. Create function pointers and
          assign them the addresses of the provided oddity functions. */
    output_function intro = &DanieSegarra36_oddity;
    output_function LiudmilaZyrianova239 = &LiudmilaZyrianova239_oddity;
    output_function yizongk = &yizongk_oddity;
    output_function Jimmyzs = &Jimmyzs_oddity;
    output_function audiencia_cereal = &audiencia_cereal_oddity;
    // 2. Call functions
    intro(cout);
    LiudmilaZyrianova239_oddity(cout);
    yizongk(cout);
    Jimmyzs(cout);
    audiencia_cereal(cout); 
    // 3. Profit
    return 0;
}

/******************************************************************************
 *******************          FUNCTION DEFINITIONS          *******************
 ******************************************************************************/

ostream& DanieSegarra36_oddity(ostream & out) {
    out << "This is a collection of strange but true facts.\n";
    return out;
}

ostream& audiencia_cereal_oddity(ostream& out) {
    out << "If you're in a vehicle going the speed of light, what happens when you turn on the headlights?\n";
    return out;
}

ostream& LiudmilaZyrianova239_oddity(ostream & out) {
    out << "If a cow laughed, would milk come out her nose?\n";
    return out;
}

ostream& yizongk_oddity(ostream& out) {
    out << "If 7-11 is open 24 hours a day, 365 days a year, why are there locks on the doors?\n";
    return out;
}

ostream& Jimmyzs_oddity(ostream & out) {
    out<<"Why do we drive on parkways and park on driveways?\n";
    return out;
}