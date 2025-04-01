#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double** DimArray=nullptr;
    int row, col;
    cout<<"Enter number of rows and columns(MUST NOT EXCEED 3): ";
    cin>>row>>col;
    if(row>3||col>3)
    {
        cout<<"Number of rows or columns must not exceed 3 \n"<<"Please enter again";

    }
    else{
DimArray=new double*[row];
for(int i=0; i<row; i++)
DimArray[i]=new double[col];
    }
    double value=2;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            DimArray[i][j]=value;
            value*=2;
        }
    }
for(int i=0; i<row; i++){
    for(int j =0; j<col; j++){
        cout<<setw(5)<<DimArray[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}