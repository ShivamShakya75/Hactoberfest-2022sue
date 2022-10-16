#include<iostream>
using namespace std;

struct employee
{
    int eId;
    char favChar;
    float salary;
};

union money
{
    int rice;
    char car;
    float pounds;
};


int main(){
     struct employee harry;
     harry.eId = 1;
     harry.favChar = 'c';
     harry.salary = 1200;
     cout<<harry.eId<<endl;
     cout<<harry.favChar<<endl;
     cout<<harry.salary<<endl;

    union money m1;
    m1.rice = 23;
     m1.car = 'c';
     m1.pounds = 23000;
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;
    cout<<m1.pounds<<endl;

    enum Meal{breakfast,lunch,dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

return 0;
}

