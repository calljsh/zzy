//#include <iostream>
//using namespace std;
//int main() {
//	// 请在此输入您的代码
//
//	int date[200];
//	for (int i = 0; i < 200; i++)
//		date[i] = 4 * i + 6;
//	int target;
//	cin >> target;
//	cout << (lower_bound(date, date + 200, target) - date);
//	 /*这是一个查找函数,能找到第一个大于等于target的值的地址,减去第一个地址就是下标了*/
//	return 0;
//}
//#include <iostream>
//#include <cctype>
//
//int main() {
//    char myChar = 'a';
//   /* islower 是 C++ 标准库 <cctype> 头文件中的函数，用于检查一个字符是否为小写字母。
//        它接受一个字符作为参数，返回一个非零值（通常是1），表示该字符是小写字母；返回零表示该字符不是小写字母。*/
//    if (islower(myChar)) {
//        std::cout << myChar << " is a lowercase letter." << std::endl;
//    }
//    else {
//        std::cout << myChar << " is not a lowercase letter." << std::endl;
//    }
//   
//
//   /* isupper 函数的使用方式类似于 islower，它接受一个字符作为参数，返回一个非零值（通常是1），
//        表示该字符是大写字母；返回零表示该字符不是大写字母。*/
//    char meChar = 'A';
//    if (isupper(meChar)) {
//        std::cout << meChar << " is an uppercase letter." << std::endl;
//    }
//    else {
//        std::cout << meChar << " is not an uppercase letter." << std::endl;
//    }
//
//    return 0;
//}
//#include <iostream>
//#include <string>
//
//int main() {
//    std::string s = "Hello";
//
//    // 使用范围-based for 循环遍历字符串中的每个字符
//    for (auto& i : s) {
//        std::cout << i << " ";
//    }
//
//    return 0;
//}
//# include<iostream>
//# include<algorithm>
//# include<vector>
//# include<string>
//# include<stack>
//# include<list>
//# include<float.h>
//using namespace std;
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//swap(a, b);  /*交换函数*/
//	//cout << a << ' '<<b;
//	//cout << "\n";
//	//string s="YOU love xxx"; 
//	//reverse(s.begin(), s.end());  /* 反转函数,在大数运算中有使用*/
//	//cout << s<<' ';
//
//
//
//	//vector<int> arr= { 2, 3, 4, 3, 3, 4, 4 };
//	//// 使用 unique 移除相邻的重复元素
//	//auto it = unique(arr.begin(), arr.end());
//	//// 使用 erase 截断多余的元素
//	//arr.erase(it, arr.end());
//	//// 输出结果
//	//for (const auto&i:arr) 
//	//{
//	//	cout << i << ' ';
//	//}
//	//cout << endl;
//	//pair<int, char> p2{ 123, 'a' };  /*利用pair能存储两种不同类型的数据,而且它可以嵌套使用*/
//	//cout << p2.first << '\n';
//	//cout << p2.second << '\n';
//	//std::pair<std::pair<int, double>, std::pair<char, std::string>> nestedPair = 
//	//{
//	//  {42, 3.14},  // 初始化第一个 std::pair
//	//  {'A', "Hello, nested pair!"}  // 初始化第二个 std::pair
//	//};
//	//// 访问嵌套的 std::pair
//	//std::cout << "First - First: " << nestedPair.first.first << std::endl;
//	//std::cout << "First - Second: " << nestedPair.first.second << std::endl;
//	//std::cout << "Second - First: " << nestedPair.second.first << std::endl;
//	//std::cout << "Second - Second: " << nestedPair.second.second << std::endl;
//
//
//
//	//stack<int> myst;   
//	//myst.push(2);   /*向栈中插入元素*/
//	//myst.push(3);
//	//myst.push(5);
//	//myst.push(4);
//	//cout << myst.size() << '\n'; /*获取大小*/
//	//cout << myst.top() << '\n';/*查看栈顶元素*/
//	//myst.pop() ;  /*弹掉栈顶元素,因为不会自动弹*/
//	//cout << myst.top() << '\n';/* 再次查看*/
//
//
//	//list<int>  mylist;
//	//for (int j = 1; j <= 5; j++)
//	//{
//	//	mylist.push_back(j);   /*创建list并且插入1-5*/
//	//}
//	//for (const auto& i : mylist)
//	//{
//	//	cout << i << ' ';    /* 输出看看*/
//	//}
//	///*下面的代码是,清空并且能检查是否清空*/
//	//mylist.clear();
//	//if (mylist.empty())  
//	//{
//	//	cout << "清空了";
//	//}
//	//else
//	//{
//	//	printf("没有清空");
//	//}
//	return 0;
//}

