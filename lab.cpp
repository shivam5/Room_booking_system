#include "lab.h"
#include<iostream>
#include<string>

using namespace std;

lab::lab()
{
  name=" ";
  area=0;
  door=0;
  x=0;
  y=0;
  status=0;
  computer=0;
}

lab::lab(string rname,float rarea,int rdoor,int rx,int ry, int rcomputer, int rstatus){
  name=rname;
  area=rarea;
  door=rdoor;
  x=rx;
  y=ry;
  status=rstatus;
  computer=rcomputer;
}

lab::~lab()
{
  //dtor
}

int lab::getcomputer() const{
  return computer;
}

void lab::showdetails(){
  cout<<getname()<<"\t"<<getarea()<<"\t"<<getdoor()<<"\t"<<getx()<<"\t"<<gety()<<"\t"<<getcomputer()<<"\n";
}

void lab::addcomputer(int rcomputer){
  computer=rcomputer;
}
