#include <iostream>
#include <vector>
#include <random>
#include <ctime>

using namespace std;
 
int DeterminationOfAllElementsOfTheMatrix(vector < vector <int> > vec, int i, int j, int size) {
    if (i + j < size - 1) {  
        return 0;
    } 
    else {
        return  vec[i][j];
    }
}
       
void FindSumsInLinesWithoutNegativeElements(vector < vector <int> > vec, int size) {
    int sum = 0;
    int ch = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) { 

            DeterminationOfAllElementsOfTheMatrix(vec, i, j, size);

            if (vec[i][j] >= 0) {
                sum += vec[i][j];
            }
            else {
                ch = ch + 1;
            }

        }

        if (ch > 0) { 
            cout << "Line " << i << " have negative element"; 
            cout << endl;
        }
        else { 
            cout << "Summ of line № "<< i <<" equel: "<< sum; 
            cout << endl;
        }
        sum = 0;
        ch = 0;


    }
}

void FindingTheSmallestElementAlongParallelDiagonalsExcludingTheMainDiagonal(vector < vector <int> > vec, int size) {

    int min_under_dgnl = 0;
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < i; j++) {  

            DeterminationOfAllElementsOfTheMatrix(vec, i, j, size);
            
            if (vec[i][j] < min_under_dgnl) {
                min_under_dgnl = vec[i][j];  
            }
        }
    }

    int min_upper_dgnl = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 1 + i; j < size; j++) { 

            DeterminationOfAllElementsOfTheMatrix(vec, i, j, size);
          
            if (vec[i][j] < min_upper_dgnl) {
                min_upper_dgnl = vec[i][j];
            }
        }
    }

    if (min_under_dgnl > min_upper_dgnl) {

        cout << "Min element of matrix diagonals" << min_upper_dgnl;
    }
    else {
        cout << "Min element of matrix diagonals" << min_under_dgnl;
    }
}

     int main()
     {
     int size;
     cout << "Enter the size of the side of the square matrix, size does not exceed 10  ";
     cin >> size;
     if (size > 10) {
         cout << "Size does not exceed 10  ";
     }
     else {
         int choice; 
         cout << "Enter matrix elements yourself (choоse 1) or randomly (choose 2)? ";
         cin >> choice;

         vector < vector <int> > vec(size, vector <int>(size));
        
         switch (choice) {
         case 1:

             for (int i = size - 1; i >= 0 ; i--) {  
                 for (int j = size - 1 - i; j < size ; j++) {
                     cin >> vec[i][j]; 
                 }
             }
             break;

         case 2:
             int min, max;
             std::cout << "Range of array element values: min    ";
             std::cin >> min;
             std::cout << "max   ";
             std::cin >> max;
             srand(time(NULL));
             for (int i = size - 1; i >= 0; i--) {
                 for (int j = size - 1 - i; j < size; j++) {
                     vec[i][j] = rand() % (max - min) + min;
                 }
             }

             break;
         default: std::cout << "Error, try again";
         }
         
         for (int i = 0; i < size; i++) {
             for (int j = 0; j < size; j++) { 
                 DeterminationOfAllElementsOfTheMatrix(vec, i, j, size);
                 cout << vec[i][j] << '\t';
             }
             cout << endl;
         }
          
         FindSumsInLinesWithoutNegativeElements(vec, size);
         FindingTheSmallestElementAlongParallelDiagonalsExcludingTheMainDiagonal(vec, size);
     }
     return 0;
 }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // задание размеров массива
       // IputVec0 ( vec,  i,  j, size  );

         //for (int i = 0; i < size /*vec.size()*/; i++) {    // Цикл, который идёт по столбцам
           /// for (int j = 0; j < size/*vec.size()*/; j++) // Цикл, который идёт по элементам // строкам
          //  {
            //    rand();
             //   vec[i][j] = rand() % 8;
             //   cout << " " << vec[i][j] << " ";
                

                //cin >> vec[i][j]; // Заполнение вектора или массива (в данном случае ввод)
               // cout << " " << vec[i][j] << " ";
           // }
           // cout << endl;
       // }


       // for (int i = 0; i < size /*vec.size()*/; i++) {    // Цикл, который идёт по столбцам
           // for (int j = size-1-i ; j < size /*vec.size()*/; j++) // Цикл, который идёт по элементам // строкам
           // {
                /**rand();
                vec[i][j] = rand() % 8;
                cout << " " << vec[i][j] << " "; */

             //   IputVec0(vec, i, j, size);

             //   cin >> vec[i][j]; // Заполнение вектора или массива (в данном случае ввод)
              //  cout << " " << vec[i][j] << " ";
            //}
           // cout << endl;
       // }

        ///
       /// for (int i = 0; i < size /*vec.size()*/; i++) {    // Цикл, который идёт по столбцам
         //   for (int j = size - 1 - i; j < size /*vec.size()*/; j++) // Цикл, который идёт по элементам // строкам
          //  {
                /**rand();
                vec[i][j] = rand() % 8;
                cout << " " << vec[i][j] << " "; */
//        int i=0;
//        int j=0;
//                
//        InputVec(vec, i, j, size);
//         IputVec0(vec, i, j, size);
//
//         for (int i = 0; i < size /*vec.size()*/; i++) {    // Цикл, который идёт по столбцам
//             for (int j = 0; j < size /*vec.size()*/; j++) // Цикл, который идёт по элементам // строкам
//             {
//                 InputVec(vec, i, j, size);
//                 IputVec0(vec, i, j, size);
//                 cout << vec[i][j] << " ";
//             }
//
//             cout << endl;
//         }
//    
//    } // скобочка от елсе
//
//  
//   return 0;
//}

