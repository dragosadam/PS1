#include <iostream>

using namespace std;

void baza2(int n)
{
    int k=0, r[1000],i;
    while(n!=0)
    {
        k++;
        r[k]=n%2;
        n=n/2;
    }

      for(i=k;i>=1;i--) cout<<r[i];
}

void baza8(int n)
{
    int k=0, r[1000], i;
    while(n!=0)
    {
        k++;
        r[k]=n%8;
        n=n/8;
    }

      for(i=k;i>=1;i--) cout<<r[i];
}

void baza16(int n)
{
     int k=0, r[1000], i;
    while(n!=0)
    {
        k++;
        r[k]=n%16;
        n=n/16;
    }
    for(i=k;i>=1;i--)
      if(r[i]<10)cout<<r[i];
           else
           {
               if(r[i]==10)cout<<'A';
               if(r[i]==11)cout<<'B';
               if(r[i]==12)cout<<'C';
               if(r[i]==13)cout<<'D';
               if(r[i]==14)cout<<'E';
               if(r[i]==15)cout<<'F';
           }

}

int main()
{
    int nr,opt;

     do
    {
        cout<<endl;
        cout<<"Dati un numar : ";
        cin>>nr;
        cout<<endl;

        cout<<"1.Transformare in baza 2 "<<endl;
        cout<<"2.Transformare in baza 8 "<<endl;
        cout<<"3.Transformare in baza 16 "<<endl;
        cout<<"0.Iesire"<<endl;
        cout<<"Optiunea dvs: ";

        cin>>opt;
        switch(opt)
        {
        case 1:
            baza2(nr);
            break;
        case 2:
            baza8(nr);
            break;
        case 3:
            baza16(nr);
            break;
        case 0:
            return 0;
        default:
            cout<<"Aceasta optiune nu exista !"<<endl;
            break;
        }
    }while(1);

    return 0;
}
