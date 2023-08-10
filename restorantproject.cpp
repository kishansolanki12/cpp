#include<iostream>
#include<string.h>

using namespace std;

class customer
{
     protected:
    string name, contact_number;
    public:
     void getinformation()
     {
          cout<<"<-------> WELCOM TO MAHALAXMI FAST FOOD <-------> \n";
          cout<<"Enter your Name : ";
          cin>>name;
          cout<<"Enter your Contact Number : ";
          cin>>contact_number;
     }

     void showinformation()
     {
          cout<<"\n\t Name               : "<<name<<endl;
          cout<<"\n\t Contact Number     : "<<contact_number<<endl;
     }

};


class Show_bill : public customer 
{

    protected :   

      double  GST  ,  discount , Net_bill,bill_amt =0 ;
      int   Bill =0 , quantity;

      string Ditems[5];

     public :


      int item1()
      {
         cout<<"\n \tEnter Qunatity :";
         cin>>quantity;
         Ditems[0] = "Kaju Badam Milk Shake  = 150 ";
         return Bill = Bill + quantity*150;
      }

      int item2()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity;
         Ditems[1] = "American Thick Shake = 100 ";
         return Bill = Bill + quantity*100;
      }

      int item3()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity;
         Ditems[2] = "Cold Coco With Isecream   = 110";
         return Bill = Bill + quantity*110;
      }

      int item4()
      {
         cout<<"\n \tEnter Qunatity : ";
         cin>>quantity;
         Ditems[3] = "Burger with frenchfries = 300";
         return Bill = Bill + quantity*300;
      }

      int item5()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity;
         Ditems[4] = "American Burger  = 400";
         return Bill = Bill + quantity*400;
      }

      int item6()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity;
         Ditems[4] = "Cheese Shandwich  = 140";
         return Bill = Bill + quantity*140;
      }

      int item7()
      {
         cout<<"\n \tEnter Qunatity : "; 
         cin>>quantity;
         Ditems[4] = "Italian Cheese Pizza   = 210";
         return Bill = Bill + quantity*210;
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

        else 
        {
            return discount = 0;
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
            cout<<"\n\t Total Order price  : "<<Show_Bill_Amt()<<endl;
            cout<<"\n\t GST                : "<<Show_GST()<<endl;
            cout<<"\n\t Discount           : "<<Show_disc() <<endl;
            cout<<"\n\t Net Bill iS        : "<<Show_Net_bill()<<endl; 
      }


      void Show_bill_Items()
      {

         int i ;

         for(i=0;i<5;i++)
         {
         if(!Ditems[i].empty())
         {
            cout<<"\n\t "<<i+1<<":"<<Ditems[i]<<endl;
         }
         }
      }

};


int main ()
{

     Show_bill a ;
     

        a.getinformation();

        cout<<"\n\t\t\t :::::::::: Menu :::::::::: \n";
        cout<<" \n \t\t\t [1] Kaju Badam Milk Shake           : RS. 150 /- "; 
        cout<<" \n \t\t\t [2] American Thick Shake            : RS. 100 /- "; 
        cout<<" \n \t\t\t [3] Cold Coco With Isecream         : RS. 110 /- "; 
        cout<<" \n \t\t\t [4] Burger with frenchfries         : RS. 300 /- ";
        cout<<" \n \t\t\t [5] American Burger                 : RS. 400 /- ";
        cout<<" \n \t\t\t [6] Cheese Shandwich                : RS. 140 /- ";
        cout<<" \n \t\t\t [7] Italian Cheese Pizza            : RS. 210 /- \n";
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
        case 7: 
            a.item7();
            
            break;

        case 0: 
           break;
        }

      } while (choice!=0);


            a.showinformation();
            a.Show_Net_Bill();

}