#include <iostream>
#include <string>

#include "CellPhone.h"
using namespace std;



int main()
{
    string answer;
    do{  // if user didn't type in  exactly "yes" or "no", loop the program.
        cout << "Hello User.Would you like to turn on this cell phone?(please enter yes/no!!)" << endl;
        CellPhone user ;
//        Contact *a = user.getContacts();
//        Contact b;

        cin>>answer;
        if(answer=="no"){
            cout<<"Thank you! Please restart the program when you wish to user the device."<< endl<< endl;
            return 0; // End program
        }
        if(answer=="yes"){
        bool counter=true;
        do{
            cout << "--------------------------------" << endl;
            cout << "A. Turn off Cell Phone.         |" << endl;
            cout << "B. Add A New Contact.           |" << endl;
            cout << "C. Display Contact Information. |" << endl;
            cout << "D. Dial Contact                 |" << endl;
            cout << "--------------------------------" << endl;
            string dochice;
            cin>>dochice;


            if(dochice=="a" ||dochice=="A"){

                user.powerDown();
                counter=false;

            }else if(dochice=="b" ||dochice=="B"){

                string firstname;
                string lastname;
                string homenumber;
                string mobilenumber;
                cout<<"please enter the first name"<<endl;
                cin>>firstname;
                cout<<"please enter the last name"<<endl;
                cin>>lastname;

                cout<<"please enter the home number"<<endl;
                cin>>homenumber;
                cout<<"please enter the mobile number"<<endl;
                cin>>mobilenumber;
                user.newContact(firstname,lastname,homenumber,mobilenumber);


            }else if(dochice=="c" ||dochice=="C"){

                 cout<<"please enter the number of contact"<<endl;
                string num;
                cin>>num;
                user.displayContactNumberInformation(num);

            }else if(dochice=="d" ||dochice=="D"){

                string firstname;
                string lastname;
                cout<<"please enter the first name"<<endl;
                cin>>firstname;
                cout<<"please enter the last name"<<endl;
                cin>>lastname;
                user.dialContact(firstname,lastname);

            }
        }while(counter);
        }
    }while( answer!="no" );
    return 0;
}