//
//N 皇后问题   bfs必须学的题目
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int x[15] = { 0 };   /*数组 x[15] 用于存储每一行皇后所在的列数。具体来说，x[i] 表示第 i 行皇后所在的列数。
//                     这个数组的长度为 15，是为了容纳可能的 N 皇后问题的解，其中 N 的最大值为 15。*/
//int sum, n;
//int arr[20];
//int PD(intk)
//{
//	for (int i = 1; i < k; i++) {
//		if (abs(k - i) == abs(x[k] - x[i]))
//			return 0;
//		else if (x[k] == x[i])
//			return 0;
//		//即判断是否符合条件来放,i表示皇后所在的行数，x[i]表示所在的列数，
//		//所以前面那个条件用来判断两个皇后是否在对角线上,后面用来判断是否在同一列上。
//		//行数不需要判断，因为他们本身的i就代表的是行数
//	}
//	return 1;
//}
//
//bool check(int a) {
//
//	if (a > n)       
//		sum++;
//	else
//	{
//return 0;
//	}
//		
//	return 1;
//}
//
//void DFS(int a)
//{
//	if (check(a))  /* 如果这是check是假的话,就返回上一个函数*/
//		return;
//	else
//		for (int i = 1; i <= n; i++)     
//		{
//			x[a] = i;
//			//第a个皇后放的列数
//			if (PD(a))
//			{
//				//判断是否能放这步
//				DFS(a + 1);
//				x[a] = 0;
//			}
//			//能的话进行下一个皇后的放置
//			else
//				continue;
//			//不能就下一列
//		}
//}
//int main() {
//	cin >> n;
//	//表示几个皇后
//	DFS(1);
//	//每次都从第一个皇后开始
//	cout << sum << endl;
//	return 0;
//}


