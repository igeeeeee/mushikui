#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main() {
// 筆算の各桁について条件と照らし合わせる
  for(int a = 100000; a < 1000000; a++){
    rep(e,10){

      if(a * e / 10000 != 66) continue;

      if(a * e / 1000000 > 0) continue;

      rep(d,10){

        if(a * d / 100000 != 6) continue;

        if(a * d / 1000000 > 0) continue;

        rep(c,10){

          int ac = a * c;
          ac /= 100;
          if(ac % 1000 != 666) continue;

          if(a * c / 1000000 == 0) continue;

          rep(b,10){

            int ab = a * b;
            if(ab % 10 != 6) continue;
            ab /= 1000;
            if(ab % 10 != 6) continue;

            if(a * b / 1000000 > 0) continue;

// 最後の合計について
            long long sum;
            sum = a * (b * 1000 + c * 100 + d * 10 + e);
            int sum_check = sum / 10000;
            if(sum_check % 100 != 66) continue;

            if(sum / 1000000000 == 0) continue;

// 結果の出力
            cout << a << endl;
            cout << b * 1000 + c * 100 + d * 10 + e << endl;
            cout << std::fixed << std::setprecision(0) << a * e << endl;
            cout << std::fixed << std::setprecision(0) << a * d << endl;
            cout << std::fixed << std::setprecision(0) << a * c << endl;
            cout << std::fixed << std::setprecision(0) << a * b << endl;
            cout << std::fixed << std::setprecision(0) << sum << endl;
            cout << endl;
          }
        }
      }
    }
  }
}
