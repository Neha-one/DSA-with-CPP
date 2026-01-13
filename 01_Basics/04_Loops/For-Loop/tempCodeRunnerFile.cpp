
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    cout << "Your AP - ";
    int a = 4;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a + 3;
    }
}