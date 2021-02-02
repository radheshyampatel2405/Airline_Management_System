#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

char l_destination[5][20]={"AHMEDABAD","CHENNAI","DELHI","HYDRABAD","BANGLORE"};
char i_destination[10][20]={"LONDON","BERLIN","DUBAI","NEW YORK","BEIJING","PARIS","CAPE TOWN","TOKYO","LOS ANGELES","MIAMI" };
class mytime
{
protected:
    int choose;
public:
    void getdata()
    {
          cout<<"\nON WHICH TIME YOU WANT TO TRAVEL"<<endl<<endl;
          cout<<"PRESS 1 FOR 11 AM"<<endl;
          cout<<"PRESS 2 FOR 10 AM"<<endl;
          cout<<"PRESS 3 FOR 9 AM"<<endl;
          cout<<"\nEnter your choice: ";
          cin>>choose;
    }
    void show()
    {
          if(choose==1)
          {
                cout<<"|                                                                         "<<endl;
                cout<<"|flight time 11 AM                                                        "<<endl;
                cout<<"|_________________________________________________________________________"<<endl;
                cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
          }
          if(choose==2)
          {
                cout<<"|                                                                         "<<endl;
                cout<<"|flight time 10 AM                                                        "<<endl;
                cout<<"|_________________________________________________________________________"<<endl;
                cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
          }
          if(choose==3)
          {
                cout<<"|                                                                         "<<endl;
                cout<<"|flight time 9 AM                                                        "<<endl;
                cout<<"|_________________________________________________________________________"<<endl;
                cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
          }
    }
};
class passenger
{
public:
    virtual void getdata()
        {
        }
    virtual void show()
        {
        }
};
class booking:public passenger  // SINGLE INHERITANCE
{
protected:
     int num,option,dd,mm,yyyy;
     char firstname[60],lastname[60],address[60],c_loc[30],dest[30],reservation_no[60];
public:
     void getdata()
     {
           cout<<setw(40)<<"\n\n     ::Please enter the required information for passenger::"<<endl;
           cout<<"\n\n\nEnter the firstname of passenger: ";
           cin>>firstname;

           cout<<endl<<"Enter the lastname of passenger: ";
           cin>>lastname;

           cout<<endl<<"Enter address of passenger:  ";
           cin>>address;

           cout<<endl<<"Enter the number of tickets: ";
           cin>>num;

           cout<<endl<<"Enter the current location of passenger(IN CAPITAL LETTERS ONLY):  ";
           cin>>c_loc;

           cout<<endl<<"Enter the destination of passenger(IN CAPITAL LETTERS ONLY):  ";
           cin>>dest;

           cout<<endl<<"Enter your date(dd/mm/yyyy): ";
           cin>>dd>>mm>>yyyy;
           system("CLS");
    }
    void show()
    {
        cout<<setw(40)<<"Your E-Ticket is :"<<endl;
        int t=1;
        int r=12345;
        cout<<"                           AIRLINE TICKET                                 "<<endl;
        cout<<"|Ticket No."<<t<<"                                Reference No."<<r<<"\t  "<<endl;
        cout<<"|_________________________________________________________________________"<<endl;
        cout<<"|Passenger Information :                                                  "<<endl;
        cout<<"|Name :"<<lastname<<" "<<firstname<<"                                     "<<endl;
        cout<<"|Address :"<<address<<"                                                   "<<endl;
        cout<<"|Number of tickets :"<<num<<"                                             "<<endl;
        cout<<"|_________________________________________________________________________"<<endl;
        cout<<"|flight Information :"<<endl;
        if(dd<0 || dd>31 || mm<0 || mm>12 || yyyy<0)
            {
                cout<<"|INVALID DATE.. ";
            }
        else
            {
        cout<<"|Date :"<<dd<<" "<<mm<<" "<<yyyy                                           <<endl;
            }
        cout<<endl;
        cout<<"|BOING 747                                                                "<<endl;
        cout<<"|_________________________________________________________________________"<<endl;
        cout<<"|Depart :"<<c_loc<<"                                                      "<<endl;
        cout<<"|Arrive :"<<dest<<"                                                       "<<endl;
        cout<<"|*BAGGAGE allowed 40 Kilos                                                "<<endl;
        cout<<"|*contact Airline to Confirm baggage allowance                            "<<endl;
        cout<<"|_________________________________________________________________________"<<endl;
        t=t+1;
        r=r+1;
    }
};

