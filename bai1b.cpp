#include<iostream>
using namespace std;
void nhap(int a[], int &n){
    do{
        cout<<("Nhap n: ");
        cin>>n;
    }
    while(n<2||n>99);
    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
}
 
void xuat(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<"  "<<a[i];
    }
}
 
void chenX(int a[], int &n, int x, int k){
    n++;
     
    for(int i=n-1;i>k;i--)
        a[i]=a[i-1];    
     
    a[k]=x;
}
 
int main(){
    int a[100];
    int n, x,k;
    nhap(a,n);
    cout<<"\nNhap phan tu can chen: ";
    cin>>x;
    cout<<"Nhap vi tri can chen: ";
    cin>>k;
    chenX(a,n,x,k);
    cout<<"Mang sau khi chen: "<<endl;
    xuat(a,n);
    return 0;
}