//路径之谜  经典题目
//# include<iostream>
//# include<vector>
//
//using namespace std;
//
//struct PII
//{
//    int first;
//    int second;
//};
//vector<PII> res;
//const int N = 30;
//
//int rol[N];
//
//int col[N];
//
//int n;//格子数 长宽从1到n
//
//bool flag[N][N]; //用来标记是否走过
//
//
////---------图的路径搜索常用方向移动表示-------
//
//int dx[4] = { 0,1,-1,0 };
//
//int dy[4] = { 1,0,0,-1 };
//
//// 两两组合形成上下左右四个方向
////      1------------------> x
////      |
////      |
////      |
////      |
////      |
////      |
////      |
////      ↓
////      y
//
//// dx[0]=0 dy[0]=1 那么代表向下的方向
//
//// dx[1]=1 dy[1]=0 那么代表向右的方向
//
//// dx[2]=-1 dy[0]=0 那么代表向左的方向
//
//// dx[3]=0 dy[1]=-1 那么代表向上的方向
//
////--------------------------------------------
//
//bool  check(int x, int y) //判断走过的路径的箭靶数是否与目标相同
//{
//
//    if (x == n && y == n)
//    {
//        for (int i = 1; i <= n; i++)
//        {
//
//            if (col[i] != 0)
//            {
//                return false;
//            }
//            //如果箭靶上的数目不为0，根据逆推，我们通过当前路径得不到箭靶上的结果
//        }
//
//
//        for (int i = 1; i <= n; i++)
//        {
//            if (rol[i] != 0)
//            {
//                return false;
//            }
//            //如果箭靶上的数目不为0，根据逆推，我们通过当前路径得不到箭靶上的结果
//        }
//
//        for (int i = 0; i < res.size(); i++)
//        {
//            int x = res[i].first;
//            //x 轴坐标
//            int y = res[i].second;
//            //y 轴坐标
//
//            int sum = n * (x - 1) + (y - 1);
//            // 通过计算的到为题目要求的坐标系
//
//            cout << sum << " ";
//        }
//        cout << endl;
//
//        return false;
//        // 成功终止
//
//    }
//    return true; //继续搜索
//
//    //关于终止还是继续我们交给判定即可
//}
//
//bool pd(int x2, int y2) //边界判断
//{
//
//    if (flag[x2][y2] == 1)
//        return 0;
//    //已被走过，不能再走，超出边界
//
//    else if (x2 < 1)
//        return 0;
//    //从左侧走出方格
//
//    else if (x2 > n)
//        return 0;
//    //从右侧走出方格
//
//    else if (y2 < 1)
//        return 0;
//    //从上侧走出方格
//
//    else if (y2 > n)
//        return 0;
//    //从下侧走出方格
//
//    else if (col[x2] <= 0)
//        return 0;
//    //没走到右下角，箭用完了
//
//    else if (rol[y2] <= 0)
//        return 0;
//    //没走到右下角，箭用完了
//
//    else return 1;
//    //符合边界条件，可以继续执行搜索
//
//}
//
//void dfs(int x, int y)
//{
//
//    if (!check(x, y))
//    {
//        return;
//        //包含不符合规则的地方，回溯，用于剪枝
//    }
//    else
//    {
//        for (int i = 0; i < 4; i++)
//        {
//            int xt = dx[i] + x;
//            int yt = dy[i] + y;
//
//            //int dx[4]= {0,1,-1,0};
//            // 下,右,左,上;
//            //int dy[4]= {1,0,0,-1};
//            if (!pd(xt, yt))
//            {
//                continue;
//                //不符合要求继续换方向搜索
//            }
//            else
//            {
//                //因为要进行位置转移，我们给它起个名字，叫作案现场
//
//                //比如向下移动
//
//                flag[xt][yt] = true;
//                col[xt]--;
//                rol[yt]--;
//                res.push_back({ xt,yt });
//
//                dfs(xt, yt);
//                //搜索回溯后，因为没有找到正确答案，所以要回复作案现场，返回到搜索之前
//                res.pop_back();
//                flag[xt][yt] = false;
//                col[xt]++;
//                rol[yt]++;
//            }
//        }
//    }
//}
//
//int main()
//{
//    cin >> n;
//
//    for (int i = 1; i <= n; i++)
//        cin >> rol[i];
//
//    for (int i = 1; i <= n; i++)
//        cin >> col[i];
//
//    flag[1][1] = true;
//
//    col[1]--;
//    rol[1]--;
//
//    res.push_back({ 1,1 });
//
//    dfs(1, 1);
//
//    return 0;
//}

//
//bfs 题目 长草



