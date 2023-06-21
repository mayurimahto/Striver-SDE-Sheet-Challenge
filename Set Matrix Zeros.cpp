//BRUTEFORCE
#include <bits/stdc++.h>

void markingrow (int i , vector<vector<int>>&matrix){
    int m = matrix[0].size();
    for(int j=0; j<m; i++){
        if(matrix[i][j]!=0){
            matrix[i][j] = -1;
        }
    }
}
void markingcol (int j , vector<vector<int>>&matrix){
    int n= matrix.size();
    for(int i=0;i<n;i++){
        if(matrix[i][j]!=0){
            matrix[i][j] =-1;
        }
    }
}
void setZeros(vector<vector<int>> &matrix)
{
    // Write your code here.
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == 0){
                markingrow(i , matrix);
                markingcol(j , matrix);
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == -1){
                matrix[i][j] = 0;
            }
        }
    }
}

//BETTER
void setZeros(vector<vector<int>> &matrix){
    // Write your code here.
	int n=matrix.size();
	int m=matrix[0].size();
	vector<int> row (n,0);
	vector<int> cols (m,0);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){			
			if(matrix[i][j]==0){
				row[i]=1;
				cols[j]=1;
			}
		}
	}
	// converting to 0s
    for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if (row[i] == 1 || cols[j] == 1){
			matrix[i][j] = 0;
			}
		}
	}
}
