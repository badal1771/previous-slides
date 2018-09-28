#include <iostream>
using namespace std ;
int main()
{
    //pri define principle ,rate detremine intersetand time define time interval
    float pri,rate,time,interest,amount;
    cout<<"give principle amount taken :";
    cin>>pri;
    cout<<"give rate at which it is taken";
    cin>>rate;
    cout<<"give time period :";
    cin>>time;
    interest=(pri*rate*time)/100;
    amount=pri*(1+((rate*time)/100));
    cout<<"the interest amount : "<<interest<<"\n";
    cout<<"the amount to be given "<<amount<<"\n";
    return 0;
}
