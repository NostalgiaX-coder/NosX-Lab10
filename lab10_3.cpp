#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>


using namespace std;

int main(){
    
    int count = 0;
    float sum = 0;
    float sumsqr = 0;
    string textline;
    ifstream source;
    source.open("score.txt");
    while(getline(source,textline)){
        sum += stof(textline);
        sumsqr += pow(stof(textline),2);
        count++;
    }
    
    
    cout << "Number of data = " << count <<endl;
    cout << setprecision(3);
    cout << "Mean = " << (1.0/count)*sum <<endl;
    cout << "Standard deviation = " << sqrt(((1.0/count)*sumsqr)-pow((1.0/count)*sum,2));
}