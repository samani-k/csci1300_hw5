#include <iostream>
#include <string>


using namespace std;

int totalGold(int donations[], int size){
    int total; 
   for (int i = 0; i < size; i++){
        total += donations [i];
   }
    return total; 
}

int main() {

    cout << "Enter the number of gold donations: ";
    int numgold_donations; 
    cin >> numgold_donations; 

    const int max_donations = 100;
    int amount_golddonations[max_donations]; 
    
    for (int i=0; i < numgold_donations; i++){
        cout << "Enter gold donation " << i + 1 << ": "; 
        cin >> amount_golddonations [i]; 
    }


    cout << "--- Vault Funding ---"<< endl;
    int total_Gold = totalGold (amount_golddonations, numgold_donations); 
    cout << "Total gold donated: " << total_Gold << endl; 
    int vaultgoal = 42500; 
    cout << "Vault goal: " << vaultgoal << endl; 
    
    if (total_Gold >= vaultgoal){
        cout << "The Vault is fully funded! Surplus: 2500 gold" << endl;
    }
    else {
        cout << "The vault still needs " << vaultgoal - total_Gold << endl; 
    }
    return 0;
}