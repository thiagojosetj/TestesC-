#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {

    int t = 0;
    string choiceShel, choiceRaj;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        
        cin >> choiceShel;
        cin >> choiceRaj;
        
        transform(choiceShel.begin(), choiceShel.end(), choiceShel.begin(), ::tolower);
        transform(choiceRaj.begin(), choiceRaj.end(), choiceRaj.begin(), ::tolower);
        
        if(choiceShel == "tesoura") {
            if(choiceRaj == choiceShel){
                cout << "Caso #" << (i+1) << ": De novo!" << endl; 
            }else if(choiceRaj == "papel" || choiceRaj == "lagarto"){
                cout << "Caso #" << (i+1) << ": Bazinga!" << endl;
            }else{
                cout << "Caso #" << (i+1) << ": Raj trapaceou!" << endl;
            }
        }
        if(choiceShel == "pedra") {
            if(choiceRaj == choiceShel){
                cout << "Caso #" << (i+1) << ": De novo!" << endl; 
            }else if(choiceRaj == "tesoura" || choiceRaj == "lagarto"){
                cout << "Caso #" << (i+1) << ": Bazinga!" << endl;
            }else{
                cout << "Caso #" << (i+1) << ": Raj trapaceou!" << endl;
            }
        }
        if(choiceShel == "papel") {
            if(choiceRaj == choiceShel){
                cout << "Caso #" << (i+1) << ": De novo!" << endl; 
            }else if(choiceRaj == "pedra" || choiceRaj == "spock"){
                cout << "Caso #" << (i+1) << ": Bazinga!" << endl;
            }else{
                cout << "Caso #" << (i+1) << ": Raj trapaceou!" << endl;
            }
        }
        if(choiceShel == "spock") {
            if(choiceRaj == choiceShel){
                cout << "Caso #" << (i+1) << ": De novo!" << endl; 
            }else if(choiceRaj == "tesoura" || choiceRaj == "pedra"){
                cout << "Caso #" << (i+1) << ": Bazinga!" << endl;
            }else{
                cout << "Caso #" << (i+1) << ": Raj trapaceou!" << endl;
            }
        }
        if(choiceShel == "lagarto") {
            if(choiceRaj == choiceShel){
                cout << "Caso #" << (i+1) << ": De novo!" << endl; 
            }else if(choiceRaj == "papel" || choiceRaj == "spock"){
                cout << "Caso #" << (i+1) << ": Bazinga!" << endl;
            }else{
                cout << "Caso #" << (i+1) << ": Raj trapaceou!" << endl;
            }
        }
    }
    
    return 0;
}