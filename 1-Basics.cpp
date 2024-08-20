#include<iostream>
using namespace std;
int main(){

    string greet = "Hello World \n";
    cout << greet;


   // =========================== Taking input from user
    // int amount;
    // cout<<"Enter the amount ";
    // cin >> amount;  
    //  cout<<"Amount is "<<amount<<"\n";

    // =========================== if/else
    int num = 190;
    if (num == 100)
    {
      cout<<"Number is 100 \n";

    }
    else if(num > 100){cout<<"Number is greater than 100 \n";}
    else{
cout<<"Number is not 100 \n";
    }

    // =========================== loops

    for (int i = 0; i <= 3; i++)
    {
        cout<<"This is "<<i<<" time \n";
    }
    // While & do-while.....
    
    
    return 0;
}