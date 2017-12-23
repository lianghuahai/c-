#include <iostream>
#include <string>
using namespace std;

#ifndef CELLPHONE_H
#define CELLPHONE_H
struct Contact{
    string firstName;
    string lastName;
    string honeNumber;
    string mobileNumber;
};

class CellPhone{

    // CellPhone(string,int,string,int );
    private : Contact contacts[100];
    private : string display;
    private : bool on;
    private : string currentCall;
    private : bool callActive;
    private : int contactsLength;
    //getter
    public : string getDisplay();
    public : bool getOn();
    public : string getCurrentCall();
    public : bool getCallActive();
    public : Contact* getContacts();
    public : int getContactsLength();
    //setter
    public : void setDisplay(string display);
    public : void setOn(bool on);
    public : void  setCurrentCall(string currentCall);
    public : void setCallActive(bool callActive);
    public : void  setContacts(Contact contacts);
    public : void  setContactsLength(int contacts);
    //private member functions
    private : int contactCount();
    private : void showOutput();
    public : CellPhone();

    //public member functions
    public : bool newContact(string,string,string,string);
    public : void dialContact(string,string);
    public : void displayContactNumberInformation(string);
    public : void powerDown();




};


#endif
