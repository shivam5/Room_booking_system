#include "room.h"
#include<iostream>
#include<string>

using namespace std;

room::room()
{
  name=" ";
  area=0;
  door=0;
  x=0;
  y=0;
  status=0;
}

room::room(string rname,float rarea,int rdoor,int rx,int ry, int rstatus){
  name=rname;
  area=rarea;
  door=rdoor;
  x=rx;
  y=ry;
  status=rstatus;
}


room::~room()
{
  //dtor
}

string room::getname() const{
  return name;
}

float room::getarea() const{
  return area;
}

int room::getdoor() const{
  return door;
}

int room::getx() const{
  return x;
}

int room::gety() const{
  return y;
}

int room::getstatus() const{
  return status;
}

void room::showdetails(){
  cout<<getname()<<"\t"<<getarea()<<"\t"<<getdoor()<<"\t"<<getx()<<"\t"<<gety()<<"\n";
}

void room::addname(string rname){
  name=rname;
}

void room::addarea(float rarea){
  area=rarea;
}

void room::adddoor(int rdoor){
  door=rdoor;
}

void room::addx(int rx){
  x=rx;
}

void room::addy(int ry){
  y=ry;
}

void room::addstatus(int rstatus){
  status=rstatus;
}


