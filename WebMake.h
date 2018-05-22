#include "UTF-8_String.h"

// **CAUSION** WebMake.h is not stable at this point 

struct PageInfo
{
       u8str doc_type;
       u8str lang;
       u8str content_type;
       
};


struct WebPage
{
       PageInfo info;
       u8str page_title;
       u8text style_text;
       u8str stylesheet_filepath;
       u8str javascript_filepath;
        
       u8text head, body, footer;
       
       u8text make_page(u8str filePath)
       {
              u8str temp;
              u8text result;
              
              result.append("<!doctype html>");
              result.append("<html lang=\"en\">");
              result.append("<head>");
              result.append(head);
              result.append("</head>");
              result.append("<body>");
              result.append(body);
              result.append("</body>");
              result.append("<footer>");
              result.append(footer);
              result.append("</footer>");
 
       };
      u8text make_page(u8str filePath, u8text h, u8text b, u8text f)
       {
           head = h; body = b; footer = f;
           return make_page(filePath);
       };
       
       
};
