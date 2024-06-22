#include<iostream>
using namespace std;

float wt[20],pt[20],profit=0.0,y[20];
 int n,i,w,temp,j,u;
class fractional_knapsack
{
 public:
 void getdata()
 {
 cout<<"enter the max weight of the bag:"<<endl;
 cin>>w;
 cout<<"how many objects you want to store inside the bag:"<<endl;
 cin>>n;
 cout<<"enter the wt of the objects:\n";
  for(i=1;i<=n;i++)
  {
    cin>>wt[i];
  }
 cout<<"enter the profit of the objects:"<<endl;
  for(i=1;i<=n;i++)
   {
    cin>>pt[i];
   }
 }
 void sortdata()
{
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {
   if((pt[j]/wt[j])<(pt[j+1]/wt[j+1]))
   {
    temp=pt[j];
    pt[j]=pt[j+1];
    pt[j+1]=temp;
    temp=wt[j];
    wt[j]=wt[j+1];
    wt[j+1]=temp;
   }
  }
 }
}
 void calculation()
 {
  for(i=0;i<n;i++)
  y[i]=0.0;
  u=w;
   for(i=0;i<n;i++)
   {
    if(wt[i]>u)
    break;
    y[i]=1.0;
    u=u-wt[i];
   }
   if(i<n)
   y[i]=u/wt[i];
   for(i=0;i<n;i++)
   profit=profit+(pt[i]*y[i]);
}
 void displaydata()
 {
cout<<"-------------------------------------------\n";
cout<<"objectno  weigth profit\t\n";
cout<<"-----------------------------------------------\n";
   for(i=1;i<=n;i++)
   {
     cout<<i<<"\t"<<wt[i]<<"\t"<<pt[i]<<"\t"<<endl;
    }
cout<<"MAXIMUM PROFIT:"<<profit;
 }
};
int main()
{
  fractional_knapsack obj;
  obj.getdata();
  obj.sortdata();
  obj.calculation();
  obj.displaydata();
return 0;
}
