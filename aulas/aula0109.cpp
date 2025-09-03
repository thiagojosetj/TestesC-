#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

//------------------------------------------------------------------

    pair<int, int> v1, v2;
    
    v1 = make_pair(10, 20);
    v2 = make_pair(30, 40);

    if(v1 > v2) //equivale a v1.first > v2.first
        cout << "V1 eh maior que V2" << endl;
    else
        printf("V2 >= V1\n");

//------------------------------------------------------------------

    vector<int> ar = {1, 2, 3, 4, 5};
    vector<int>::iterator ptr;

    printf("The vector elements are: ");
    for(ptr = ar.begin(); ptr < ar.end(); ptr++)
        printf("%d ", *ptr);
    printf("\n");

//------------------------------------------------------------------

    vector<int> v = {1, 3, 3 , 5, 7};

    for(auto it = v.begin(); it < v.end(); it++)
        printf("%d ", *it);
    printf("\n");

    //------------------------------------------------------------------

    for(int x : v){
        cout << x << endl;
    }

    //------------------------------------------------------------------

    auto it =lower_bound(v.begin(), v.end(), 3); //retorna o endereco do primeiro elemento >= 3
    cout << *it << endl;

    //------------------------------------------------------------------
    //quantas vezes um numero aparece num vetor ordenado

    int count = upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x);

    //------------------------------------------------------------------    

    return 0;
}