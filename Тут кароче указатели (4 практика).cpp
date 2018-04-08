#include <iostream>

using namespace std;


int main()
{
    int n;
    cin >> n;
    double *peremen = new double [n];
    for (int i = 0; i < n; i++) {
        cout << "Input " << i+1 <<"st element: ";
        cin >> peremen[i];
    }
    for (int i = 0; i < n; i++) {
        cout << peremen [i] << endl;
    }
    delete [] peremen;

}
