#include <iostream>
#include <math.h>
using namespace std;
void nhap(int a[], int &n);
void xuat(int a[], int n);
int ktnt(int x);
int sophantu(int a[], int n);
int main()
{
    int a[100], n, m;
    cout<<"Nhap so phan tu "; cin>>n;
    nhap(a,n);
    cout<<"Xuat\n";
    xuat(a,n);
    cout<<endl;
    cout<<"Cac so nguyen to trong mang: ";
    sophantu(a,n);
}
void nhap(int a[], int &n)
{
    for (int i=0; i<n; i++)
    {
        cout<<"A["<<i<<"]= "; cin>>a[i];
    }
}
void xuat(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
int ktnt(int x)
{
    if (x<2) 
        return 0;
    for (int i=2; i<=sqrt(x); i++) 
        if (x%i==0) 
            return 0;
    return 1;
}
int sophantu(int a[], int n)
{
    for (int i=0; i<n; i++)
    if (ktnt(a[i])) cout<<a[i]<<" ";
}
