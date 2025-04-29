#include <iostream> 
using namespace std; 

int main(){
    float usd, eur, jpy, gbp;
    char option; 

    cout <<"Please insert a the amount in dollars that you want to convert" << endl; 
    cin >> usd;
    
    cout <<"a. USD to EUR"<< endl; 
    cout <<"b. USD to JPY"<< endl;
    cout <<"c. USD to GBP"<< endl;
    cout << "option:"<< endl;
    cin >> option;

    switch (option)
    {
        case 'a': 
            eur = usd * 0.88;
            cout << usd << " is equivalent to " << eur << " euros."<< endl; 
        break; 
        case 'b': 
            jpy = usd * 142.04;
            cout << usd << " is equivalent to " << jpy << " japanese yen."<< endl;
            break;
        case 'c': 
            gbp = usd * 0.75; 
            cout << usd << " is equivalent to " << gbp << "british pounds." << endl; 
        default:
            cout <<"This is not a valid option"<<endl; 
    }

    return 0;
}
