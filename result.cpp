#include<iostream>
using namespace std;
class student{
   private:
   int adminNo;
   char sname[20];
   float  eng,maths,sci,total;
   float ctotal()
   {
        return eng + maths  + sci;
   }

    public:
    void Takedata()
    {
        cout<<"Enter Admion no: ";
        cin>>adminNo;
        cout<<"Enter name: ";
        cin>>sname;
        cout<<"Enter maths marks: ";
        cin>>maths;
        cout<<"Enter science marks: ";
        cin>>sci;
        cout<<"Enter english marks: ";
        cin>>eng;

        total  = ctotal();
    }
    void ShowData()
    {
        cout<<"Admin  no: "<<adminNo<<endl;
        cout<<"Student name: "<<sname<<endl;
        cout<<"Maths marks: "<<maths<<endl;
        cout<<"Scienc marks: "<<sci<<endl;
        cout<<"English marks: "<<eng<<endl;
        cout<<"Total marks: "<<total<<endl;
    }
};
int main()
{
    student s;
    s.Takedata();
    s.ShowData();    
}


