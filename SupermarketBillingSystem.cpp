#include<bits/stdc++.h>
#include<fstream>

using namespace std;

class shopping{
    private: 
        int pcode;    //'p' stands for product
        float price;
        float discount;
        string pname;

    public:
      void menu();
      void adminstrator();
      void buyer();
      void add();
      void edit();
      void remove();
      void list();
      void receipt();

};

void shopping :: menu(){
    m:
    int choice;
    string email;
    string password;

    cout<<"\t\t\t\t_______________________________\n";
    cout<<"\t\t\t\t                               \n";
    cout<<"\t\t\t\t     Super Market Main Men     \n";
    cout<<"\t\t\t\t                               \n";
    cout<<"\t\t\t\t_______________________________\n";
    cout<<"\t\t\t\t                               \n";
    cout<<"\t\t\t\t|  1. Administrator   |\n";
    cout<<"\t\t\t\t|                     |\n";
    cout<<"\t\t\t\t|  2. Buyer           |\n";
    cout<<"\t\t\t\t|                     |\n";
    cout<<"\t\t\t\t|  3. Exit            |\n";
    cout<<"\t\t\t\t                               \n";
    cout<<"\t\t\t\t Please Select!";

    switch (choice)
    {
    case 1:
        cout<<"\t\t\t Please Login \n";
        cout<<"\t\t\t Enter Email:  \n";
        cin>>email;

        cout<<"\t\t\t Password: \n";
        cin>>password;

        if(email = "robby@email.com" && password = "robby@123"){
            adminstrator();
        }
        else{
            cout<<"Invalid email/password";
        }
        break;

    case 2:
        buyer();
        break;

    case 3:
        exit(0);  //exit 0 means successful termination of the program
        break;

    default:
        cout<<"Please select from the given options";
        break;

    }

    goto m; //'goto' is a jump statement ; 'm' is a lebel

}

void shopping :: adminstrator(){

}