//# include<iostream>
//# include<vector>
//# include<string>
//# include<algorithm>
//# include<queue>
//using namespace std;
//
//const int M = 1005;
//
//struct PII {
//	int first;
//	int second;
//} tempPair;
//
//// C++ 有个数据类型叫 pair 上面的就可以定义为 pair<int,int> 用起来比较方便。
////临时结点
//char Map[M][M];
//
////---------图的路径搜索常用方向移动表示-------
//
//int dx[4] = {0, 1, -1, 0};
//
//int dy[4] = {1, 0, 0, -1};
//
//// 两两组合形成上下左右四个方向
////      1------------------> x
////      |
////      |
////      |
////      |
////      |
////      |
////      |
////      ↓
////      y
//
//// dx[0]=0 dy[0]=1 那么代表向下的方向
//
//// dx[1]=1 dy[1]=0 那么代表向右的方向
//
//// dx[2]=-1 dy[0]=0 那么代表向左的方向
//
//// dx[3]=0 dy[1]=-1 那么代表向上的方向
//
//int n;// n 行
//int m;// m 列
//int k;// k 次
//
//queue<PII > q; //广度优先搜索所用的队列
//
//int len;//记录节点数量方便后续k的计算
//
//bool pd(int x, int y) {
//
//	if (x < 1 || x > n)
//		return 0;
//	// /x 轴坐标 左侧越界
//
//
//	else  if (y < 1 || y > m)
//		return 0;
//
//
//	else if (Map[x][y] == 'g')
//		return false;
//	//已经长草了
//
//	else
//		return 1;
//	// 在范围内，且没长草
//}
//
//void BFS() {
//	//BFS
//	while (!q.empty() && k > 0) {
//		tempPair = q.front();
//		q.pop();
//		//这两步是取出队首的节点
//
//		int x = tempPair.first;//横坐标
//		int y = tempPair.second;//纵坐标
//
//
//		for (int i = 0; i < 4; i++) {
//
//			int nowx = x + dx[i]; //扩展后的横坐标
//			int nowy = y + dy[i]; //扩展后的纵坐标
//
//
//			if (pd(nowx, nowy))
//			{
//
//				q.push({nowx, nowy});
//				Map[nowx][nowy] = 'g';
//			}
//			//符合要求执行扩展，不符合要求，忽略即可。
//
//		}
//
//		len--; //没取出一个节点len  -1
//
//		if (len == 0) {
//			//当len =0 时，代表当前层扩展完了，那么就代表第一个月扩展完了
//
//			k--; // 所以k--
//
//			len = q.size(); // 当前层扩展完了，那就该扩展下一层了，所以len又被赋值为下一层的节点数目的值
//		}
//	}
//
//}
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			cin >> Map[i][j];
//
//			if (Map[i][j] == 'g') {
//				tempPair.first = i;
//				tempPair.second = j;
//				// cout<<i<<""<<j<<endl;
//				q.push(tempPair);//将初始有树的结点加入队列
//			}
//		}
//	}
//	len = q.size();//记录第一层的节点数量方便后续k的计算
//	cin >> k;
//	BFS();
//
//	for (int i = 1; i <= n; i++) {
//
//		for (int j = 1; j <= m; j++) {
//			cout << Map[i][j];
//		}
//
//		cout << endl;
//	}
//
//	return 0;
//}

// 全排列
//# include<bits/stdc++.h>
//
//using namespace std;
//const int N = 10;
//int n;
//int path[N];
//bool st[N];
//void dfs(int u) {
//	if (n == u) {
//		for (int k = 0; k < n; k++) {
//			printf("%d", path[k]);
//		}
//		puts(" ");
//		return ;
//	}
//	for (int i = 1; i <= n; i++)
//{
//		if (!st[i])
// {
//			path[u] = i;
//			st[i] = true;
//			dfs(u + 1);
//			st[i] = false;
//		}
//	}
//
//}
////u==0就是第一层,1是第二层,2是第三层,3就能输出了
//int main() {
//	cin >> n;
//
//
//	dfs(0);
//
//	return 0;
//}

