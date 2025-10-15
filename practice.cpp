#include <iostream>
#include <climits>
using namespace std;
int main()
{
    cout<<"Hello World";

    return 0;
}

namespace test{
    void Greet(){
        std::cout << "Hey There!";
    }
    
    // Swaps two integers and prints the swapped values.
    void NumSwap(int a, int b){
        int c;
        c=a;
        a=b;
        b=c;
        a=a+b;
        b=a-b;
        a=a-b;
        cout << "Swapped Numbers: " << a << " " << b;
    }
}

// Reads two integers from input and calls test::NumSwap to swap and print them.
int main(){
    int a,b;
    cin >> a >> b;
    test::NumSwap(a,b);
    
}

// Finds and prints the largest and second largest among three integers.
void large2(int a, int b,int){
    int a,b,c;
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    int secondmax = (a > b) ? ((a > c) ? ((b>c) ? b:c ) : a) : ((b > c) ? ((a>c)? c:a ) : b);
    std::cout << max << " " << secondmax;
    
}

// Finds and prints the minimum, maximum, second maximum, and third maximum in a fixed array.
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

// Calculates and prints the area of a circle given its radius.
void CircleArea(double r) {
    if (r < 0) {
        std::cout << "Invalid radius";
        return;
    }
    const double pi = 3.14159265358979323846;
    std::cout << (pi * r * r);
}

// Calculates and prints the perimeter of a rectangle given its length and width.
void RectanglePerimeter(double length, double width) {
    if (length < 0 || width < 0) {
        std::cout << "Invalid dimensions";
        return;
    }
    std::cout << 2 * (length + width);
}

// Calculates and prints the simple interest amount.
void SimpleInterest(double principal, double rate, int years) {
    if (principal < 0 || rate < 0 || years < 0) {
        std::cout << "Invalid inputs";
        return;
    }
    double r = rate / 100.0;
    double amount = principal * (1.0 + r * years);
    std::cout << amount;
}

// Calculates and prints the compound interest amount.
void CompoundInterest(double principal, double rate, int timesPerYear, int years) {
    if (principal < 0 || rate < 0 || timesPerYear <= 0 || years < 0) {
        std::cout << "Invalid inputs";
        return;
    }
    double r = rate / 100.0;
    double factor = 1.0 + r / timesPerYear;
    int periods = timesPerYear * years;
    double amount = principal;
    for (int i = 0; i < periods; ++i) {
        amount *= factor;
    }
    std::cout << amount;
}

// Converts Celsius temperature to Fahrenheit and prints the result.
void CelsiusToFahrenheit(double celsius) {
    std::cout << (celsius * 9.0 / 5.0 + 32.0);
}

// Prints all subarrays of arr1.
void printSubarrays(){
int arr1[3]={1,2,3};
int n = sizeof(arr1)/sizeof(arr1[0]);
    for(int k =0;k<n;k++){
        for(int i = k;i<n;i++){
            for(int j = k;j<=i;j++){
                std::cout << arr1[j];
            }
            std::cout << "\n";
        }
    }
}

// Finds and prints the maximum subarray sum of arr.
void maxSubarraySum(){
int arr[3]={1,2,3},maxsum=0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int k =0;k<n;k++){
        int sum = 0;
        for(int i = k;i<n;i++){
            sum+= arr[i];
            if(sum>maxsum) maxsum = sum;
            // std::cout << sum;
            // std::cout << "\n";
        }
    }
    std:: cout << maxsum;
}

// Finds and returns the first repeating element in arr.
int getfreq()
{
    int arr[] = {1,2,5,3,4,5,6};
    int max = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n;i++){
        if (max<arr[i]) max = arr[i];
    }
    int freq[max + 1];
    for(int i =0;i< n ;i++){
        freq[arr[i]] ++;
        if (freq[arr[i]] > 1){
            return arr[i];
        }
    }

    
	return 0;
}
// Student management class
class Student{
    public:
        string name;
        int year;
        
};

void getDetail(Student s){
    cout << s.name << " " << s.year <<"\n";
}
int main()
{
    Student s1;
    s1.name = "X";
    s1.year = 1;
    
    Student s2;
    s2.name = "Y";
    s2.year = 2;
    
    Student s3;
    s3.name = "Z";
    s3.year = 3;
    
    getDetail(s1);
    getDetail(s2);
    return 0;
}
// Sorts an array using bubble sort algorithm.

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Sorts an array using selection sort algorithm.
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}

