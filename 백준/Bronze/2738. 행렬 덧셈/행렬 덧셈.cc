#include <iostream>

#include <vector>

using namespace std;

int main() {

    int N, M;

    cin >> N >> M; // 행렬의 크기 N x M

    vector<vector<int>> A(N, vector<int>(M));

    vector<vector<int>> B(N, vector<int>(M));

    vector<vector<int>> C(N, vector<int>(M)); // 결과 행렬

    // 행렬 A 입력

    for (int i = 0; i < N; ++i) {

        for (int j = 0; j < M; ++j) {

            cin >> A[i][j];

        }

    }

    // 행렬 B 입력

    for (int i = 0; i < N; ++i) {

        for (int j = 0; j < M; ++j) {

            cin >> B[i][j];

        }

    }

    // 두 행렬 덧셈

    for (int i = 0; i < N; ++i) {

        for (int j = 0; j < M; ++j) {

            C[i][j] = A[i][j] + B[i][j];

        }

    }

    // 결과 출력

    for (int i = 0; i < N; ++i) {

        for (int j = 0; j < M; ++j) {

            cout << C[i][j] << " ";

        }

        cout << endl; // 행 끝에서 줄바꿈

    }

    return 0;

}