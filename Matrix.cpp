    //  Made by Eiskalt

#include <iostream>

using namespace std;

int main()
{
    int M, m, N, n;
    string choice;
    system("chcp 65001 > nul");
    cout << "\nHow big are your matrices?" << endl;
    cout << "Number rows of the 1st matrix: ";
    cin >> M;
    cout << "Number columns of the 1st matrix: ";
    cin >> N;
    cout << "Number rows of the 2nd matrix: ";
    cin >> m;
    cout << "Number columns of the 2nd matrix: ";
    cin >> n;
    cout << "Randomly assign elements? [Y/N]: ";
    cin >> choice;
    cout << "\n\n";
    int Array[M][N];
    int array[m][n];

    // The part to which the elements are assigned
    if (choice == "Y" || choice == "y")
    {
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                Array[i][j] = rand() % 90 + 10;
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                array[i][j] = rand() % 90 + 10;
            }
        }
    }
    else if (choice == "N" || choice == "n")
    {
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << "Enter the " << i + 1 << "column of the  " << j + 1 << "row of your 1st matrix: ";
                cin >> Array[i][j];
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "Enter the " << i + 1 << "column of the " << j + 1 << "row of your 1st matrix: ";
                cin >> array[i][j];
            }
        }
    }
    // Presentation of matrices
    cout << "\n Your first matrix:\n\n";
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << Array[i][j] << "\t";
        }
        cout << "\n\n";
    }
    cout << "\n Your second matrix:\n\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << "\n\n";
    }
    cout << endl;
    int top_array[M][N];
    int cık_array[M][N];
    int car_toplam, car_array[M][n];

    // Adding matrices

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            top_array[i][j] = array[i][j] + Array[i][j];
        }
    }
    if (M != m || N != n)
    {
        cout << " The number of rows and columns of the matrices \nmust be equal in order to perform the addition operation in the matrices.\n\n";
    }
    else
    {
        cout << " The sum of your matrices:\n\n";
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << top_array[i][j] << "\t";
            }
            cout << "\n\n";
        }
        cout << endl;
    }
    // Subtracting matrices

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cık_array[i][j] = Array[i][j] - array[i][j];
        }
    }
    if (M != m || N != n)
    {
        cout << " In order to perform subtraction in matrices, \nthe number of rows and columns of the matrices must be equal.\n\n";
    }
    else
    {
        cout << " Subtraction of your matrices:\n\n";
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << cık_array[i][j] << "\t";
            }
            cout << "\n\n";
        }
    }

    // Multiplying matrices
    if (N == m || M == n)
    {

        for (int k = 0; k < M; k++)
        {
            for (int i = 0; i < M; i++)
            {
                car_toplam = 0;
                for (int j = 0; j < n; j++)
                {
                    car_toplam += Array[k][j] * array[j][i];
                }
                car_array[k][i] = car_toplam;
            }
        }
        cout << "\n Multiplication of matrices: \n\n";
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << car_array[i][j] << "\t";
            }
            cout << "\n\n";
        }
        cout << "\n\n";
    }
    else
    {
        cout << "In order to perform multiplication in matrices, the row column must be equal.\n\n ";
    }

    // Transpose

    int tra_Array[M*N], tra_array[m*n];
	int tra_Array2[N][M], tra_array2[n][m];
	int k = 0;
    for ( int i = 0 ; i < M ; i++)
	{
		for (int j = 0 ; j < N ; j++)
		{
			tra_Array[k] = Array[i][j];
			k++;
		}
	}
	k = 0;
	for ( int i = 0 ; i < M ; i++)
	{
		for (int j = 0 ; j < N ; j++)
		{
			tra_Array2[j][i] = tra_Array[k];
			k++;
		}
	}
	cout << " Transpose of the first matrix\n" << endl;
	for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << tra_Array2[i][j] << "\t";
        }
        cout << "\n\n";
    }
    cout << endl;

	k = 0;
	for ( int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			tra_array[k] = array[i][j];
			k++;
		}
	}
	k = 0;
	for ( int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			tra_array2[j][i] = tra_array[k];
			k++;
		}
	}
	cout << " Transpose of the second matrix\n" << endl;
	for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << tra_array2[i][j] << "\t";
        }
        cout << "\n\n";
    }
    cout << endl;
    system("pause>0");
	return 0;
}