int main() {
    int n, m, num;
    cin >> n >> m;
    int sum_a = 0, sum_b = 0;
    for (int i = 0;i < n;i++)
    {

        cin >> num;
        sum_a += num;

    }
    for (int i = 0;i < m;i++)
    {

        cin >> num;
        sum_b += num;

    }
    if (sum_a == sum_b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}