// 组合性枚举
//# include<iostream>
//using namespace std;
//vector<int>  chosen;
//
//int n, m;
//
//void cal(int deep) {
//
//
//	if (chosen.size() > m || chosen.size() + (n - deep + 1) < m) {
//		return;
//	}
//	if (deep == n + 1)
//	{
//		for (int i = 0; i < chosen.size(); i++)
//		{
//			cout << chosen[i] << ' ';
//		}
//		cout << endl;
//		return;
//	}
//	chosen.push_back(deep);
//	cal(deep + 1);
//	chosen.pop_back();
//	cal(deep + 1);
//}
//
//int main() {
//
//	cin >> n >> m;
//	// 从n个中选出m个
//	cal(1);
//	return 0;
//}
// // 字符串的组合型枚举
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int n; //共计N个数
//int m; //选m个数
//vector<string> name;
//vector<string> ans;
//vector<int> chosen;
//void calc(int x)
//{
//
//	if (chosen.size() > m || chosen.size() + (n - x + 1) < m) //剪枝
//		return;
//
//	if (x == n + 1)
//	{ //选够了m个数输出
//		string ansTem = "";
//		for (int i = 0; i < chosen.size(); i++)
//			ansTem += name[chosen[i] - 1] + " ";
//
//		ans.push_back(ansTem);
//		return;
//	}
//	chosen.push_back(x);
//	calc(x + 1);
//
//	chosen.pop_back(); //消除痕迹
//	calc(x + 1);
//
//}
//int main()
//{
//
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		string s;
//		cin >> s;
//		name.push_back(s);
//	}
//	calc(1);
//	for (int i = 0; i < ans.size(); i++)
//		cout << ans[i] << endl;
//}
// 完全背包
//#include <iostream>
//using namespace std;
//int dp[1010][1010];
//int v[1010], w[1010]; //体积和价值
//int main() {
//	int N, V;
//	int i, j;
//	//输入数据
//	cin >> V >> N; //商品个数和背包容量
//	for (i = 1; i <= N; i++) {
//		cin >> v[i] >> w[i]; //体积和价值
//	}
//	for (int i = 1; i <= N; i++) {
//		for (int j = 0; j <= V; j++) {
//			dp[i][j] = dp[i - 1][j];
//			if (j >= v[i]) {
//				dp[i][j] = max(dp[i][j], dp[i][j - v[i]] + w[i]);
//			}
//		}
//	}
//	cout << dp[N][V];
//	return 0;
//}
//
//
//#include <iostream>
//# include<string>
//# include<vector>
//# include<algorithm>
//using namespace std;
//
//int a[5], i, j, sum, t, homework[21], dp[21][2501]; // 修正 dp 数组大小
//
//int main() {
//	for (i = 1; i <= 4; i++)
//		cin >> a[i];
//	for (i = 1; i <= 4; i++) {
//		sum = 0; // 为每个会话初始化 sum
//		for (j = 1; j <= a[i]; j++) {
//			cin >> homework[j]; // 输入
//			sum += homework[j];
//		}
//		for (j = 0; j <= a[i]; j++) { // 修正循环条件
//			for (int k = 0; k <= sum / 2; k++) {
//				dp[j][k] = 0; // 计算前清空 DP 数组
//			}
//		}
//		for (j = 1; j <= a[i]; j++) {
//			for (int k = 0; k <= sum / 2; k++) {
//				dp[j][k] = dp[j - 1][k];
//				if (k >= homework[j]) {
//					dp[j][k] = max(dp[j][k], homework[j] + dp[j - 1][k - homework[j]]);
//				}
//			}
//		}
//		t += sum - dp[a[i]][sum / 2];
//	}
//	cout << t;
//	return 0;
//}
//
//// 最长的,上升的,公共的,子序列长度
//#include <iostream>
// # include<iostream>
//#include <algorithm> //// 包含了max函数
//using namespace std;
//const int N = 3e5 + 20;
//int dp[N] ; // 初始值设为1
//int num[N];
//int n;
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> num[i];
//	}
//
//	int ret = 1; // 最长递增子序列的长度至少为1
//
//	for (int i = 1; i <= n; i++) {
//		dp[i] = 1; // 初始值设为1，表示至少包含自身，即长度为1的子序列
//		for (int j = 1; j < i; j++)
//     {
//			if (num[i] > num[j]) 
//          {
//				dp[i] = max(dp[j] + 1, dp[i]); // 更新最长递增子序列的长度
//			}
//		}
//		ret = max(ret, dp[i]);
//	}
//
//	cout << ret << endl;
//	return 0;
//}

