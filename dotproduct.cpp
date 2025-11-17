#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<double> A = {1.0, 2.0, 3.0};
    vector<double> B = {4.0, 5.0, 6.0};


    if (A.size() != B.size()) {
        cout << "Error: Vector sizes do not match.\n";
        return 1;
    }

    double dot = 0.0;


    for (size_t i = 0; i < A.size(); i++) {
        dot += (A[i] * B[i]);
    }
	//result of the dot product
    cout << "Dot product = " << dot << endl;

    return 0;
}

