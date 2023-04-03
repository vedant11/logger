#include "logger.h"

int main(){
  Logger lg, lg2;
  lg2.log("does this work?");
  lg.log("make a level0 log");
  lg.setLevel(1);
  lg.log("another critical log");
  lg.setTag("this is a system specific log");
  lg.setLevel(2);
  lg.log("this is a medium criticality log");
  return 0;
}