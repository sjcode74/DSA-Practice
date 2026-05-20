 vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>result(n);
   //method-1
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int x = 0; x <= i; x++){ //A
              // Find if we have A[x] in B or not till index i
              for(int y = 0; y <= i; y++){//B
                    if(B[y] == A[x]){
                        count++;
                        break;
                    }
              }
            }
          result[i] = count;
        }
          return result;
 }
};


  //method-2
                vector<bool>ispresentA(n+1, false);
                vector<bool>ispresentB(n+1, false);
                for(int i = 0; i < n; i++){
                ispresentA[A[i]] = true;
                ispresentB[B[i]] = true;
                int  count = 0;
                for(int num = 1; num <= n; num++){
                if(ispresentA[num] == true && ispresentB[num] == true){
                count++;
                }
            } 
result[i] =  count;
        }
return result;
 }
}
