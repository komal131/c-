#include <iostream>
using namespace std; 
class Classroom 
{ 
    public:
   void world() 
{ 
     
    cout<<"classroom name: The Superstars"<<endl; 
 } 

  void form() 
 { 
    
cout<<"class teacher: Sandhya Supalkar"<<endl;
  }
 
  void students(int num)
 {
  
 cout<<"number of students:"<<num<<endl;

  } 
 

   };

     int main() 
  { 
    Classroom ob; ob.world(); ob.form(); ob.students(64);
  
      return 0;

}
