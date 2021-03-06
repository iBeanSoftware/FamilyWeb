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

struct BegotTree
{
       iBS::u8str file_path;
       //format
       // "FatherName" begot "SonName" at age ##
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
        page.head.append("<meta http-equiv=\"Content-Type\" content=\"text/html; charset=UTF-8\">");
        page.head.append("<meta name=\"Author\" content=\"iBeanSoftware FamilyWeb API\">");
        page.head.append("<link rel=\"stylesheet\" type=\"text/css\" href=\"FamilyWeb.css\">");
        page.head.append("<script src=\"FamilyTree.js\"></script>");
           
        page.body.append("<h1>" + info.last_name+" "+info.sufix+", "+info.prefix+" "+info.first_name+" "+info.middle_name + "</h1>");  
        page.body.append("<h2> Parents </h2>");
           
        page.body.append("<div class=\"father-box\">");
        page.body.append("<p> Father: "+info.fathers_name +"</p>");
        page.body.append("<p> Mother: "+info.mothers_name +"</p>");
        page.body.append("</div>");

        page.body.append("<p> </p>");
        
        page.body.append("<div class=\"father-box\">");
        page.body.append("<img class=\"image10p\" src=/""+ profile_pic_link +"\" alt=\"Member Image\">");
        page.body.append("<p>"+info.first_name+" "+info.middle_name+" "+info.last_name+" "+info.sufix+"</p>");  
        page.body.append("<p> Date of Birth: "+info.DoB+" </p>");
        page.body.append("<p> Place of Birth: "+info.birth_place+" </p>");
        page.body.append("<p> Date of Death: "+info.DoD+" </p>");
        page.body.append("<p> Place of Death: "+info.death_place+" </p>");
        page.body.append("</div>");
           
        page.body.append();
    };   
 //void init(){};
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
              page.head.append("<meta http-equiv=\"Content-Type\" content=\"text/html; charset=UTF-8\">");
              page.head.append("<meta name=\"Author\" content=\"iBeanSoftware FamilyWeb API\">");
              page.head.append("<link rel=\"stylesheet\" type=\"text/css\" href=\"FamilyWeb.css\">");
              page.head.append("<script src=\"FamilyTree.js\"></script>");
           
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
       
       void populate_page()
       {
        page.head.append("<meta http-equiv=\"Content-Type\" content=\"text/html; charset=UTF-8\">");
        page.head.append("<meta name=\"Author\" content=\"iBeanSoftware FamilyWeb API\">");
        page.head.append("<link rel=\"stylesheet\" type=\"text/css\" href=\"FamilyWeb.css\">");
        page.head.append("<script src=\"FamilyTree.js\"></script>");
           
        page.body.append("<h1>" + info.fathers_name+" & "+info.mothers_name+ "</h1>");  
        page.body.append("<img class=\"image10p\" src=/""+ profile_pic_link +"\" alt=\"Member Image\">");
        page.body.append("<p> </p>");
        page.body.append("<h2> Grand Parents </h2>");
              
        page.body.append("<div class=\"father-box\">");
        page.body.append("<p> Father's Father: "+info.fathers_fathers_name +"</p>");
        page.body.append("<p> Father's Mother: "+info.fathers_mothers_name +"</p>");
        page.body.append("</div>");
              
        page.body.append("<p> </p>");
        page.body.append("<div class=\"mother-box\">");
        page.body.append("<p> Mother's Father: "+info.mothers_fathers_name +"</p>");
        page.body.append("<p> Mother's Mother: "+info.mothers_mothers_name +"</p>");
        page.body.append("</div>");
        page.body.append("<p> </p>");
        page.body.append("<h2> Parents </h2>");
        page.body.append("<p> Father: "+info.fathers_name +"</p>");
        page.body.append("<p> Mother: "+info.mothers_name +"</p>");
        page.body.append("<p> </p>");
        page.body.append("<h2> Children </h2>");

        page.body.append("<div class=\"father-box\">");
        for(int i=0; i<other_info.count; i++)
              {
              page.body.append("<p> "+children_names[i]+" </p>");
              }
        page.body.append("</div>");
       };   
       
};
//-------------------------------------------------------------------
                        
struct FamilyTreePage
{
       SurnameDir sur_dir;
       WebPage page;

       void populate_page()
       {
           page.head.append("<meta http-equiv=\"Content-Type\" content=\"text/html; charset=UTF-8\">");
           page.head.append("<meta name=\"Author\" content=\"iBeanSoftware FamilyWeb API\">");
           page.head.append("<link rel=\"stylesheet\" type=\"text/css\" href=\"FamilyWeb.css\">");
           page.head.append("<script src=\"../ftree.js/tree.js\"></script>");
           page.head.append("<script src=\"../ftree.js/main.js\"></script>");
           page.head.append("<script src=\"FamilyTree.js\"></script>");
              
           page.body.append("<body onload=\"initialize()\">");
           page.body.append("<div id=\"header\">"+ sur_dir.surname +"</div>");
      //     <div id="control_panel">
  /* todo...
    <div class="section">
        Control Panel
    </div>
    <button id="add_child">
        Add Child
    </button>
    <button id="remove_node">
        Remove Node
    </button>
    <button id="zoom_in">
        Zoom In
    </button>
    <button id="zoom_out">
        Zoom Out
    </button>
    <div class="section">
        Information Panel
    </div>
    <div id="information_panel">

    </div>
</div>
<div id="divider">

</div>
<div id="main">
    <canvas id="canvas"></canvas>
</div>
           //*/
       };
       
};

