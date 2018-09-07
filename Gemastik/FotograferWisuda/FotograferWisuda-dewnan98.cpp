#include <iostream>
#include <math.h>
using namespace std;


string fotograferWisuda(float a , float b , float k)
{
    string hasil="";


    float lakiMaksimalDempet = ceil( a/(b+1));
    float perempuanMaksimalDempet = ceil(b/(a+1));

    if(lakiMaksimalDempet>2 ||perempuanMaksimalDempet>k )
        return "mustahil";


    int laki = a;
    int pere = b;

    int counterLaki=0;
    int counterPerempuan =0;

    for(int i = 0 ;i<a+b;i++)
    {
       if(laki>0 && counterLaki<=2 &&  laki>pere ||counterPerempuan==k)
       {
            hasil+="L";
            laki--;
            counterLaki++;
            counterPerempuan=0;
       }


       else {
            hasil+="P";
            pere--;
            counterPerempuan++;
            counterLaki = 0;
       }



    }

    return hasil;

}

main()
{

    cout<<fotograferWisuda(0,4,4)<<endl;
    cout<<fotograferWisuda(0,4,3)<<endl;
    cout<<fotograferWisuda(1,3,3)<<endl;
    cout<<fotograferWisuda(3,3,3)<<endl;
    cout<<fotograferWisuda(5,8,2)<<endl;
    cout<<fotograferWisuda(5,6,1)<<endl;
    cout<<fotograferWisuda(6,4,1)<<endl;
    cout<<fotograferWisuda(12,12,1)<<endl;
}
