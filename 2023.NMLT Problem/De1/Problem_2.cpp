#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    // Nhap du lieu:
    int N;
    cin >> N;
    // Vector: vector< kieu du lieu> ten_bien(thong so thu nhat, thong so thu 2) 
    vector<int> place;
    int kim_dong_ho = 0;
    place.push_back(0);
    for (int i = 1; i <= N; i++) {
        int D;
        cin >> D;
        kim_dong_ho += D;
        if (kim_dong_ho < 360) {
            place.push_back(kim_dong_ho);
        } else if (kim_dong_ho >= 360) {
            place.push_back(kim_dong_ho - 360);
            kim_dong_ho -=360;
        }
    }
    // Xắp xếp lại theo thứ tự tăng dần
    sort(place.begin(), place.end());
    int n = place.size(); // Do dai vector (ko biet bao nhieu) 
    int ans = 0;
    for (int i = 1; i < n; i++) {
        ans = max(ans, place[i] - place[i-1]);
    }
    ans = max(ans, 360 - place[n-1]);
    cout << ans << endl;
}