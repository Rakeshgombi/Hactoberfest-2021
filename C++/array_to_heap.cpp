#include <bits/stdc++.h>
using namespace std;
class heap
{
    vector<int> v;
    int top;
    int cap;

public:
    heap(int cap_t)
    {
        cap = cap_t;
        top = -1;
        v.resize(cap, 0);
    }
    int parent(int idx)
    {
        return (idx - 1) / 2;
    }
    int leftchild(int idx)
    {
        return 2 * idx + 1;
    }
    int rightchild(int idx)
    {
        return 2 * idx + 2;
    }
    void insert(int data)
    {
        top++;
        v[top] = data;
        int i = top;
        while (i > 0 && v[parent(i)] < v[i])
        {
            swap(v[parent(i)], v[i]);
            i = parent(i);
        }
    }
    int top_()
    {
        return v[0];
    }
    void pop()
    {
        swap(v[0], v[top]);
        top--;
        heapify(0);
    }
    void heapify(int idx)
    {
        int largest = idx;
        int left = leftchild(idx);
        int right = rightchild(idx);
        if (left <= top && v[left] > v[largest])
        {
            largest = left;
        }
        if (right <= top && v[right] > v[largest])
        {
            largest = right;
        }
        if (largest != idx)
        {
            swap(v[largest], v[idx]);
            heapify(largest);
        }
    }
};
int main()
{

    int a[] = {1, 2, 3, 4, 5};
    heap pq(5);
    for (int i = 0; i < 5; i++)
    {
        pq.insert(a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << pq.top_();
        pq.pop();
    }
    return 0;
}