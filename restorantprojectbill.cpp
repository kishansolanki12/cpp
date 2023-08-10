#include<iostream>
#include<string.h>
using namespace std;

class abc
{
     protected:
     double  GST  ,  discount , Net_bill,bill_amt =0 ;
     int   Bill =0 , quantity[6],amnt[6];
     string Ditems[6],name,contact_number;
     public:
     void display()
     {
          cout<<"<-------> WELCOM TO MAHALAXMI FAST FOOD <-------> \n";
          cout<<"Enter your Name : ";
          cin>>name;
          cout<<"\nEnter your Contact Number : ";
          cin>>contact_number;
     }

     void costinformation()
     {
          cout<<"\n\t Name               : "<<name<<endl;
          cout<<"\n\t Contact Number     : "<<contact_number<<endl;
          
          cout<<"\n\t\t:::::::::::::::order list:::::::::::::::\n";
          cout<<"\n*******************************************************************************";
          cout<<"\nNo.\tItems Name\t\t\tRate\t\tQuantity\tAmount";
          cout<<"\n*******************************************************************************";  
     }
      int item1()
      {
         cout<<"\n \tEnter Qunatity :";
         cin>>quantity[0];
         Ditems[0] = "Kaju Badam Milk Shake           150 ";
         amnt[0]=quantity[0]*150;
         return Bill = Bill +amnt[0] ;
      }

      int item2()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity[1];
         Ditems[1] = "American Thick Shake            100 ";
         amnt[1]=quantity[1]*100;
         return Bill = Bill + amnt[1];
      }

      int item3()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity[2];
         Ditems[2] = "Cold Coco With Isecream         110";
         amnt[2]=quantity[2]*110;
         return Bill = Bill + amnt[2];
      }

      int item4()
      {
         cout<<"\n \tEnter Qunatity : ";
         cin>>quantity[3];
         Ditems[3] = "Burger with frenchfries         300";
         amnt[3]=quantity[3]*300;
         return Bill = Bill + amnt[3];
      }

      int item5()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity[4];
         Ditems[4] = "American Burger                 400";
         amnt[4]=quantity[4]*400;
         return Bill = Bill + amnt[4];
      }

      int item6()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity[5];
         Ditems[5] = "Cheese Shandwich                140";
         amnt[5]=quantity[5]*140;
         return Bill = Bill + amnt[5];
      }

      double Show_Bill_Amt()
      { 
         
         return bill_amt = bill_amt + Bill;
      }

      double Show_disc()
      {
         if (bill_amt >  1000 )
        {
            return discount = ( bill_amt *10  ) / 100; 
        }
        else{
            return discount =0;
        }
      }

      double Show_GST()
      {
         return  GST = ( bill_amt * 5) / 100;  
      }

      double Show_Net_bill()
      {
        return Net_bill =   bill_amt +  GST - discount  ;
      }
   


      void Show_Net_Bill()
      {
            Show_bill_Items();
            cout<<"\n*****************************************************************************";
            cout<<"\n\t\t\t\t         Total Order price  : "<<Show_Bill_Amt()<<endl;
            cout<<"\n\t\t\t\t         Discount           : "<<Show_disc() <<endl;
            cout<<"\n\t\t\t\t         GST                : "<<Show_GST()<<endl;
            cout<<"\n\t\t\t\t         Net Bill iS        : "<<Show_Net_bill()<<endl; 
            cout<<"\n******************************************************************************";
            cout<<"\n\t\t\tTHANK YOU FOR VISIT";
            cout<<"\n******************************************************************************";

      }


      void Show_bill_Items()
      {

         int i ;

         for(i=0;i<6;i++)
         {
         if(!Ditems[i].empty())
         {
            cout<<"\n"<<i+1<<" : "<<"\t"<<Ditems[i]<<"\t         "<<quantity[i]<<"\t        "<<amnt[i]<<endl;
         }
         }
      }

};



int main ()
{

        abc a;
     

        a.display();

        cout<<"\n\t\t\t :::::::::: Menu :::::::::: \n";
        cout<<" \n \t\t\t [1] Kaju Badam Milk Shake           : RS. 150 /- "; 
        cout<<" \n \t\t\t [2] American Thick Shake            : RS. 100 /- "; 
        cout<<" \n \t\t\t [3] Cold Coco With Isecream         : RS. 110 /- "; 
        cout<<" \n \t\t\t [4] Burger with frenchfries         : RS. 300 /- ";
        cout<<" \n \t\t\t [5] American Burger                 : RS. 400 /- ";
        cout<<" \n \t\t\t [6] Cheese Shandwich                : RS. 140 /- ";
        cout<<" \n \t\t\t  Confirm Your Order       [0]  \n";

        int choice ;

        do
        {
         cout<<"\n Enter your choice : ";
         cin>>choice ;
        switch (choice)
        {
        case 1: 
             a.item1();
             
            break;
        case 2: 
             a.item2();

            break;
        case 3: 
             a.item3(); 
               
            break;
        case 4: 
             a.item4();
            
            break;
        case 5: 
            a.item5();
            
            break;
        case 6: 
            a.item6();
            
            break;
     

        case 0: 
           break;
        }

      } while (choice!=0);


            a.costinformation();
            a.Show_Net_Bill();

}