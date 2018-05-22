#include "../iBS_LIB/UTF-8_String.h"
#include "WebMake.h"


strust SurnameDir
{
       iBS::u8str surname;
       iBS::u8str root_path;
  //...     
       
};

struct MemberPage
{
  struct MemberPageInfo
  {
         iBS::u8str profile_pic_link;
         iBS::u8str prefix, first_name, middle_name, last_name, sufix;
         iBS::u8str DoB, DoD;
         iBS::u8str birth_place;
         iBS::u8str fathers_name, mothers_name;
         iBS::u8text other_info;
  };
       WebPage page;
 //bool add_member_page(){};
};

struct EventPage
{
       struct EventInfo
       {
              iBS::u8str event_pic_link;
              iBS::u8str event_date;
              iBS::u8str event_type;
              iBS::u8str m_member_name;
              iBS::u8str f_member_name;
              iBS::u8text other_info;
       };
       WebPage page;
 //bool add_event_page(){};
};

struct FamilyPage
{
  struct FamilyPageInfo
  {
         iBS::u8str family_pic_link;
         iBS::u8str fathers_fathers_name, fathers_mothers_name;
         iBS::u8str mothers_fathers_name, mothers_mothers_name;
         iBS::u8str fathers_name, mothers_name;
         iBS::u8text children_names;
         
  };
       WebPage page;
      //bool add_family_page(){};
};

