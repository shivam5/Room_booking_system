#include "lec.h"
#include<iostream>
#include<string>

using namespace std;

lec::lec()
{
  name=" ";
  area=0;
  door=0;
  x=0;
  y=0;
  status=0;
  chair=0;
}

lec::lec(string rname,float rarea,int rdoor,int rx,int ry, int rchair, int rstatus){
  name=rname;
  area=rarea;
  door=rdoor;
  x=rx;
  y=ry;
  status=rstatus;
  chair=rchair;
}

lec::~lec()
{
  //dtor
}

int lec::getchair() const{
  return chair;
}

void lec::showdetails(){
  cout<<getname()<<"\t"<<getarea()<<"\t"<<getdoor()<<"\t"<<getx()<<"\t"<<gety()<<"\t"<<getchair()<<"\n";
}

void lec::addchair(int rchair){
  chair=rchair;
}
