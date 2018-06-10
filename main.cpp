#include <cstdlib>
#include <iostream>
#include "WebMake.h"

using namespace std;
using namespace iBS;

void MinuLoop();
void AddPerson();
void AddFamily();
void AddEvent();
void BuildIndex();
//--------------------------------------------
//  *** Main ***  
//--------------------------------------------

int main(int argc, char *argv[])
{
    MinuLoop();
  //  system("PAUSE");
    return EXIT_SUCCESS;
}
//--------------------------------------------

void MinuLoop()
{
  bool exit_flag = false;
  u8str anser = u8str(); // varible type found in iBS LIB in UTF-8_String.h included in WebMake.h
  
  do{
    cout << endl<< endl<< "Family Web Minu << endl<< endl;
    cout << "P) Add Person"<< endl;
    cout << "F) Add Family Page"<< endl;
    cout << "E) Add Event Page"<< endl;
    cout << "B) Build Index Page" << endl;
    cout << "X) Exit Program"<< endl;
    cin >> anser;
  
    if(anser=='P' || anser=='p' || anser=="persom" || anser=="add person" || anser=="Persom" || anser=="Add Person")
      AddPerson();
    else if(anser=='F' || anser=='f' ||anser=="family" || anser=="add family" || anser=="Family" || anser=="Add Family")
      AddFamily();
    else if(anser=='E' || anser=='e' ||anser=="event" || anser=="add event" || anser=="Event" || anser=="Add Event")
      AddEvent();
    else if(anser=='B' || anser=='b' ||anser=="build" || anser=="Build Index" || anser=="Build" || anser=="Build Index")
      BuildIndex();
    else if(anser=='X' || anser=='x' ||anser=="exit" || anser=="Exit"|| anser=="quit" || anser=="Quit")
      exit_flag = true;;
  }while(!exit_flag);
};
//--------------------------------------------
void AddPerson();
//--------------------------------------------
void AddFamily();
//--------------------------------------------
void AddEvent();
//--------------------------------------------
void BuildIndex();
//--------------------------------------------

