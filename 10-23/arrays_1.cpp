#include <iostream>
using namespace std;


int main() {
    // declares an array of doubles, called scores
    // we're explicitly saying that it holds 5 things
    double scores[5]={100, 90, 99, 50.5, 40};

    // because we're explicitly providing those 5
    // things, you could also do:
    // double scores[]={100, 90, 99, 50, 40};

    for(int i = 0; i < 5; i++){
        cout<<scores[i]<<endl;
    }

    // compile using C++11 standard:
    // g++ -std=c++11 arrays_1.cpp -o arrays_1
    cout <<"Printing using the C++11 range-based for loop"<<endl;
    for(double item : scores){
        cout<<item<<endl;
    }
    
    double sum = 0;
    for(int i = 0; i< 5; i++){
        sum +=  scores[i];
    }
    cout<<"Size of scores : "<<sizeof(scores)<<endl;
    cout<<"Size of a double: "<<sizeof(double)<<endl;

    cout<< "Average midterm score is : "<< sum/(sizeof(scores)/sizeof(double))<<endl;

    return 0;
}