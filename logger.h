#include<iostream>
using namespace std;

class Logger{
  int level = 0;
  string tag="default-tag";
  string Message="";
  FILE *fp;
  
  public:
    Logger(){
      fp=fopen("logfile.log", "w");
    }
    ~Logger(){
      fclose(fp);
    }
    void setLevel(int lno){
      level=lno;
    }
    void setTag(string message){
      tag=message;
    }
    void log(string message){
      string logLine="["+tag+"] [criticality:" + to_string(level) + "]" + message;
      fputs(logLine.c_str(),fp);
      fputs("\n",fp);
    }
  
};
