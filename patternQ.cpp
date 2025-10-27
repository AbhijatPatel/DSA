 // square pattern

// 0.1

//  #include<iostream>
//  using namespace std;

//  int main(){
//     int n = 4;
//     for(int i =1; i<=n; i++){
//         for(int j =1; j<=n; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
//  }

 // 0.2

//   #include<iostream>
  
//  using namespace std;

//  int main(){
//     int n = 4;
//     for(int i =1; i<=n; i++){
//         for(int j =1; j<=n; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
//  }

 // 0.3

//  #include<iostream>
//  using namespace std;

//  int main(){
//   int n = 4;
//     for(int i =1; i<=n; i++){
//         for(int j =1; j<=n; j++){           
//              cout << "*";         }
//        cout << endl;
//     }
//     return 0;
//  }

// 0.4

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i = 0; i<n; i++){
//         char ch ='A';
//         for(int j =0; j<n; j++){
//             cout << ch;
//             ch = ch + 1;
//         }
//         cout << endl;    
//     }
//     return 0;
// }

//0.4

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 3;
//     int num =1;
//     for(int i =0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             cout << num ;
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

//Triangle pattern

//1.1

// #include<iostream>
// using namespace std;

// int main(){
//     int n =6;
//     for(int i =0; i<n; i++){
//         for(int j =0; j<i+1; j++){
//             cout << " * ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//1.2

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<i+1; j++){
//             cout << (i+1);
//         }
//         cout << endl;
//     }
//     return 0;
// }

//1.3

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4;
//      char ch='A';

//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=i; j++){
//             cout << ch;
        
//         }
//         cout << endl;
//         ch++;
//     }
//     return 0;
// }

//1.4

//  #include<iostream>
//  using namespace std;
//  int main(){
//     int n = 4;
//     for(int i =0; i<n; i++){
//         for(int j =1; j<=i+1; j++){
//         cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
//  }


//Reverse triangle pattern

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4;

//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j>0; j--){
//         cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//floyd's triangle pattern

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     int num = 1;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){  //or for(int j=i+1; j>0; j--){// backwards
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }


//2.1

// #include<iostream>
// using namespace std;

// int main(){
//     int n=4;
//     char ch='A';

//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout << ch <<" ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;


// }

//2.2

// #include<iostream>
// using namespace std;

// int main(){

//     int n=4;
//     char ch='A';

//     for(int i=0;i<n;i++){
//         for(int j=i;j>=0;j--){
//             cout << char('A'+j);
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

//inverted triangle pattern

// #include<iostream>
// using namespace std;

// int main(){

//     int n=4;
//     int num=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout << " ";
//         }
//             for(int j=0;j<n-i;j++){
//                 cout <<(i+1);
//             }    
//             cout << endl;
//         }
//         return 0;
// }

//3.1

// #include<iostream>
// using namespace std;

// int main(){

//     int n=4;
//     char ch='A';

//     for(int i=0; i<n; i++){
//         for(int j=0;j<i; j++){
//             cout << " ";
//         }
//         for(int j=0;j<n-i;j++){
//             cout << char('A' + i);
//         }
//         cout << endl;
//     }
//     return 0;
// }

//pyramid pattern

// #include<iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=0; i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//          cout <<" ";
//         }
//         for(int j=1;j<=i+1;j++){
//             cout << j;
//         }
//         for(int j=i;j>0;j--){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
    
// }

//Hollow Diamond pattern

// #include<iostream>
// using namespace std;

// int main(){
//     int n=4;
//     //top
//     for(int i=0;i<n;i++){
//         //spaces
//         for(int j=0;j<n-1-i;j++){
//             cout << " ";
//         }
//         cout << "*";

//         if(i!=0){
//             //space
//             for(int j=0;j<2*i-1;j++){
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }

//      //bottom

//     for(int i=0;i<n-1;i++){
//         //space
//         for(int j=0;j<i+1;j++){
//             cout << " ";
//         }

//         cout << "*";

//         if(i!=n-2){
//             //space

//             for(int j=0;j<2*(n-i)-5;j++){
//                 cout <<" ";
//             }
//             cout <<"*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// butterfly problem

#include<iostream>
using namespace std;

int main(){
    int n=4;
    //upper half
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout <<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        cout << endl;

        }
        
        //lower half

        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout <<"*";
            }
            for(int j=1;j<=2*(n-i);j++){
                cout <<" ";
            }
            for(int j=1;j<=i;j++){
                cout <<"*";
            }
            cout << endl;
        }
        return 0;
    }




















