#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int n;
    cout << "Введите количество друзей: ";
    cin >> n;
    vector<string> surnames(n);
    vector<string> names(n);
    vector<vector<double>> scores(n, vector<double>(3));
    for (int i = 0; i < n; i++) {
        cout << "Введите фамилию, имя, три оценки для друга" << i + 1 << ":\n";
        cin >> surnames[i] >> names[i] >> scores[i][0] >> scores[i][1] >> scores[i][2];
    }
    vector<double> sum_scores(3, 0.0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            sum_scores[j] += scores[i][j];
        }
    }
    vector<double> avg_scores(3);
    for (int j = 0; j < 3; j++) {
        avg_scores[j] = sum_scores[j] / n;
    }
    double total_avg = (avg_scores[0] + avg_scores[1] + avg_scores[2]) / 3;
    cout << "Средний балл по каждому критерию:\n";
    cout << "1: " << avg_scores[0] << "\n";
    cout << "2: " << avg_scores[1] << "\n";
    cout << "3: " << avg_scores[2] << "\n";
    return 0;
}
