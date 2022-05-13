#pragma once
//
//// Create new node with value x
//node* makeset(int x);
//
//// Find root of tree that n is in
//node* find(node* n);
//
//// Join trees containing node x and node y
//void join(node* x, node* y);

void set_dsu(int* parent, int* rank, int n);
int find(int a, int* parent);
int set_count(int* parent, int n);
void merge_set(int a, int b, int* parent, int* rank);