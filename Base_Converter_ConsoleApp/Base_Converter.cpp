#include <iostream>
#include <cmath>
using namespace std;
//Function prototype
int BinarytoDecimal(int n);
int DecimaltoBinary(int n);
int BinarytoOctal(int n);
int OctaltoBinary(int n);
int DecimaltoOctal(int n);
int OctaltoDecimal(int n);

int main(){
    char decision;
    do{
    cout<<"What do you want to do?"<<endl;
    cout<<"1-Convert Binary number to Decimal"<<endl;
    cout<<"2-Convert Decimal number to Binary"<<endl;
    cout<<"3-Convert Binary number to Octal"<<endl;
    cout<<"4-Convert Octal number to Binary"<<endl;
    cout<<"5-Convert Decimal number to Octal"<<endl;
    cout<<"6-Convert Octal number to Decimal"<<endl;
    cout<<endl;
    cout<<"Enter your choice"<<endl;
    int choice;
    cin>>choice;
    //Function call inside the if statements
    if(choice==1){
        int n;
 cout<<"Enter a binary number"<<endl;
 cin>>n;
 cout<<n<<" in binary = "<<BinarytoDecimal(n)<<" in decimal"<<endl;
    }
    if(choice==2){
        int n;
        cout<<"Enter a decimal number"<<endl;
        cin>>n;
        cout<<n<<" in decimal = "<<DecimaltoBinary(n)<<" in binary"<<endl;
    }
    if(choice==3){
        int n;
        cout<<"Enter a binary number"<<endl;
        cin>>n;
        cout<<n<<" in binary = "<<BinarytoOctal(n)<<" in octal"<<endl;
    }
    if(choice==4){
        int n;
        cout<<"Enter an octal number"<<endl;
        cin>>n;
        cout<<n<<" in octal = "<<OctaltoBinary(n)<<" in binary"<<endl;
    }
    if(choice==5){
        int n;
        cout<<"Enter a decimal number"<<endl;
        cin>>n;
        cout<<n<<" in decimal = "<<DecimaltoOctal(n)<<" in octal"<<endl;
    }
    if(choice==6){
        int n;
        cout<<"Enter an octal number"<<endl;
        cin>>n;
        cout<<n<<" in octal = "<<OctaltoDecimal(n)<<" in decimal"<<endl;
    }
    cout<<"Do you want to try again. Enter Y/y for yes and any other character to exit"<<endl;
    cin>>decision;
    }while(decision=='y'|| decision=='Y');
system("pause");
return 0;
}

//Function headerline and body
int BinarytoDecimal(int n){
    int decimal=0, i=0, remainder;
    while(n!=0){
        remainder=n%10;
        n/=10;
        decimal+=remainder*pow(2,i);
        ++i;
    }
    return decimal;
}

int DecimaltoBinary(int n){
    int binary=0, remainder, i=1;
    int step=1;
while(n!=0){
    remainder=n%2;
    cout<<"Step "<<step++<<":"<<n<<"/2, Remainder = "<< remainder<<", Quotient= "<<n/2<<endl;
    n/=2;
    binary+=remainder*i;
    i*=10;
}
return binary;
}

int BinarytoOctal(int n){
    int octal=0, decimal=0, i=0, remainder;
    while(n!=0){
        decimal+=(n%10)*pow(2,i);
        ++i;
        n/=10;
    }
    i=1;
    while(decimal!=0){
        octal+=(decimal%8)*i;
        decimal/=8;
        i*=10;
    }
    return octal;
}

int OctaltoBinary(int n){
     int decimal=0, i=0, binary=0;
    int step=1;
while(n!=0){
    decimal+=(n%10)*pow(8,i);
    ++i;
    n/=10;
}
i=1;
while(decimal!=0){
    binary+=(decimal%2)*i;
    decimal/=2;
    i*=10;
}
return binary;
}
int DecimaltoOctal(int n){
int octal=0, remainder, i=1;
while(n!=0){
    remainder=n%8;
    n/=8;
    octal+=remainder*i;
    i*=10;
}
return octal;
}

int OctaltoDecimal(int n){
    int decimal=0, i=0, remainder;
    while(n!=0){
        remainder=n%10;
        n/=10;
        decimal+=remainder*pow(8,i);
        ++i;
    }
    return decimal;
}