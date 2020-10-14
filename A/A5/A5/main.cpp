#include <iostream>
using namespace std;

int main() {


    int matrix[5][5];
    int oneRow = 0;
    int oneCol = 0;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>matrix[i][j];
            if(matrix[i][j] == 1)
            {
                oneRow = i;
                oneCol = j;
            }
        }
    }
    
    (oneRow<2 ? oneRow=2-oneRow : oneRow=oneRow-2);
    (oneCol<2 ? oneCol=2-oneCol : oneCol=oneCol-2);
    cout<<oneCol+oneRow;

return 0;
}
