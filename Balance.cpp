#include<iostream>
#include<iomanip>
using namespace std;
 
  void showBalance(double balance);
  double deposit();
  double withdraw(double balance);
 
 int main(){
     
     int choice = 0;
     double balance = 0;
     
     do{
         cout << "Enter your choice: \n";
         cout << "****************** \n";
         cout << "1. Show Balance \n";
         cout << "2. Deposit Money \n";
         cout << "3. Withdraw Money \n";
         cout << "4. Exit \n";
         cin >> choice;
     
         switch(choice){
             case 1: showBalance(balance);
             break;
             case 2: balance = balance+deposit();
                     showBalance(balance);
             break;
             case 3: balance =balance - withdraw(balance);
                     showBalance(balance);
             break;
             case 4: cout<< "Thanks for visiting. \n";
             break;
             default:
             cout<< "Invalid input. \n";
         }     
         }while(choice!=4);
         return 0;
 }
   void showBalance(double balance){
        cout << "Your balance is: $" << balance <<endl;
   }
   double deposit(){
       double amount=0;
       cout<< "Enter amount to deposit: ";  
       cin >> amount;
       if(amount>0){
           return amount;
       }
       else {
           cout << "That is invalid: ";
           return 0;
       }
   }
  
   double withdraw(double balance){
       double amount=0;
       cout << " Enter the amount to withdraw: ";
       cin >> amount;
       if(amount>balance){
           cout<< "Insufficient fund.";
       }
       else if(amount<0){
           cout<< "That's not valid amount: ";
       }
       else{
           return amount;
       }
       return 0;
   }