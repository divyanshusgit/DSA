
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
#include<iostream>
using namespace std;
int main(){
    for(int i = 1; i<=10; i++)
    {
        cout<<i<<endl;
    };
    return 0;
};