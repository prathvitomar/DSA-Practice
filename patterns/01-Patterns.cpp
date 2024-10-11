// Creating pattern:
#include <iostream>
using namespace std;
int main()
{
    // 6 5 4 3 2 1
    // 6 5 4 3 2 1
    // int i = 0;
    // for (int i = 6; i >= 1; i--) {
    //     for (int j = 6; j >= 1; j--) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // 1 2 3
    // 4 5 6
    // 7 8 9
    // int num = 0;
    // for (int i = 0; i<3; i++) {
    //     for (int j = 0; j<3; j++) {
    //         num++;
    //         cout << num << " ";
    //     }
    //     cout << endl;
    // }

    // *
    // **
    // ***
    // ****
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j < i + 1; j++)
    //     {
    //         cout << '*';
    //     }
    //     cout << endl;
    // }



    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j < i + 1; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }







    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // int num = 0;
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         num++;
    //         cout << num << " ";
    //     }
    //     cout << endl;
    // }









    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7
    // int i = 0;
    // int num = 1;
    // for (i = 0; i <= 4; i++)
    // {
    //     num = i;
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout<<endl;
    // }








    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // int i = 0;
    // int num = 0;
    // for ( i = 0; i <= 4; i++)
    // {
    //     num = i;
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << num << " ";
    //         num--;
    //     }
    //     cout << endl;
    // }
    







    // A B C
    // A B C
    // A B C
    // int i = 0;
    // for (int i = 0; i < 3; i++){
    //     for (int j = 1; j <= 3; j++)
    //     {
    //         char ch = 'A'+ j - 1; 
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }
    









    // A B C 
    // D E F
    // G H I
    // char num = 0;
    // for (int i = 0; i < 3; i++){
    //     for (int j = 0; j < 3; j++){
    //         char ch = 'A' + num;
    //         cout << ch << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }    







    // A B C
    // B C D
    // C D E
    // int num;
    // for (int i = 0; i < 3; i++)
    // {
    //     num = i;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         char ch = 'A'+num;
    //         cout << ch << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    







    // A
    // A B
    // A B C
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         char ch = 'A'+j;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }
    












    // A
    // B C 
    // D E F
    // G H I J
    // int num = 0;
    // for (int i = 1; i <= 4; i++){
    //     for (int j = 0; j < i; j++){
    //         char ch = 'A'+ num;
    //         cout << ch << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    










    
    // A
    // B C
    // C D E
    // D E F G    
    // int num = 0;
    // for (int i = 1; i <= 4; i++){
    //     num = i-1;
    //     for (int j = 0; j < i; j++){
    //         char ch = 'A' + num; 
    //         cout << ch << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    







    // D
    // C D
    // B C D 
    // A B C D
    // int num = 4;
    // for (int i = 0; i < num; i++){
    //     for (int j = 0;j <= i; j++){
    //         char ch = 'A' + num - i + j -1;
    //         cout << ch << " ";
    //     }
    //     cout<<endl;
    // }
    














    // A B C
    // B C D
    // C D E
    // for (int i = 0; i < 3; i++){
    //     for(int j = 0;j < 3; j++){
    //         char ch = 'A' + i + j;
    //         cout << ch << " ";
    //     }
    //     cout<<endl;
    // }








    //       *
    //     * *
    //   * * * 
    // * * * *
    // int num = 4;
    // for (int i = 0; i < num; i++) {
    //     for (int j = 0; j < num; j++) {
    //         if (j < num - i - 1)
    //             cout << "  "; 
    //         else
    //             cout << "* ";
    //     }
    //     cout << endl;
    // }
    






    // * * * *
    // * * *
    // * *
    // *
    // int num = 4;
    // for (int i = 0; i < num; i++){
    //     for (int j = 0; j < num-i; j++){
    //             cout << "* ";
    //     }
    //     cout << endl;
    // }
    











    // * * * *
    //   * * *
    //     * *
    //       *
    int num = 4;
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < i; j++) {
            cout << "  ";  
        }
        for (int j = 0; j < num - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }



    return 0;
 
 
}
