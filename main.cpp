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
void AddPerson()
{
    u8str anser;
    MemberPage page = MemberPage();
    
    cout << "Enter Link to picture:"<< endl;
    cin >> anser;
    page.info.profile_pic_link = anser;
    cout << "Enter First Name:"<< endl;
    cin >> anser;
    page.info.first_name = anser;
    cout << "Enter Middle Name:"<< endl;
    cin >> anser;
    page.info.middle_name = anser;
    cout << "Enter Last Name:"<< endl;
    cin >> anser;
    page.info.last_name = anser;
    cout << "Enter Name Sufix:"<< endl;
    cin >> anser;
    page.info.sufix = anser;
    cout << "Enter Date of Birth:"<< endl;
    cin >> anser;
    page.info.DoB = anser;
    cout << "Enter Date of Death:"<< endl;
    cin >> anser;
    page.info.DoD = anser;
    cout << "Enter Birth Place:"<< endl;
    cin >> anser;
    page.info.birth_place = anser;
    cout << "Enter Death Place:"<< endl;
    cin >> anser;
    page.info.birth_place = anser;
    cout << "Enter Fathers Name:"<< endl;
    cin >> anser;
    page.info.fathers_name = anser;
    cout << "Enter Mothers Name:"<< endl;
    cin >> anser;
    page.info.mothers_name = anser;
    cout << "Enter Other Information 1of3:"<< endl;
    cin >> anser;
    page.info.other_info.append(anser);
    cout << "Enter Other Information 2of3:"<< endl;
    cin >> anser;
    page.info.other_info.append(anser);
    cout << "Enter Other Information 3of3:"<< endl;
    cin >> anser;
    page.info.other_info.append(anser);
    
    page.populate_page();

};
//--------------------------------------------
void AddFamily();
//--------------------------------------------
void AddEvent();
//--------------------------------------------
void BuildIndex();
//--------------------------------------------

