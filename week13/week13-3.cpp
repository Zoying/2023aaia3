//New Playground
int main() {
    int a, b;
    vector <int> A, B;
    while (cin >> a >> b)
    {
        A.push_back(a);
        B.push_back(b);
    }
    for (int i = 0; i < A.size(); i ++)
    {
        cout << A[i] << " ";
    }
}
