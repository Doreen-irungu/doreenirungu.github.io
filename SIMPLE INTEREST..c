/*
//C predifined functions/*
Author: Doreen Irungu 
egistration number:BSE-05-0153/2024
Date:16/02/2025
*/

#include <iostream>
#include <cmath>

using namespace std;

float addition(int x, int y){
  
int sum;	sum=x+y;
return sum;}

double simple_interest(float principle, float rate, float time){
float interest;interest = principle*rate*time;return interest;}

int main() {
int sum;
float interest;
sum = addition (5 , 10);
interest=simple_interest(1000.0,4.0,0.2);
cout<< "Sum: " <<sum<<endl;
cout<< "Simple Interest: " <<interest<<endl;
  
return 0;}
