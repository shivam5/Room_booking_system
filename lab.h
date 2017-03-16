#ifndef LAB_H
#define LAB_H

#include "room.h"


class lab : public room
{
 public:
  lab();
  lab(string rname,float rarea,int rdoor,int rx,int ry, int rcomputer, int rstatus);
  virtual ~lab();
  virtual int getcomputer() const;
  virtual void addcomputer(int);
  virtual void showdetails();
 protected:
 private:
  int computer;
};

#endif // LAB_H
