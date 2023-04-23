#include <iostream>
#include <cstring>

using namespace std;

string longestCommonSubstring(string str1, string str2) {
    const int len1 = str1.length();
    const int len2 = str2.length();

    // ��ʼ��dp����
    int dp[100][100];
    memset(dp, 0, sizeof(dp));
    int maxLength = 0;
    int maxIndex = 0;

    // ��̬�滮����dp����
    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1; // ��������ǹ����Ӵ��Ļ���һ���ǶԽ�����ϵ
                if (dp[i][j] > maxLength) {
                    maxLength = dp[i][j];
                    maxIndex = i;
                }
            }
        }
    }

    // ���������Ӵ�
    return str1.substr(maxIndex - maxLength, maxLength);
}

int main() {
    cout << longestCommonSubstring("abcde", "bcdf") << endl; // "bcd"
    //cout << longestCommonSubstring("abcdef", "xbcdfy") << endl; // "bcd"
    cout << longestCommonSubstring("abcdef", "aaabbbczz") << endl; // "bcd"
    return 0;
}
