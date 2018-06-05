#include "../iBS_LIB/UTF-8_String.h"
#include "WebMake.h"

strust SurnameDir
{
       iBS::u8str surname;
       iBS::u8str root_path;
       
       iBS::u8str getFullPath()
       {
              return (root_path +"//" +surname+"//" );
       };
  //...     
       
};

struct IndexPage
{
       SurnameDir sur_dir;
       iBS::u8text name_list;
};

struct MemberPage
{
    struct MemberInfo
    {
         iBS::u8str profile_pic_link;
         iBS::u8str prefix, first_name, middle_name, last_name, sufix;
         iBS::u8str DoB, DoD;
         iBS::u8str birth_place; // yyyymmdd
         iBS::u8str death_place;
         iBS::u8str fathers_name, mothers_name;
         iBS::u8text other_info;
    };
    MemberInfo info;   
    SurnameDir sir_dir;
    WebPage page;
       
    void populate_page()
    {
        page.head.append("<style> .image10p {width: 10%;}</style>");
           
        page.body.append("<h1>" + info.last_name+" "+info.sufix+", "+info.prefix+" "+info.first_name+" "+info.middle_name + "</h1>");  
        page.body.append("<h2> Parents </h2>");
        page.body.append("<p> Father: "+info.fathers_name +"</p>");
        page.body.append("<p> Mother: "+info.mothers_name +"</p>");
        page.body.append("<p> </p>");
        page.body.append("<img class=\"image10p\" src=/""+ profile_pic_link +"\" alt=\"Member Image\">");
        page.body.append("<p>"+info.first_name+" "+info.middle_name+" "+info.last_name+" "+info.sufix+"</p>");  
        page.body.append("<p> Date of Birth: "+info.DoB+" </p>");
        page.body.append("<p> Place of Birth: "+info.birth_place+" </p>");
        page.body.append("<p> Date of Death: "+info.DoD+" </p>");
        page.body.append("<p> Place of Death: "+info.death_place+" </p>");
        page.body.append();
    };   
 //void init(){};
 //bool add_member_page(){};
};

struct EventPage
{
       struct EventInfo
       {
              iBS::u8str event_pic_link;
              iBS::u8str event_date;
              iBS::u8str event_type;
              iBS::u8str member_name1;
              iBS::u8str member_name2;
              iBS::u8text other_info;
       };
       
       EventInfo info;
       SurnameDir sur_dir;
       WebPage page;
       void populate_page()
       {
              page.head.append("<style> .image10p {width: 10%;}</style>");
           
              page.body.append("<h1>" + info.member_name+" "+info.event_type + "</h1>");  
              page.body.append("<img class=\"image10p\" src=/""+ event_pic_link +"\" alt=\"Event Image\">");
              page.body.append("<p> Event Date: "+info.event_date+" </p>");
              for(int i=0; i<other_info.count; i++)
              {
              page.body.append("<p> "+info.other_info[i]+" </p>");
              }
    };        
 //bool add_event_page(){};
};

struct FamilyPage
{
  struct FamilyInfo
  {
         iBS::u8str family_pic_link;
         iBS::u8str fathers_fathers_name, fathers_mothers_name;
         iBS::u8str mothers_fathers_name, mothers_mothers_name;
         iBS::u8str fathers_name, mothers_name;
         iBS::u8text children_names;
         
  };
       FamilyInfo info;
       SurnameDir sur_dir;
       WebPage page;
      //bool add_family_page(){};
};

