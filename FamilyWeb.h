#include "WebMake.h"

strust SurnameDir
{
       u8str surname;
       u8str dir;
  //...     
       
};

struct MemberPage
{
  struct MemberPageInfo
  {
         u8str profile_pic_link;
         u8str prefix, first_name, middle_name, last_name, sufix;
         u8str DoB, DoD;
         u8str birth_place;
         u8str fathers_name, mothers_name;
         u8text other_info;
  };
       WebPage page;
       
       
};

struct EventPage
{
       struct EventInfo
       {
              u8str event_pic_link;
              u8str event_date;
              u8str event_type;
              u8str m_member_name;
              u8str f_member_name;
              u8text other_info;
       };
};


struct FamilyPage
{
  struct FamilyPageInfo
  {
         u8str family_pic_link;
         u8str fathers_fathers_name, fathers_mothers_name;
         u8str mothers_fathers_name, mothers_mothers_name;
         u8str fathers_name, mothers_name;
         u8text children_names;
         
  };
       WebPage page;
       
       
       
};