//
////# include<bits/stdc++.h>
//
//# include<iostream>
//# include<vector>
//# include<map>
////  求质因子的   求约数个数  求约数和
//using namespace std;
//
//int n;
//vector<int> v;
//int res = 1;
//map<int, int> mp;
//
//void solve(int x) {
//
//	for (int i = 2; i <= x / i; i++) {
//		if (x % i == 0) {
//			v.push_back(i);
//			while (x % i == 0) {
//				x /= i;
//				mp[i]++;
//			}
//		}
//	}
//	if (x > 1) {
//		v.push_back(x);
//		mp[x]++;
//	}
//}
//
//
//int main() {
//	cin >> n;
//	solve(n);
////
////	for (auto &i : v) {
////		cout << i << ' ';
////	}
////	cout << endl;
// //求个数的
////	for (auto &i : mp)
////{
////		res = res * (i.second + 1);
////	}
////	cout << res;
//long long num1=0;
//for (auto &i:mp)
//{
//	int p=i.first;
//	int a=i.second;
//	long long t=1;
//	while(a--)
//	{
//		t=(t*p+1);
//	}
//	num1=num1*t;
//}
//cout<<num1;
//	return 0;
//}

//# include<bits/stdc++.h>

# include<iostream>
# include<vector>
# include<map>
//  求质因子的   求约数个数  求约数和
using namespace std;

int n;
vector<int> v;
int res = 1;
map<int, int> mp;

void solve(int x) {

	for (int i = 2; i <= x / i; i++) {
		if (x % i == 0) {
			v.push_back(i);
			while (x % i == 0) {
				x /= i;
				mp[i]++;
			}
		}
	}
	if (x > 1) {
		v.push_back(x);
		mp[x]++;
	}
	for (auto& i : mp) {
		res = res * (i.second + 1);
	}
	cout << res;
}


int main() {
	cin >> n;
	solve(n);

	//	for (auto &i : v) {
	//		cout << i << ' ';
	//	}
	//	cout << endl;
	// 求个数的

	//long long num1=0;
	//for (auto &i:mp)
	//{
	//	int p=i.first;
	//	int a=i.second;
	//	long long t=1;
	//	while(a--)
	//	{
	//		t=(t*p+1);
	//	}
	//	num1=num1*t;
	//}
	//cout<<num1;
	return 0;
}


// 进制转换
//#include <iostream>
//# include<bits/stdc++.h>
//using namespace std;
//
//int main() {
////	string s = "2022";(某进制转10进制)
////	int a[4];
////	// 将字符形式转化为整数形式
////  for (int i = 0; i < 4; i++)
////  {
////		if (s[i] <= '9'&& s[i] >= '0')
////			a[i] = s[i] - '0';
////		else
////			a[i] = s[i] - 10 + 'A';
////  }
////	long long x = 0;
////	for (int i = 0; i < 4; i++)
////  {
////		x = x * 9 + a[i];
////	}
////	// 输出结果
////	cout << x << endl;


// 短除法的原理(10进制转某进制)
//	int num[100];
//	int x = 11;
//	int cnt = 0;
//	while (x) {
//	num[++cnt] = x % 2;
//	x /= 2;
//	}
//	reverse(num + 1, num + 1 + cnt);
//	for (int i = 1; i <= cnt; i++) {
//		cout << num[i];
//	}
//	return 0;
//}

