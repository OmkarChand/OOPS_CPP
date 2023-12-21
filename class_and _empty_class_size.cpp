#include<bits/stdc++.h>
using namespace std;

class Hero{
    //propertise
    int health;
};

class Empty
{

};

int main()
{
    Hero h1;    // object initialization
    Empty e1; //size will be allocated only when object is created.
 
    cout << "size:" << sizeof(h1) << endl;
    cout << "size of empty class: " << sizeof(e1) << endl;
    return 0;
}