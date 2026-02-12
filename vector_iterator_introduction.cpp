#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    //iterator is basically pointer which represents address, so we have to derefernce the iterator in order to print them
    vector <int>::iterator start, end;
    start = v.begin();
    cout << *start << endl; //print first element of the vector
    // int start = *v.begin(); 
    end = v.end() - 1;
    cout << *end << endl;   //print last element of the vector
    // int start = *v.end() - 1; 

    //print all elements of the array using iterator
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }

    //same shits
    next(it) == v.begin() + 1;
    prev(it) == v.begin() - 1;


    // reverse iterators
    v.rbegin() == v.end() - 1;
    v.rend() == v.begin() - 1;
    // in reverse increment == decrement and vice~versa
}