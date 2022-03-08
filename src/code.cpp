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
      std::cout<<*left<<", "<<*right;
    }
    else if (left == nullptr && right != nullptr){
      std::cout<<nullptr<<", "<<*right;
    }
    else if (left != nullptr && right == nullptr){
      std::cout<<*left<<", "<<nullptr;
    }
    else {
      std::cout<<nullptr<<", "<<nullptr;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if (length == 0){
      return 0;
    }
    return 0;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    // Write your code here ...

    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    // Write your code here ...
  }

}  // namespace assignment
