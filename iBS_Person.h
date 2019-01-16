#include "WebMake.h"



u8text& ConvertArg(int argc, char *argv[])
{
    u8text result;
    for(int c=0; c<argc; c++)
    {// test and convert from u8text struct
        result.push_back(argv[c]);
    }

};

typedef struct Person
{
    first_name

};
//--------------------------------------------
//  *** Main ***  
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
