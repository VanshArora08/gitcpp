int factorial(int n) {
    cout << n << endl;
    if (n==0) {
        return 1;
    }
    int smalloutput = factorial(n-1);
    return n * smalloutput;
}

int main() {
    int n;
    cin >> n;
    int output = factorial(n);
    cout << output << endl;
}

//or

int factorial(int n) {
    if (n==0) {
        return 1;
    }
    int smalloutput = factorial(n-1);
    int output = n * smalloutput;
    return output;
}

int main() { 
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}             


