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


/*x^n*/
int pow(int x, int n) {
    if (n == 0) {
        return 1;
    }    
    
    else if (n % 2 == 0) {
        return pow(x, n / 2) * pow(x, n / 2);     
    }
    
    else {
         return x * pow(x, n / 2) * pow(x, n / 2);
    }
       
    
int main() {
    int x, n;
    cin >> x;
    cin >> n;
    cout << pow(x, n) << endl;
}
