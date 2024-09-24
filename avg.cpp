#include <iostream>
using namespace std;

int main()
{

int n,sum=0,count=0,total;
while (count!=-1)
{
   cin>>n;
   if(n>0){
   sum = n + sum;
   count++;
   total=count;
   }else{
    count = -1;
   }
}
cout<<sum<<total;
    return 0;
}
