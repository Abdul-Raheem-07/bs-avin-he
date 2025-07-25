// //in the we will do all while loops questions.

//10.	Create a while loop to print the pattern: 1, 11, 111, ..., up to 5 terms.
// #include<iostream>
// using namespace std;
// 
// int main(){
//     int num = 1, n = 0;
//     while (n <5){
//         cout<<num<<", ";
//         num =num *10+1;
//         n++;
//     }
//     return 0;
// }

//8.	Implement a while loop to find the GCD of two numbers (e.g., 48 and 18).
// #include <iostream>
// using namespace std;
// 
// int main() {
//     int a = 48;
//     int b = 18,c;
//     while (b!=0) {
//        c=b;
//        b=a%b;
//        a=c;
//     }
//     cout << "GCD = " << a<< endl;
//     return 0;
// }

//7.	Write a while loop to print the sequence: 2, 4, 8, 16, ..., up to 1024.
// #include<iostream>
// using namespace std;
// int main(){
//     int num = 2;
//     while(num<=1024){
//         cout<<num<<", ";
//         num *=2;
//     }
// }

//3.	Create a while loop to check if a number is prime (e.g., input 17).
//  #include<iostream>
//  using namespace std;
//  int main(){
//     int num;
//     cout<<"enter a number"<<endl;
//     cin>>num;
//     int i = 2;
//     bool prime = true;
//     while(i<num){
//         if(num%2==0){
//             prime=false;
//             break;
//         }
//         i++  ;
//     }
//     if(prime&&num>1){
//         cout<<num<<" is a prime"<<endl;
//     }else{
//         cout<<num<<" not a prime"<<endl;
//     }
//     return 0;
//  }

//4.	Write a while loop to count the number of digits in a number (e.g., 4567).
// #include<iostream>
//  using namespace std;
//  int main(){
//     int num;
//     cout<<"enter a number"<<endl;
//     cin>>num;
//     int count = 0;
//     while(num>0){
//         num = num/10;
//         count++;
//     }
//     cout<<"the total count is "<<count<<endl;
//     return 0;
// }

//5. Create a while loop to print numbers from 1 to 100 divisible by 7.
// #include <iostream>
// using namespace std;
// int main() {
//     int num = 1;
//     while(num <= 100) {
//         if(num % 7 == 0) {
//             cout << num << " ";
//         }
//         num++;
//     }
//     return 0;
// }

//  2.	Write a program using a while loop to reverse a number (e.g., 1234 to 4321).
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"enter a number"<<endl;
//     cin>>num;
//     while(num!=0){
//         int rem = num%10;
//         num = num/10;
//         cout<<rem;
//     }
//     return 0;
// }

//11.	Implement a while loop to print numbers from 1 to 50, skipping multiples of 5.
// #include<iostream>
// using namespace std;
// int main(){
//     int num = 1;
//     while(num<=50){
//         if(num%5!=0){
//              cout<<num<<", ";
//         }
//        num++;
//     }
//     return 0;
// }

//1.	Use a while loop to print the first 10 Fibonacci numbers.
// #include<iostream>
// using namespace std;
// int main(){
//     int fib0 = 0, fib1 = 1;
//     int i = 0;
//     while(i<10){
//         if(i==0){
//             cout<<"fib of "<<i<<" = "<<fib0<<endl;
//         }else if(i==1){
//             cout<<"fib of "<<i<<" = "<<fib1<<endl;
//         }else{
//             int fib = fib0 + fib1;
//             cout<<"fib of "<<i<<" = "<<fib<<endl;
//             fib0 = fib1;
//             fib1 = fib;
//         }
//         i++;
//     }
//     return 0;
// }

//6.Use a while loop to calculate the product of numbers from 1 to 5.
// #include<iostream>
// using namespace std;
// int main(){
//     int num = 1, product = 1;
//     while(num<=5){
//         product = product * num;
//         num++;
//     }
//     cout<<"the product of numbers from 1 to 5 is "<<product<<endl;
//     return 0;
// }

//12.	Use a while loop to count how many times a digit (e.g., 3) appears in a number.
#include<iostream>
using namespace std;
int main(){
    int num = 12332344, count = 0, digit = 3;
    while(num>0){
        int last = num%10;
        if(last==digit){
            count++;
        }
        num = num/10;
    }
    cout<<"the digit "<<digit<<" appreas "<<count<<endl;
    return 0;
}