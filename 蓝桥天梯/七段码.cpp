//import java.util.Scanner;
//// 1:无需package
//// 2: 类名必须Main, 不可修改
//
//public class Main {
//    public static void main(String[] args) {
//        Scanner scan = new Scanner(System.in);
//        //在此输入您的代码...
//        /*
//        一段: 只有一根二极管发光,共有7种.
////        二段:列一个7*7的表格, 看图可以直接列出两根二极管连在一起的所有结果, 表格只需要一半,因为另一半是重复的, 共有10种.
////        三段: 表格中可以找到,在二段的基础上看有哪一个连在一起,去掉重复的, 剩下的分别是abf,abc,abg,afg,bcg,bcd,cdg,cde,efg. 共9种.
////        四段: 在七段管里任取四根的结果有C[4,7] = 35 (数学上的排列组合计算),其中二极管不连在一起的情况是①f 和 b 不取(只有这两个不取才有可能不连在一起),剩下的一个可以是cdeg的任何一个,② e 和 c 不取,abgf的任何一个, 所以不连在一起的有8种可能, 则连在一起的总共有 35-8 = 27.
////        五段: 在七段管里任取五根的结果有C[5,7] = 21, 不连在一起的只有两种,就是取了fb或者ec, 则连在一起的总共有 21-2 = 19.
////        六段: 只有一根二极管没被选中,共7种.
////        七段: 七根二极管都选择,共1种.
//        */
//        System.out.println(7 + 10 + 9 + 27 + 19 + 7 + 1);
//        scan.close();
//    }
//}
//
////#include <iostream>
////using namespace std;
////
////int BackTrack(int graph[][7], int visit[], int n, int i) {
////    int count = 1;
////    for (int x = 0; x < n; x++) {
////        if (visit[x] != 1 && graph[i][x] != 0) {
////            visit[x] = 1;
////            count += BackTrack(graph, visit, n, x);
////            visit[x] = 0;
////        }
////    }
////    return count;
////}
////int main()
////{
////    int graph[7][7] = {
////      {1,1,0,0,0,1,0},
////      {1,1,1,0,0,0,1},
////      {0,1,1,1,0,0,1},
////      {0,0,1,1,1,0,0},
////      {0,0,0,1,1,1,1},
////      {1,0,0,0,1,1,1},
////      {0,1,1,0,1,1,1}
////    };
////    int visit[7] = { 0 };
////    printf("%d", BackTrack(graph, visit, 7, 0) / 2);
////    return 0;
////}