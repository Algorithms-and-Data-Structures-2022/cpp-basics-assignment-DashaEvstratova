#include "assignment/code.hpp"
#include <cmath>
#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right){
    int c = left - right;
    c = c*c;
    return c;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if (mask < 0) {
      bool a = false;
      return a;
    }
    else if ((mask & (1 << bit_pos)) == 0) {
      bool a = false;
      return a;
    }
    bool a = true;
    return a;
  }

  // Task 3
  int max3(int left, int middle, int right) {
    if (left>= middle && left >= right){
      return left;
    }
    else if (middle>= left && middle >= right){
      return middle;
    }
    return right;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if (left != nullptr && right != nullptr) {
      int l = *right;
      int r = *left;
      *right = r;
      *left = l;}
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    int s=0;
    if (arr == nullptr){
      return 0;
    }
    else if (length >0){
      for (int i =0;i<length; i++){
        s += arr[i];
      }
    }
    return s;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (length>0 && arr != nullptr){
      int* a = &arr[0];
      for (int i =1;i<length; i++) {
        if (arr[i] > *a) {
          a = &arr[i];
        }
      }
      return a;
    }
    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length >0){
      int* arr = new int[length];
      std::fill(arr, arr + length, init_value);
      return arr;
    }
    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (length>0 && arr_in != nullptr){
      int* arr = new int[length];
      std::copy(arr_in, arr_in+length, arr);
      return arr;
    }
    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr) {
      os<<"Invalid argument: arr\n";
    }
    else if (length<=0){
      os<<"Invalid argument: length\n";
    }
    else if (k<=0){
      os<<"Invalid argument: k\n";
    }
    else{
      for(int i=0; i<length; i++){
        if (i%k==0) {
          os<<arr[i]<<"\t";
        }
      }
    }
  }

}  // namespace assignment
