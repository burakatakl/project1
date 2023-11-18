#include <iostream>
#include <vector>


#ifndef PROJECT1_INSERTATIONSORT_H
#define PROJECT1_INSERTATIONSORT_H

void insertationSort ( std::vector<int> &arr){
    int n = arr.size(); //here i am getting size of vector
    for(int i=1; i<n; i++){

        int inser= arr[i];
        int j=i-1;
        while (j >= 0 && arr[j]> inser){

    arr[j+1]= arr[j];// here i i shifted the elements right
    j--;// here i move the previus element the left
}
        arr[j +1] = inser;// last one in here i putted correct form the elements
    }


}



#endif //PROJECT1_INSERTATIONSORT_Hn ){

