
// #include <iostream>
// using namespace std;
// int main()
// {
//     cout<<"first program"<<endl;
// };

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cout<<"Enter the first number: ";
//     cin>>a;
//     cout<<"Enter the second number: ";
//     cin>>b;
//     cout<<"the sum is "<<a+b<<endl;
//     return 0;
// };

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cout<<"Enter the numbers: ";
//     cin>>a>>b;
//     cout<<"the sum is "<<a+b<<endl;
//     return 0;
// };

// STORING ASCII DECIMAL OF A CHARACTER IN INTEGER VARIABLE
// SHOWCASING EXPLICIT TYPECASTING
// #include <iostream>
// using namespace std;
// int main()
// {
//     char a = 'a';
//     char b = 'b';
//     char A = 'A';
//     char B = 'B';
//     cout<<int(a)<<endl;
//     cout<<int(b)<<endl;
//     cout<<int(A)<<endl;
//     cout<<int(B)<<endl;
//     return 0;
// };

// STORING INTEGER INSIDE CHAR VARIABLE
// SHOWCASING IMPLICIT TYPECASTING
// #include <iostream>
// using namespace std;
// int main(){
//     char a = 65;
//     char b = 97;
//     cout<<a<<endl;
//     cout<<b<<endl;
// } ;

// TYPECASTING EXAMPLES
// #include <iostream>
// using namespace std;
// int main()
// {

//     // example 1
//     // int a = 10;
//     // char c = 'b';
//     // a = c;
//     // cout<<a;
//     // a stored the ascii decimal of b ie 98

//     // example 2
//     // int a = 76;
//     // char c = 'b';
//     // c = a;
//     // cout<<c<<endl;
//     // c stored the the character whose ascii decimal is 76

//     // example 3
//     // int a = 212342333;
//     // char c = 'b';
//     // c = a;
//     // cout<<c<<endl;
//     // c stored the the character whose ascii decimal is 76

// };

// IF ELSE CONDITIONALS
// #include <iostream>
// using namespace std;
// int main()
// {
//     int package = 12;
//     if(package>=12)
//     {
//         cout<<"placed"<<endl;
//     }
//     else
//     {
//         cout<<"not placed"<<endl;
//     };
// };

// CONSONANT OR VOWEL
// #include<iostream>
// using namespace std;
// int main(){
//     char a;
//     cin>>a;
//     if(a=='a' | a=='b' | a=='c' | a=='d' | a=='e' | a=='A' | a=='B' | a=='C' | a=='D' | a=='E')
//     {
//         cout<<"a is vowel"<<endl;
//     }
//     else
//     {
//         cout<<"a is consonant"<<endl;
//     };
//     return 0;
// };

// FOR LOOP
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 1; i<=10; i++)
//     {
//         cout<<i<<endl;
//     };
//     return 0;
// };

// PRINT FROM a TO z
// #include <iostream>
// using namespace std;
// int main()
// {
//     for(char i = 'A'; i<='Z'; i++)
//     {
//         cout<<i<<" ";
//     };
// };

// PRINT A RAISED TO B
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     int b;
//     cin>>a;
//     cin>>b;
//     int result = 1;
//     for(int i = 1; i<=b; i++)
//     {
//         result*=a;
//     };
//     cout<<result<<endl;
//     return 0;
// };

// FACTORIAL OF N
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     int result = 1;
//     if (n < 0)
//     {
//         cout << "Enter positive number" << endl;
//     }
//     else
//     {
//         if (n == 0)
//         {
//             result = 1;
//         }
//         for (int i = 1; i <= n; i++)
//         {
//             result *= i;
//         };
//         cout << result << endl;
//     };
// };











// PRIME OR NOT
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     if(n<0)
//     {
//         cout<<"Please enter a positive number"<<endl;
//     }
//     else if (n==0)
//     {
//         cout<<"composite"<<endl;
//     }
//     else if (n==1)
//     {
//         cout<<"neither prime not composite"<<endl;
//     }
//     else
//     {
//         bool prime = true;
//         for(int i = 2; i<n; i++)
//         {
//             if(n%i==0)
//             {
//                 prime = false;
//                 break;
//             }
//         };
//         if(prime)
//         {
//             cout<<"prime"<<endl;
//         }
//         else
//         {
//             cout<<"composite"<<endl;
//         };
//     };
//     return 0;
// };










// FIBONACCI SERIES
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     if(n<=0)
//     {
//         cout<<"Enter a positive number"<<endl;
//     }
//     else if (n==1 | n==2)
//     {
//         cout<<1<<endl;
//     }
//     else
//     {
//         int a = 1;
//         int b = 1;
//         for(int i = 3; i<=n; i++)
//         {
//             int c = a + b;
//             int temp = c;
//             a = b;
//             b = temp; 
//             cout<<b<<" ";
//         };
//     };
//     return 0;
// };










// PATTERN PRINTING

// * * * * * 
// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         cout<<"* ";
//     };
//     return 0;
// };

//  * * * *
//  * * * *
//  * * * *
//  * * * *
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n; j++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// 1 1 1 1 
// 2 2 2 2 
// 3 3 3 3
// 4 4 4 4
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n; j++)
//         {
//             cout<<i<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n; j++)
//         {
//             cout<<j<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n; j++)
//         {
//             cout<<n-j+1<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n; j++)
//         {
//             cout<<j*j<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// a a a a a
// b b b b b
// c c c c c
// d d d d d
// e e e e e
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n; j++)
//         {
//             cout<<char(97+i-1)<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };
// another way
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n; j++)
//         {
//             char pri = 'a'+i-1;
//             cout<<pri<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// a b c d e
// a b c d e
// a b c d e
// a b c d e
// a b c d e
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n; j++)
//         {
//             char pri = 'a'+j-1;
//             cout<<pri<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// 1 2 3
// 4 5 6 
// 7 8 9
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int count = 1;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n; j++)
//         {
//             cout<<count<<" ";
//             count++;
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// *
// * *
// * * *
// * * * *
// * * * * *
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
// };

// * * * * *
// * * * *
// * * *
// * *
// *
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n-i+1; j++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
// };

// 1
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<j<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n-i+1; j++)
//         {
//             cout<<j<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// 1 
// 2 2  
// 3 3 3  
// 4 4 4 4 
// 5 5 5 5 5 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<i<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// 5 5 5 5 5 
// 4 4 4 4 
// 3 3 3  
// 2 2  
// 1 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n-i+1; j++)
//         {
//             cout<<n-i+1<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = i; j>=1; j--)
//         {
//             cout<<j<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// 5 4 3 2 1 
// 4 3 2 1 
// 3 2 1 
// 2 1 
// 1 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = n-i+1; j>=1; j--)
//         {
//             cout<<j<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// a 
// b b 
// c c c 
// d d d d 
// e e e e e 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<char(96+i)<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// e e e e e 
// d d d d 
// c c c 
// b b 
// a 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = n-i+1; j>=1; j--)
//         {
//             cout<<char(96+n-i+1)<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// 5 
// 5 4 
// 5 4 3 
// 5 4 3 2 
// 5 4 3 2 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        for(int j = n; j>=n-i+1; j--)
        {
            cout<<j<<" ";
        };
        cout<<endl;
    };
    return 0;
};