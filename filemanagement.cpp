// file management 
// ofstream : stream class to write on files
// ifstream : stream class to read from files 
// ffstream : stream class to both read and write from/ to files
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream hello("abc.txt");
    if(hello.is_open())
    {
        hello<<"CPP language ";
          hello<<"heyooooo ";

    }
    else{
        cout<<"file oopening is fail .";
    }
    return 0;
}


