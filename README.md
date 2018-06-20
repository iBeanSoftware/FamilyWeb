# FamilyWeb
Genealogy program that will create a web page for each member, event, and family page.

It is not always good to use C++ to make a website, But in this case I believe it is very appropriate.
Using a program that you can compile on most any computer where you add your family tree. The program would be able to create your famly tree website, where each member has their own web page. 

Still under construction...

Created files 

WebMake.h - is a c++ header file that contains the base WebPage structure. Used as base web page structure.
  - reusable base structure

FamilyWeb.h 
 - SurnameDir varable that contains surname and root path.
 Also the following structures each has an object from the above strut WebPage that will create the web pages for Family Web     Application:
 - IndexPage struct
 - MemberPage struct
 - EventPage struct
 - FamilyPage struct
  
 	FamilyWeb.css - css style that will be used in each and every page.
  FamilyWeb.js - Where be where any needed JavaScript will be.
  
  main.cpp - a start of a camand line program for testing base structures.
  
  
