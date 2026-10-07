// #include<iostream>
// using namespace std;

// int main(){
//     int row, col;
//     char k='a';

//     for(row=1; row<=5; row++){
//         for(col=1; col<=row; col++){
//             k='a'+(row-1);
//             cout<<k<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int row , col;

//     for( row=1; row<=5; row++){
//         for( col=5; col>=row; col--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// same

// #include<iostream>
// using namespace std;

// int main(){
//     int row , col;

//     for( row=1; row<=5; row++){
//         for( col=1; col<=5-(row-1); col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int row, col;

//     for( row=1; row<=5; row++){
//         for( col=1; col<=5-(row-1); col++){
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int row, col;

//     for(row=1; row<=5; row++){
//         for(col=5; col>=5-(row-1); col--){
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int row, col;

//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= 5 - row; col++)
//         {
//             cout << " ";
//         }
//         for (col = 1; col <= row; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int row, col, n;
//     cout << "Enter a number :";
//     cin >> n;

//     for (row = 1; row <= n; row++)
//     {
//         for (col = 1; col <= n; col++)
//         {
//  //    space print
//             if (col <= 5 - row)
//             {
//                 cout << "  ";
//             }
//
//  //   star print
//
//             else
//             {
//                 cout << " *";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int row, col;

//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= 5 - row; col++)
//         {
//             cout << "  ";
//         }
//         for (col = 1; col <= row; col++)
//         {
//             cout<<" " << row ;
//         }
//         cout << endl;
//     }
//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;

//     for( row=1; row<=5; row++)
//     {
//         // space print
//         for(col=1; col<=5-row; col++)
//         {
//             cout<<"  ";
//         }
//         // number print
//         for(col=1; col<=row; col++)
//         {
//             cout<<" "<<col;
//         }
//         cout<<endl;
//     }
//     return 0;
// }





// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;
//     char out;
//     out='A';

//     for(row=1; row<=5; row++)
//     {
//         // space print
//         for(col=1; col<=5-row; col++)
//         {
//             cout<<"  ";
//         }
//         // char print
//         for(col=1; col<=row; col++)
//         {
//             out='A'+(col-1);
//             cout<<" "<<out;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;

//     for(row=1; row<=5; row++)
//     {
//         // space print
//         for(col=1; col<=5-row; col++)
//         {
//             cout<<"  ";
//         }
//         // char print
//         for(char out='A'; out<='A'+(row-1); out++)
//         {
//             cout<<" "<<out;
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;

//     for(row=1; row<=5; row++)
//     {
//         // space print
//         for(col=1; col<=5-row; col++)
//         {
//             cout<<"  ";
//         }
//         // number print
//         for(col=row; col>=1; col--)
//         {
//             cout<<" "<<col;
//         }
//         cout<<endl;
//     }
//     return 0;
// }