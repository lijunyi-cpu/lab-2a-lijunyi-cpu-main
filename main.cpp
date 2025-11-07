/*Lab2A*/
/*Write codes description here*/
/*Name: Li Junyi*/
/*USM Email: lijunyi@student.usm.my*/
/*GitHub Username: lijunyi-usm*/
/*Matric No.: 24300324*/

#if __linux__                                           //DO NOT EDIT OR REMOVE
    #define CATCH_CONFIG_RUNNER                         //DO NOT EDIT OR REMOVE
    #include "catch.hpp"                                //DO NOT EDIT OR REMOVE
    int runCatchTests(int argc, char* const argv[]){    //DO NOT EDIT OR REMOVE
        return Catch::Session().run(argc, argv);}       //DO NOT EDIT OR REMOVE
#endif                                                  //DO NOT EDIT OR REMOVE

#include<iostream>

#include<iomanip>

#include<cmath>

using namespace std;

#include "main.hpp"                                     //Use this header file for all the functions' declaration
//Add any required header file(s)

int main(int argc, char* const argv[]){                 //DO NOT EDIT OR REMOVE
    #if __linux__                                       //DO NOT EDIT OR REMOVE
        return runCatchTests(argc, argv);               //DO NOT EDIT OR REMOVE
    #endif                                              //DO NOT EDIT OR REMOVE
                                                        //add and complete your codes after this line
    double a;
    double b;
    double c;
    cout << "What is the value of a?\n";
    cin >> a;
    cout << "What is the value of b?\n";
    cin >> b;
    cout << "What is the value of c?\n";
    cin >> c;
    double discriminant =  checkdiscriminant(a,b,c);
    if(discriminant > 0){
      double x1 = getplus(discriminant, a, b, c);
      double x2 = getminus(discriminant,a,b,c);
      cout << "The value of x is "<< x1 << "or "<< x2;
    }else if(discriminant==0){
        double x1 = getplus(discriminant, a, b, c);
        double x2 = getminus(discriminant,a,b,c);
        cout << "The value of x is "<< x1 << "or "<< x2; 
    }else if(discriminant<0){
        cout << "Complex solution";
    }
    return 0;
}

double checkdiscriminant(double a, double b, double c){
    double B=pow(b);
    return B-4*a*c;
}

double getplus(double discriminant, double a, double b, double c){
    double dis = sqrt(discriminant);
    return ((-b+dis)/2*a);
}

double getminus(double discriminant, double a, double b, double c){
    double dis = sqrt(discriminant);
    return ((-b-dis)/2*a);
}
double pow(double b);

double sqrt(double discriminant);
