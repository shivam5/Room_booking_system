#ifndef ROOM_H
#define ROOM_H
#include<string>

using namespace std;

class room
{
 public:
  room();
  room(string rname,float rarea,int rdoor,int rx,int ry, int rstatus);
  virtual ~room();
  virtual string getname() const;
  virtual float getarea() const;
  virtual int getdoor() const;
  virtual int getx() const;
  virtual int gety() const;
  virtual int getstatus() const;
  virtual void showdetails();
  virtual void addname(string);
  virtual void addarea(float);
  virtual void adddoor(int);
  virtual void addx(int);
  virtual void addy(int);
  virtual void addstatus(int);
  bool operator > (const room &r1) const;

 protected:
  string name;
  float area;
  int door;
  int x;
  int y;
  int status;
 private:
};

#endif // ROOM_H
