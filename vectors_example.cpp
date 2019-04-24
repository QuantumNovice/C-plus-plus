/******************************************************************************

Author:Has

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

template <typename vectors>
void print_vector(vectors vector_array){
    /*
    * This functions print vectors of any type.
    */
    for (int i=0; i < vector_array.size(); i++){
            cout<< vector_array[i] << '\n';
        }
}

int main()
{   
    vector <string> users;
    string name;
    while (true){
        cout<< "What is your name << ";
        cin >> name;
        users.push_back(name);
        cout << "List of Names" << '\n' << "=============" << '\n';
        print_vector(users);
    }
    
    return 0;
}
