#ifndef LEC_H
#define LEC_H

#include "room.h"


class lec : public room
{
 public:
  lec();
  lec(string rname,float rarea,int rdoor,int rx,int ry, int rchair, int rstatus);
  virtual ~lec();
  virtual int getchair() const;
  virtual void addchair(int);
  virtual void showdetails();
  bool operator < (const lec &r1) const;
 protected:
 private:
  int chair;
};

#endif // LEC_H
