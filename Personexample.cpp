#include <iostream>
using namespace std;
class Person{
   private:
     int id;
     string name;
   public:
      Person():id(0),name(""){};  ///Person p1;
      Person(int tid,string tname):id(tid),name(tname){};//Person p1(1,"john");
      int getid(){return id;}
      string getName(){return name;}
      void setId(int tid){
            id=tid;
      }
      void setName(string tname){
          name=tname;
      }
      void print(){
          cout<<"ID="<<id<<" and name= "<<name<<endl;
      }
};
class Student:public Person{
   private:
      double gpa;
   public:
      Student():Person(),gpa(0.0){};//Student s1;
      Student(int tid,string tname,double tgpa):Person(tid,tname),gpa(tgpa){}
      void setGpa(double tgpa){
          gpa=tgpa;
      }
      double getGpa(){return gpa;}
      void print(){//overwrite parent
          cout<<"ID="<<getid()<<" ,name="<<getName()<<" ,GPA="<<getGpa()<<endl;
      }

};
int main(){
    Student s1,s2(1,"mary",3.5),s3(2,"john",4.0);
    s1.print();
    s2.print();
    s3.print();
}