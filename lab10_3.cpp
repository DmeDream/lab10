#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    float N=0,mean,sumx=0,sumsqx=0,SD;
    ifstream source("score.txt");
    string textline;
        while(getline(source,textline)){
            sumx += atof(textline.c_str());
            sumsqx += pow(atof(textline.c_str()),2);
            N++ ;
        }
    source.close();
    mean = (1/N)*sumx;
    SD = sqrt(((1/N)*sumsqx)-pow(mean,2));
    cout << "Number of data = "<< N << "\n" ; 
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << SD ;

}