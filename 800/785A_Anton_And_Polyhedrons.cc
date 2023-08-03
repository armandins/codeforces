/* Arman Dindar Safa */

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, count{0}; 
    // number of shapes
    cin >> N;
    // vector to store shapes of string type
    vector<string> shapes(N);
    // take shape strings to store in each element
    for (string &x : shapes)
    {
        cin >> x;
    }

    // keep track of count value in range of the vector.
    for (int y = 0; y != N; y++)
    {
        if (shapes[y] == "Tetrahedron") count += 4;
        else if (shapes[y] == "Cube") count += 6;
        else if (shapes[y] == "Octahedron") count += 8;
        else if (shapes[y] == "Dodecahedron") count += 12;
        else if (shapes[y] == "Icosahedron") count += 20;
    }
    // print final count val.
    cout << count << "\n";
}