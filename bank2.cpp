#include<iostream>
#include<iomanip>
using namespace std;
class Account
{
    private:
 long long accNo;
int passWord;
double balance;
public :
Account(long long acc,int pass,double bal )
{
    accNo = acc;
    passWord= pass;
    balance = bal;
}
bool login(long long acc,int pass)
{
return (acc == accNo && pass == passWord);
}
void deposit(double bal)
{ if(bal<0)
    {
        cout<<"invalid amount";
    }
    else{balance += bal;
    cout<<"deposit successful --₹\n";
    cout<<"your current balance is : -/ ₹"<<balance<<'\n';
}
    
}
void withdraw(double bal)
{ if(bal<0)
    {
        cout<<"invalid amount";
    }
    else if(bal > balance){
        cout<<"insufficient balance :(";
    }
    else{ balance -= bal;
    cout<<"withdrawal successful --₹\n";
    cout<<"your current balance is : -/ ₹"<<balance<<'\n';
    }
}
   
void showbalance()
{
    cout<<"your current balance is -/ ₹"<<balance<<'\n';
}

};
int main()
{ 
    int choice;
    long long acc;
    int pass;
    double money;
    Account user1(1234567890,1234,9000);

 cout<<"=============================================\n";
 cout<<"============ INTERNATIONAL  BANK ============\n ";
 cout<<"=============================================\n";
 cout<<"WELLCOME TO OUR BANK\n";
     cout<<"Enter Your Account Number:\n";
     cin>>acc;
     cout<<"Enter Your Password:\n-->";
     cin>>pass;
     if(!user1.login(acc,pass))
     {
        cout<<"wrong password";
        return 0;
     }
 cout<<"login successfull !";
 do{
    cout<<"ENTER YOUR CHOICE\n";
    cout<<"1.Deposit Money -----> ₹\n";
    cout<<"2.WithDraw Money-----> ₹\n";
    cout<<"3.Show your Balance--> ₹\n";
    cout<<"4.Exit\n-->";
    cin>>choice;
 
 switch (choice)
 {
 case 1:
 cout<<"enter amount to deposit \n -->₹";
 cin>>money;
 user1.deposit(money);
    break;
    case 2:cout<<"enter amount to withdraw \n -->";
 cin>>money;
user1.withdraw(money);
  break;
    case 3:
   user1.showbalance();
    break;
    case 4:
    cout<<"thanks for visiting";
 default:
 cout<<"invalid choice"; 
 }
}while (choice !=4);
 return 0;
}