#include <bits/stdc++.h>
using namespace std;
int main()
{
    // notes we have is 2000,500,200,100
    int amt, temp;
    bool ans=true;
    int ct1 = 0, ct2 = 0, ct3 = 0, ct4 = 0;
   
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "\n\t enter the note amount : ";
        cin >> arr[i];
    }
    cout << "\n\t Enter the amount : ";
    cin >> amt;
    temp = amt;
    cout<<endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<arr[i]<<" ";

    // }
    cout<<endl;


    while (amt)
    {

        if (amt > 2000 && arr[0]!=0)
        {
            int x = amt / 2000;
            if(arr[0]>=x){
            amt=amt-x*2000;
            arr[0]-=x;
            ct1 += x;
            }
            else{
                amt=amt-arr[0]*2000;
                ct1+=arr[0];
                arr[0]=0;
            }
            
            
        }
        if (amt > 500 && arr[1]!=0)
        {
            int x = amt / 500;
            if(arr[1]>=x){
            amt=amt-x*500;
            arr[1]-=x;
            ct2 += x;
            }
            else{
                amt=amt-arr[1]*500;
                ct2+=arr[1];
                arr[1]=0;
            }
        }
        if (amt > 200 && arr[2]!=0)
        {
           int x = amt / 200;
            if(arr[2]>=x){
            amt=amt-x*200;
            arr[2]-=x;
            ct3+= x;
            }
            else{
                amt=amt-arr[2]*200;
                ct3+=arr[2];
                arr[2]=0;
            }
        }
        if (amt >= 100 && arr[3]!=0)
        {
            int x = amt / 100;
            if(arr[3]>=x){
            amt=amt-x*100;
            arr[3]-=x;
            ct4 += x;
            }
            else{
                amt=amt-arr[3]*100;
                ct4+=arr[3];
                arr[3]=0;
            }
        }

        if(arr[0]==0 && arr[1]==0 && arr[2]==0 && arr[3]==0 && amt!=0){


            cout<<"\n currently amount is unavailabe !!!";
            ans=false;
            break;
        }
    }
    if(ans){
    cout << "\n\t Amount is ----> " << temp;
    cout << "\n\t 2000 count  is ----> " << ct1;
    cout << "\n\t 500 count  is ----> " << ct2;
    cout << "\n\t 200 count  is ----> " << ct3;
    cout << "\n\t 100 count  is ----> " << ct4;
    }

    return 0;
}