class search
{
public:
    void searching()
    {
        cout<<"FOLLOWING ARE THE INTERNATIONAL FLIGHTS AVAILABLE\n"<<endl;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<5;j++)
                {
                    cout<<"FLIGHT FROM "<<i_destination[i]<<" TO "<<l_destination[j]<<endl;
                }
        }
        cout<<"\n\nFOLLOWING ARE THE DOMESTIC FLIGHTS AVAILABLE\n"<<endl;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
                {
                    if(i!=j)
                    {
                    cout<<"FLIGHT FROM "<<l_destination[i]<<" TO "<<l_destination[j]<<endl;
                    }
                }
        }
    }
};
class local: public booking
{
protected:
    int b_seat;
    int e_seat;
    int ch;
    int k;
    int p;
    int option;
    mytime t1;
public:
    void getdata()
    {
        k=0;
        p=0;
        cout<<"\n                     In which AIRLINE you want to travel!! \n"<<endl;
        cout<<"1)AIR INDIA"<<endl;
        cout<<"2)INDIGO"<<endl;
        cout<<"3)GO AIR"<<endl;
        cout<<"4)JET AIRWAYS"<<endl;
        cout<<"\nEnter your choice: ";
        cin>>option;
        switch(option)
        {
            case 1:
                cout<<setw(40)<<"                        ******************************"<<endl;
                cout<<setw(40)<<"                        *    WELCOME TO AIR INDIA    *"<<endl;
                cout<<setw(40)<<"                        ******************************"<<endl;
            break;

            case 2:
                cout<<setw(40)<<"                        ******************************"<<endl;
                cout<<setw(40)<<"                        *      WELCOME TO INDIGO     *"<<endl;
                cout<<setw(40)<<"                        ******************************"<<endl;
            break;

            case 3:
                cout<<setw(40)<<"                        ******************************"<<endl;
                cout<<setw(40)<<"                        *      WELCOME TO GO AIR     *"<<endl;
                cout<<setw(40)<<"                        ******************************"<<endl;
            break;

            case 4:
                cout<<setw(40)<<"                        ******************************"<<endl;
                cout<<setw(40)<<"                        *    WELCOME TO JET AIRWAYS  *"<<endl;
                cout<<setw(40)<<"                        ******************************"<<endl;
            break;
        }

        cout<<setw(40)<<"\nTHESE ARE THE LOCAL PLACES AVAILABLE\n\n";
        for(int i=0;i<5;i++)
        {
            cout<<l_destination[i]<<endl;
        }
        booking::getdata();

        for(int j=0;j<5;j++)
        {
            if(strcmp(l_destination[j],c_loc)==0)
            {
                k++;
            }
        }
        if(k==1)
        {
            cout<<"\n\n                FLIGHT AVAILABLE ON THIS ROUTE"<<endl;
            b_seat=30;
            e_seat=40;
            cout<<"\n In which class you want to travel?"<<endl;
            cout<<"\n\n\n\n\n\n";
            cout<<setw(60)<<"*************************************"<<endl;
            cout<<setw(60)<<"*     Press 1 for buisness class    *"<<endl;
            cout<<setw(60)<<"*     Press 2 for economy class     *"<<endl;
            cout<<setw(60)<<"*************************************"<<endl<<endl<<endl<<endl;
            cout<<"\n Enter your choice: ";
            cin>>ch;
            cout<<endl;
            switch(ch)
            {
                case 1:
                    if(b_seat<=0)
                        cout<<"             SORRY NO SEAT AVAILABLE"<<endl;
                    else
                        cout<<"             SEAT AVAILABLE"<<endl;
                    break;

                case 2:
                    if(e_seat<=0)
                        cout<<"             SORRY NO SEAT AVAILABLE"<<endl;
                    else
                        cout<<"             SEAT AVAILABLE"<<endl;
                    break;
            }

            t1.getdata();
            booking::show();

            if(ch==1)
            {
                cout<<"|                                                                         "<<endl;
                cout<<"|Ticket Information:                                                      "<<endl;
                cout<<"|BUISNESS CLASS                                                           "<<endl;
            }
            if(ch==2)
            {
                cout<<"|                                                                         "<<endl;
                cout<<"|Ticket Information:                                                      "<<endl;
                cout<<"|ECONOMY CLASS                                                            "<<endl;
            }
            cout<<"|Status: confirmed                                                        "<<endl;
            t1.show();
        }
        else
        {
            cout<<"__________________________________________________________________________"<<endl;
            cout<<"|     SORRY NO FLIGHT AVAILABLE ON THIS ROUTE RIGHT NOW                   "<<endl;
            cout<<"__________________________________________________________________________"<<endl;
        }
    }
 };

