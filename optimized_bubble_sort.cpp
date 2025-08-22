 void bubble_sort(vector<int> &v , int n){
    for(int counter = 0 ; counter < n ; counter++){
        int flag = 0; // to check if the array is alr sorted
        for(int i = 0 ; i < n - 1 ; i++){
            if(v[i] > v[i+1]){
                swap(v[i],v[i+1]);
                flag = true;
            }
        }
        if(flag == 0) break; // it means array is already sorted
    }
 }
