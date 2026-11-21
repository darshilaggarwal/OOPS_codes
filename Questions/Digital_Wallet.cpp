#include <iostream>
using namespace std;
#include <string>

class DigitalWallet {
private:    
    string ownerName;
    double balance;

public:
    DigitalWallet(string name , double initialBalance){

        ownerName = name;
        balance = initialBalance;
        
    }

    //mutator - bcoz its accessing private variable balance
    bool deposit(double amount){
        if (amount>0){
            balance+=amount;
            cout << "Deposit successful" << amount << endl;
            return true;
        }
        cout << "Deposit amount should be positive\n";
        return false;

    }
    
  //mutator - bcoz its accessing private variable balance
    bool withdraw(double amount){

        if (amount<=0){
            cout<<"Withdrawl amount should be positive";
            return false;
        }
        if (amount> balance){
            cout<<"Insufficient funds !!";
            return false;
        }
        balance -= amount;
        cout << "successfully withdrawl " << amount << endl;  
        return true;
    }

    // accessor 
    double getBalance(){
        return balance;
    }
 
    void displayStatus (){
        cout << "\n---- Wallet summary --- " << endl;
        cout << "Owner " << ownerName << endl;
        cout << "balance " << balance << endl;
        cout << "--------------------------\n" << endl;

    }


};

int main(){
    DigitalWallet wallet("Andrew",1000);

    wallet.deposit(100);
    wallet.withdraw(500);
    wallet.displayStatus();

    wallet.deposit(-100);


}