// 差分
//# include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6;
//int d[N];
//int num[N];
//int sum[N];
//int n, p, q;
//
//// 差分操作，将区间 [x, y] 内的元素加上 z
//void add(int x, int y, int z) {
//	d[x] += z;
//	d[y + 1] -= z;
//}
//
//int main() {
//	// 输入 n, p, q
//	cin >> n >> p >> q;
//
//	// 输入 num 数组的值
//	for (int i = 1; i <= n; i++) {
//		cin >> num[i];
//	}
//
//	// 进行 p 次差分操作
//	while (p--) {
//		int l, r, v;
//		cin >> l >> r >> v;
//		// 确保 l 和 r 合法
//		if (l >= 1 && l <= r && r <= n)
//			add(l, r, v);
//	}
//
//	// 根据差分数组 d 更新原数组 num
//	for (int i = 1; i <= n; i++) {
//		d[i] = d[i - 1] + d[i];
//
//	}
//	for (int i = 1; i <= n; i++)
//		num[i] = num[i] + d[i];
//	// 计算前缀和数组 sum
//	for (int i = 1; i <= n; i++) {
//		sum[i] = sum[i - 1] + num[i];
//	}
//
//	// 进行 q 次查询操作
//	while (q--) {
//		int g, h;
//		cin >> g >> h;
//		// 确保 g 和 h 合法
//		cout << sum[h] - sum[g - 1] << endl;
//	}
//
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//bool vis[2000005];
// 爱氏筛法
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 2; i <= n; i++)
//    {
//		if (!vis[i]) {
//			for (int j = 2 * i; j <= n; j = j + i)
//				vis[j] = true;
//		}
//	}
//	for (int i = 2; i <= n; i++) {
//		if (vis[i] == false) {
//			cout << i << " ";
//		}
//	}
//	return 0;
//}

 // 三维数组的dp
//#include <iostream>
//using namespace std;
//long long dp[2023][11][2023];
//
//int main() {
//	// 初始化 dp 数组
//	for (int i = 0; i <= 2022; i++) {
//		for (int j = 0; j <= 10; j++) {
//			for (int k = 0; k <= 2022; k++) {
//				dp[i][j][k] = 0;
//			}
//		}
//	}
//
//	// 边界情况处理
//	for (int j = 0; j <= 10; j++) {
//		dp[0][j][0] = 1;
//	}
//
//	// 动态规划过程
//	for (int i = 1; i <= 2022; i++) {
//		for (int j = 1; j <= 10; j++) {
//			for (int k = 1; k <= 2022; k++) {
//				if (k > i) {
//					dp[i][j][k] = dp[i - 1][j][k];
//				}
//				else {
//					dp[i][j][k] = dp[i - 1][j - 1][k - i] + dp[i - 1][j][k];
//				}
//			}
//		}
//	}
//
//	cout << dp[2022][10][2022];
//	return 0;
//}
// 
// // 求组合数的函数
//# include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll p = 1e9 + 7;
//int n, a, b;
//ll qm(ll a, ll b, ll p) {
//	ll res = 1;
//	while (b) {
//		if (b & 1) {
//			res = (res * a) % p;
//		}
//		b = b >> 1;
//		a = a * a % p;
//	}
//	return res;
//}
//ll C(ll n, ll m)
//{
//	ll res = 1;
//	for (ll i = n; i >= n - m + 1; i--)
//	{
//		res = (res * i) % p;
//	}
//	for (ll i = 1; i <= m; i++)
//	{
//		res = (res * qm(i, p - 2, p)) % p;
//	}
//	return res;
//}
//int main() {
//	cin >> n >> a >> b;
//	ll ans = (qm(2, n, p) - 1 - C(n, a) - C(n, b)) % p;
//	(ans % p + p) % p;
//	cout << ans;
//	return 0;
//}
//四舍五入原理
//
//#include<bits/stdc++.h>    //45
//#define int long long 
//const int N = 1e9 + 10;
//using namespace std;
//signed main()
//{
//	int n; cin >> n;
//	int g = n % 10;
//	if (g >= 5)
//	{
//		n = n + 10 - g;
//		cout << n;
//	}
//	else
//	{
//		n = n - g;
//		cout << n;
//	}
//	return 0;
//}  