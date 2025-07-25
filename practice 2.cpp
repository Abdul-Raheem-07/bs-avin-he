//in this file i gonna do do while loop.

//1.	Use a do-while loop to print odd numbers between 1 and 30.
// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     do{
//         if(i%2!=0){
//             cout<<i<<", ";
//         }
//         i++;
//     }while(i<30);
//     return 0;
// }

// 2.	Implement a do-while loop to find the factorial of 5.
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1, fact=1;
//     do{
//         fact=i*fact;
//         i++;
//     }while(i<=5);
//     cout<<"the factorial of 5 is "<<fact;
//     return 0;
// }

// 3.	Write a program using a do-while loop to reverse a number (e.g., 5678
// #include<iostream>
// using namespace std;
// int main(){
//     int num, rem;
//     cout<<"enter a number"<<endl;
//     cin>>num;
//     do{
//         rem=num%10;
//         num=num/10;
//         cout<<rem;
//     }while(num>0);
//     return 0;
// }

//4.	Use a do-while loop to print multiples of 4 between 1 and 40.
// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     do{
//         if(i%4==0){
//             cout<<i<<", ";
//         }
//         i++;
//     }while(i<=40);
//     return 0;
// }

// 5.	Write a do-while loop to calculate the sum of digits of a number (e.g., 456).
// #include<iostream>
// using namespace std;
// int main(){
//     int num,sum=0;
//     cout<<"enter a number"<<endl;
//     cin>>num;
//     do{
//         sum=sum+num%10;
//         num=num/10;
//     }while(num>0);
//     cout<<"the sum of digit of a number is "<<sum;
//     return 0;
// }

//6.	Use a do-while loop to find the first power of 3 greater than 500.
#include<iostream>
using namespace std;
int main(){
    int i=1;
    do{
        i*=3;
    }while(i<=500);
    cout<<"the first power of 3 greater than 500 is "<<i<<endl;
    return 0;
}

// 7.	Write a do-while loop to print the sequence: 3, 6, 12, 24, ..., up to 768.
// #include<iostream>
// using namespace std;
// int main(){
//     int i=3;
//     do{
//         cout<<i<<" ";
//         i*=2;
//     }while(i<=768);
//     return 0;
// }

// 8.	Create a do-while loop to print the first 12 terms of the series: 2, 4, 6, ...
// #include<iostream>
// using namespace std;
// int main(){
//     int i=2, n=1;
//     do{
//         cout<<i<<" ";
//         i+=2;
//         n++;
//     }while(n<=12);
//     return 0;
// }

//9.	Implement a do-while loop to calculate 3 raised to the power of n (e.g., n=4).
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 4;
//     int result = 1;
//     int i = 1;
//     do {
//         result = result * 3;
//         i++;
//     } while (i <= n);
//     cout << "3 raised to the power of " << n << " is: " << result << endl;
//     return 0;
// }

//10.	Write a do-while loop to find the sum of odd digits in a number (e.g., 1357).
// #include<iostream>
// using namespace std;
// int main (){
//     int num = 1357, sum = 0;
//     do{
//         int digit = num % 10;
//         if(digit%2!=2){
//             sum=sum+digit;
//         }
//         num/=10;
//     }while(num>0);
//     cout<<"the sum of odd digits in "<<sum<<endl;
//     return 0;
// }

//11.	Create a do-while loop to print the pattern: 2, 22, 222, ..., up to 6 terms.
// #include<iostream>
// using namespace std;
// int main(){
//     int i=2, n=1;
//     do{
//         cout<<i<<" ";
//         i = i*10+2;
//         n++;
//     }while(n<=6);
//     return 0;
// }

//12.	Write a do-while loop to find the smallest number divisible by both 5 and 7 (LCM).
// #include <iostream>
// using namespace std;
// int main() {
//     int num = 1;
//     do {
//         if (num % 5 == 0 && num % 7 == 0) {
//             break;
//         }
//         num++;
//     } while (true);
//     cout << "Smallest number divisible by both 5 and 7 is: " << num << endl;
//     return 0;
// }


