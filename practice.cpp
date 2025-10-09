#include <iostream>
// #include <algorithm>

// using namespace std;

// // int main()
// // {
// //     cout<<"Hello World";

// //     return 0;
// // }

// namespace test{
//     // void Greet(){
//     //     std::cout << "Hey There!";
//     // }
    
//     void NumSwap(int a, int b){
//         int c;
//         c=a;
//         a=b;
//         b=c;
//         // a=a+b;
//         // b=a-b;
//         // a=a-b;
//         cout << "Swapped Numbers: " << a << " " << b;
//     }
// }

// // using namespace test;

// int main(){
//     // cout << "Hello from std.";
//     // Greet();
//     int a,b;
//     cin >> a >> b;
//     test::NumSwap(a,b);
    
// }

// void large2(int a, int b,int){
//     int a,b,c;
//     int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
//     int secondmax = (a > b) ? ((a > c) ? ((b>c) ? b:c ) : a) : ((b > c) ? ((a>c)? c:a ) : b);
//     std::cout << max << " " << secondmax;
    
// }

using namespace std;

void maxMin(){
    int arr[]={1,2,3,4,10,9,15,12};
    int min=INT_MAX, max=arr[0], SMax=arr[0], TMax=arr[0];

    for(int i=0; i<8; i++)
    {
        if(arr[i]<min)
            min=arr[i];

        if(arr[i]>max)
        {
            SMax=max;
            max=arr[i];
        }

        if(arr[i]<max && arr[i]>SMax)
        {
            TMax=SMax;
            SMax=arr[i];
        }

    }

    cout << "Minimum : " << min << endl;
    cout << "Maximum : " << max << endl;
    cout << "Second Maximum : " << SMax << endl;
    cout << "Third Maximum : " << TMax << endl;
}