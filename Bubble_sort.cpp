 void bubble_sort(vector<int> &v , int n){
    for(int counter = 0 ; counter < n ; counter++){
        for(int i = 0 ; i < n - 1 ; i++){
            if(v[i] > v[i+1]) swap(v[i],v[i+1]);
        }
    }
 }
