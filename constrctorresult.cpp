#include<iostream>
using namespace std;
class result{
    char sname[20];
    int eng,maths,sci,total;
    float per;
    int Total()
    {
        return eng+maths+sci;
    }
    public:
    result()
    {
        cout<<"Enter name:";
        cin>>sname;
        cout<<"Enter eng marks :";
        cin>>eng;
        cout<<"Enter maths marks :";
        cin>>maths;
        cout<<"Enter sci marks :";
        cin>>sci;

        total=Total();
        per=total/3;

    }
    void showdata()
    {
        cout<<"student name :"<<sname<<endl;
        cout<<"eng marks :"<<eng<<endl;
        cout<<"maths marks :"<<maths<<endl;
        cout<<"sci marks :"<<sci<<endl;
        cout<<"total marks :"<<total<<endl;
        cout<<"percentage :"<<per<<endl;
    }
};
int main()
{
    result k;
    k.showdata();
    
}
