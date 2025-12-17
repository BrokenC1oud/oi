#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

// 权重分配：{7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2}
const int W[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
const char M[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

/**
 * 检查单个身份证号码是否有效
 * @param id_card 18位身份证号码字符串
 * @return 如果有效返回true，否则返回false
 */
bool check_id_card(const string& id_card) {
    // 1. 检查前17位是否全为数字
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        if (!isdigit(id_card[i])) {
            // 前17位包含非数字字符，视为无效
            return false;
        }
        // 计算加权和
        // id_card[i] - '0' 将字符数字转换为整数值
        sum += (id_card[i] - '0') * W[i];
    }

    // 2. 计算校验码
    // 将计算的和对11取模得到值Z
    int Z = sum % 11;

    // 3. 比较计算出的校验码 M[Z] 和实际的第18位 id_card[17]
    char calculated_M = M[Z];
    char actual_M = id_card[17];

    if (calculated_M == actual_M) {
        return true;
    } else {
        return false;
    }
}

int main() {
    // 优化输入输出速度
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    // 读取身份证号码的个数
    if (!(cin >> N)) return 0;

    vector<string> problematic_ids;

    // 循环读取N个身份证号码
    for (int i = 0; i < N; ++i) {
        string id_card;
        if (!(cin >> id_card)) break;

        // 检查号码的有效性
        if (!check_id_card(id_card)) {
            // 如果校验失败，将其加入问题列表
            problematic_ids.push_back(id_card);
        }
    }

    // 输出结果
    if (problematic_ids.empty()) {
        // 如果所有号码都正常
        cout << "All passed" << endl;
    } else {
        // 输出有问题的号码
        for (const string& id : problematic_ids) {
            cout << id << endl;
        }
    }

    return 0;
}