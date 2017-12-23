#include "CellPhone.h"

//getter
string CellPhone:: getDisplay(){
    return this->display;
}
bool CellPhone:: getOn(){
    return this->on;
}
string CellPhone:: getCurrentCall(){
    return this->currentCall;
}
bool CellPhone:: getCallActive(){
    return this->callActive;
}
Contact* CellPhone:: getContacts(){
    return contacts;
}
int CellPhone:: getContactsLength(){
    return contactsLength;
}
//setter
void CellPhone:: setDisplay(string display){
     this->display=display;
}
void CellPhone:: setOn(bool on){
     this->on=on;
}
void CellPhone:: setCurrentCall(string currentCall){
     this->currentCall=currentCall;
}
void CellPhone:: setCallActive(bool callActive){
     this->callActive=callActive;
}
void CellPhone:: setContactsLength(int lenth){
     this->contactsLength=lenth;
}

 //private member functions

CellPhone::CellPhone(){
    contactsLength=0;
    on =true;
}

int CellPhone:: contactCount(){
    return contactsLength;
}

void CellPhone:: showOutput(){
    cout<<getDisplay();
}

void CellPhone:: powerDown(){
    setOn(false);
    setDisplay("This device has been powered off!!!\n");
     showOutput();
}


//public member functions
bool CellPhone:: newContact(string firstname,string lastname,string homephone,string mobilenumber){
    if(contactsLength==100){
        return false;
    }
    Contact *person = this->getContacts();
    person[contactsLength].firstName=firstname;

    person[contactsLength].lastName=lastname;

    person[contactsLength].honeNumber=homephone;

    person[contactsLength].mobileNumber=mobilenumber;

    contactsLength++;

    return true;
}
void CellPhone:: dialContact(string firstname,string lastname){
    if(contactsLength==0){
        cout<<"There is no contact information!!!"<<endl;
        return ;
    }
    bool flag= true;
    Contact *person = this->getContacts();
    for(int i=0;i<contactsLength;i++){
            if(person[i].firstName==firstname && person[i].lastName==lastname){
                    flag = false;
                    cout<<"would you dial 1).the home contact number or \n 2).the mobile contact number(press 1 or 2 for choice)"<<endl;
                    int choice ;
                    cin>>choice;
                    if(choice==1){
                        currentCall = person[i].honeNumber;
                        cout<<"Your are calling to person:"<<endl;
                        displayContactNumberInformation(currentCall);
                        return ;
                    }
                    if(choice==2){
                        currentCall =  person[i].mobileNumber;
                        cout<<"Your are calling to person:"<<endl;
                        displayContactNumberInformation(currentCall);
                        return ;
                    }

            }

    }
    if(flag){
        cout<<"Can not find the Contact number!!" <<endl;
    }
}
void CellPhone:: displayContactNumberInformation(string num){
     bool flag= true;
    Contact *person = this->getContacts();
    if(contactsLength==0){
            flag=false;
        cout<<"Contact information is empty!!!"<<endl;
    }
    for(int i=0;i<contactsLength;i++){
            if(person[i].mobileNumber==num || person[i].honeNumber==num){
                    flag=false;
                display= "First Name: " + person[i].firstName+"\n" + "Last Name: " +person[i].lastName +"\n";
                callActive=false;
                showOutput();
            }
    }
    if(flag){
        cout<<"Can not find the Contact number!!" <<endl;
    }
}