class international:public booking
{
protected:
    int b1_seat,e1_seat,choice,c,b,v;
    mytime t1;
 public:
    void getdata()
    {
        b=0;
        v=0;
        cout<<"\n              In which AIRLINE you want to travel"<<endl<<endl;
        cout<<"1)AIR INDIA"<<endl;
        cout<<"2)LUFTHANSA"<<endl;
        cout<<"3)EMIRATES"<<endl;
        cout<<"4)ETIHAD AIRWAYS"<<endl;
        cout<<"\nEnter your choice: ";
        cin>>option;
        switch(option)
        {
            case 1:
                cout<<setw(40)<<"                        ******************************"<<endl;
                cout<<setw(40)<<"                        *     WELCOME TO AIR INDIA   *"<<endl;
                cout<<setw(40)<<"                        ******************************"<<endl;
            break;

            case 2:
                cout<<setw(40)<<"                        ******************************"<<endl;
                cout<<setw(40)<<"                        *     WELCOME TO LUFTHANSA   *"<<endl;
                cout<<setw(40)<<"                        ******************************"<<endl;
            break;

            case 3:
                cout<<setw(40)<<"                        ******************************"<<endl;
                cout<<setw(40)<<"                        *     WELCOME TO EMIRATES    *"<<endl;
                cout<<setw(40)<<"                        ******************************"<<endl;
            break;

            case 4:
                cout<<setw(40)<<"                        ******************************"<<endl;
                cout<<setw(40)<<"                        *  WELCOME TO ETIHAD AIRWAYS *"<<endl;
                cout<<setw(40)<<"                        ******************************"<<endl;
            break;
        }
        cout<<"\n\nTHESE ARE THE INTERNATIONAL PLACES AVAILABLE"<<endl<<endl;

        for(int i=0;i<10;i++)
        {
            cout<<i_destination[i]<<endl;
        }
        booking::getdata();

        for(int j=0;j<10;j++)
        {
            if(strcmp(i_destination[j],dest)==0)
            {
                v++;
            }
        }
        if(b==1)
        {
            cout<<" \n\n                  FLIGHT AVAILABLE ON THIS ROUTE"<<endl;
            b1_seat=30;
            e1_seat=40;
            cout<<"\n  In which class you want to travel?"<<endl;
            cout<<"\n\n\n\n\n\n";
            cout<<setw(60)<<"*************************************"<<endl;
            cout<<setw(60)<<"*     Press 1 for buisness class    *"<<endl;
            cout<<setw(60)<<"*     Press 2 for economy class     *"<<endl;
            cout<<setw(60)<<"*************************************"<<endl<<endl<<endl<<endl;
            cout<<"Enter your choice: ";
            cin>>choice;
            cout<<endl;
            switch(choice)
            {
            case 1:
                if(b1_seat<=0)
                    cout<<"            SORRY NO SEAT AVAILABLE"<<endl;
                else
                    cout<<"            SEAT AVAILABLE"<<endl;
                break;

            case 2:
                if(e1_seat<=0)
                    cout<<"             SORRY NO SEAT AVAILABLE"<<endl;
                else
                    cout<<"              SEAT AVAILABLE"<<endl;
                break;
            }

            t1.getdata();
            booking::show();

            if(choice==1)
            {
                cout<<"|                                                                         "<<endl;
                cout<<"|Ticket Information:                                                      "<<endl;
                cout<<"|BUISNESS CLASS                                                           "<<endl;
            }
            if(choice==2)
            {
                cout<<"|                                                                         "<<endl;
                cout<<"|Ticket Information:                                                      "<<endl;
                cout<<"|ECONOMY CLASS                                                           "<<endl;
            }
            cout<<"|Status: confirmed                                                        "<<endl;
            t1.show();
        }
        else
        {
            cout<<"__________________________________________________________________________"<<endl;
            cout<<"|     SORRY NO FLIGHT AVAILABLE ON THIS ROUTE RIGHT NOW                   "<<endl;
            cout<<"__________________________________________________________________________"<<endl;
        }
    }
};
class main1
{
private:
    int menu_choice;
public:
    void getdata()
    {
        m:
        cout<<"\n\n";
        cout<<setw(60)<<"*************************************"<<endl;
        cout<<setw(60)<<"*        AIRWAYS RESERVATION        *"<<endl;
        cout<<setw(60)<<"*             MAIN MENU             *"<<endl;
        cout<<setw(60)<<"*   PRESS 1 FOR LOCAL BOOKING       *"<<endl;
        cout<<setw(60)<<"* PRESS 2 FOR INTERNATIONAL BOOKING *"<<endl;
        cout<<setw(60)<<"*   PRESS 3 FOR SEARCH OF FLIGHTS   *"<<endl;
        cout<<setw(60)<<"*************************************"<<endl;
        cout<<"Enter your choice: ";
        cin>>menu_choice;

        passenger* p1;
        booking b1;
        international i1;
        local l1;
        char back;
        switch(menu_choice)
        {
            case 1:
                p1=&l1;
                p1->getdata();
                cout<<"\n\nTo Go To Main Menu Press b"<<endl;
                cin>>back;
                if (back=='b')
                {
                    goto m;
                }
                else
                {
                    cout<<"\n\n\n\n\n\n";
                    cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";
                }
                break;
            case 2:
                p1=&i1;
                p1->getdata();
                cout<<"\n\nTo Go To Main Menu Press b"<<endl;
                cin>>back;
                if (back=='b')
                {
                    goto m;
                }
                else
                {
                    cout<<"\n\n\n\n\n\n";
                    cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";
                }
                break;
            case 3:
                search s1;
                s1.searching();
                cout<<"\n\nTo Go To Main Menu Press b"<<endl;
                cin>>back;

                if (back=='b')
                {
                    goto m;
                }
                else
                {
                    cout<<"\n\n\n\n\n\n";
                    cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";
                }
                break;
        }
    }
};
int main()
{
    cout<<endl<<"\n\t\t     WELCOME TO AIRWAYS RESERVATION SYSTEM";
    cout<<"\n\n\n\t\t          Developed by :";
    cout<<" HARSHAD PATOLIYA(18DCE096) ";
    cout<<"\n\n\t\t                         MUSKAAN PIRANI(18DCE097)";
    cout<<"\n\n\t\t                         DHVANI PONKIA(18DCE098)";
    cout<<"\n\n\t\t                         SAUMYA RAVAL(18DCE103)";

    main1 m1;
    m1.getdata();
    return 0;
}
