void selection_sort(vector <int> &v ,int n){
for(int i = 0 ; i <= n - 2 ; i++){
    ll min_element_idx = i;

    for(int j = i+1 ; j <= n - 1 ; j++){
     if(v[j] < v[min_element_idx]) min_element_idx = j;
    }

    if(v[i] > v[min_element_idx]) swap(v[i] , v[min_element_idx]);
    
}
}
