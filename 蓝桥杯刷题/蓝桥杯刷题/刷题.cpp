//#include <iostream>
//using namespace std;
//int main() {
//	// ���ڴ��������Ĵ���
//
//	int date[200];
//	for (int i = 0; i < 200; i++)
//		date[i] = 4 * i + 6;
//	int target;
//	cin >> target;
//	cout << (lower_bound(date, date + 200, target) - date);
//	 /*����һ�����Һ���,���ҵ���һ�����ڵ���target��ֵ�ĵ�ַ,��ȥ��һ����ַ�����±���*/
//	return 0;
//}
//#include <iostream>
//#include <cctype>
//
//int main() {
//    char myChar = 'a';
//   /* islower �� C++ ��׼�� <cctype> ͷ�ļ��еĺ��������ڼ��һ���ַ��Ƿ�ΪСд��ĸ��
//        ������һ���ַ���Ϊ����������һ������ֵ��ͨ����1������ʾ���ַ���Сд��ĸ���������ʾ���ַ�����Сд��ĸ��*/
//    if (islower(myChar)) {
//        std::cout << myChar << " is a lowercase letter." << std::endl;
//    }
//    else {
//        std::cout << myChar << " is not a lowercase letter." << std::endl;
//    }
//   
//
//   /* isupper ������ʹ�÷�ʽ������ islower��������һ���ַ���Ϊ����������һ������ֵ��ͨ����1����
//        ��ʾ���ַ��Ǵ�д��ĸ���������ʾ���ַ����Ǵ�д��ĸ��*/
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
//    // ʹ�÷�Χ-based for ѭ�������ַ����е�ÿ���ַ�
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
//	//swap(a, b);  /*��������*/
//	//cout << a << ' '<<b;
//	//cout << "\n";
//	//string s="YOU love xxx"; 
//	//reverse(s.begin(), s.end());  /* ��ת����,�ڴ�����������ʹ��*/
//	//cout << s<<' ';
//
//
//
//	//vector<int> arr= { 2, 3, 4, 3, 3, 4, 4 };
//	//// ʹ�� unique �Ƴ����ڵ��ظ�Ԫ��
//	//auto it = unique(arr.begin(), arr.end());
//	//// ʹ�� erase �ض϶����Ԫ��
//	//arr.erase(it, arr.end());
//	//// ������
//	//for (const auto&i:arr) 
//	//{
//	//	cout << i << ' ';
//	//}
//	//cout << endl;
//	//pair<int, char> p2{ 123, 'a' };  /*����pair�ܴ洢���ֲ�ͬ���͵�����,����������Ƕ��ʹ��*/
//	//cout << p2.first << '\n';
//	//cout << p2.second << '\n';
//	//std::pair<std::pair<int, double>, std::pair<char, std::string>> nestedPair = 
//	//{
//	//  {42, 3.14},  // ��ʼ����һ�� std::pair
//	//  {'A', "Hello, nested pair!"}  // ��ʼ���ڶ��� std::pair
//	//};
//	//// ����Ƕ�׵� std::pair
//	//std::cout << "First - First: " << nestedPair.first.first << std::endl;
//	//std::cout << "First - Second: " << nestedPair.first.second << std::endl;
//	//std::cout << "Second - First: " << nestedPair.second.first << std::endl;
//	//std::cout << "Second - Second: " << nestedPair.second.second << std::endl;
//
//
//
//	//stack<int> myst;   
//	//myst.push(2);   /*��ջ�в���Ԫ��*/
//	//myst.push(3);
//	//myst.push(5);
//	//myst.push(4);
//	//cout << myst.size() << '\n'; /*��ȡ��С*/
//	//cout << myst.top() << '\n';/*�鿴ջ��Ԫ��*/
//	//myst.pop() ;  /*����ջ��Ԫ��,��Ϊ�����Զ���*/
//	//cout << myst.top() << '\n';/* �ٴβ鿴*/
//
//
//	//list<int>  mylist;
//	//for (int j = 1; j <= 5; j++)
//	//{
//	//	mylist.push_back(j);   /*����list���Ҳ���1-5*/
//	//}
//	//for (const auto& i : mylist)
//	//{
//	//	cout << i << ' ';    /* �������*/
//	//}
//	///*����Ĵ�����,��ղ����ܼ���Ƿ����*/
//	//mylist.clear();
//	//if (mylist.empty())  
//	//{
//	//	cout << "�����";
//	//}
//	//else
//	//{
//	//	printf("û�����");
//	//}
//	return 0;
//}

//
//N �ʺ�����   bfs����ѧ����Ŀ
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int x[15] = { 0 };   /*���� x[15] ���ڴ洢ÿһ�лʺ����ڵ�������������˵��x[i] ��ʾ�� i �лʺ����ڵ�������
//                     �������ĳ���Ϊ 15����Ϊ�����ɿ��ܵ� N �ʺ�����Ľ⣬���� N �����ֵΪ 15��*/
//int sum, n;
//int arr[20];
//int PD(intk)
//{
//	for (int i = 1; i < k; i++) {
//		if (abs(k - i) == abs(x[k] - x[i]))
//			return 0;
//		else if (x[k] == x[i])
//			return 0;
//		//���ж��Ƿ������������,i��ʾ�ʺ����ڵ�������x[i]��ʾ���ڵ�������
//		//����ǰ���Ǹ����������ж������ʺ��Ƿ��ڶԽ�����,���������ж��Ƿ���ͬһ���ϡ�
//		//��������Ҫ�жϣ���Ϊ���Ǳ����i�ʹ����������
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
//	if (check(a))  /* �������check�ǼٵĻ�,�ͷ�����һ������*/
//		return;
//	else
//		for (int i = 1; i <= n; i++)     
//		{
//			x[a] = i;
//			//��a���ʺ�ŵ�����
//			if (PD(a))
//			{
//				//�ж��Ƿ��ܷ��ⲽ
//				DFS(a + 1);
//				x[a] = 0;
//			}
//			//�ܵĻ�������һ���ʺ�ķ���
//			else
//				continue;
//			//���ܾ���һ��
//		}
//}
//int main() {
//	cin >> n;
//	//��ʾ�����ʺ�
//	DFS(1);
//	//ÿ�ζ��ӵ�һ���ʺ�ʼ
//	cout << sum << endl;
//	return 0;
//}


//·��֮��  ������Ŀ
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
//int n;//������ �����1��n
//
//bool flag[N][N]; //��������Ƿ��߹�
//
//
////---------ͼ��·���������÷����ƶ���ʾ-------
//
//int dx[4] = { 0,1,-1,0 };
//
//int dy[4] = { 1,0,0,-1 };
//
//// ��������γ����������ĸ�����
////      1------------------> x
////      |
////      |
////      |
////      |
////      |
////      |
////      |
////      ��
////      y
//
//// dx[0]=0 dy[0]=1 ��ô�������µķ���
//
//// dx[1]=1 dy[1]=0 ��ô�������ҵķ���
//
//// dx[2]=-1 dy[0]=0 ��ô��������ķ���
//
//// dx[3]=0 dy[1]=-1 ��ô�������ϵķ���
//
////--------------------------------------------
//
//bool  check(int x, int y) //�ж��߹���·���ļ������Ƿ���Ŀ����ͬ
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
//            //��������ϵ���Ŀ��Ϊ0���������ƣ�����ͨ����ǰ·���ò��������ϵĽ��
//        }
//
//
//        for (int i = 1; i <= n; i++)
//        {
//            if (rol[i] != 0)
//            {
//                return false;
//            }
//            //��������ϵ���Ŀ��Ϊ0���������ƣ�����ͨ����ǰ·���ò��������ϵĽ��
//        }
//
//        for (int i = 0; i < res.size(); i++)
//        {
//            int x = res[i].first;
//            //x ������
//            int y = res[i].second;
//            //y ������
//
//            int sum = n * (x - 1) + (y - 1);
//            // ͨ������ĵ�Ϊ��ĿҪ�������ϵ
//
//            cout << sum << " ";
//        }
//        cout << endl;
//
//        return false;
//        // �ɹ���ֹ
//
//    }
//    return true; //��������
//
//    //������ֹ���Ǽ������ǽ����ж�����
//}
//
//bool pd(int x2, int y2) //�߽��ж�
//{
//
//    if (flag[x2][y2] == 1)
//        return 0;
//    //�ѱ��߹����������ߣ������߽�
//
//    else if (x2 < 1)
//        return 0;
//    //������߳�����
//
//    else if (x2 > n)
//        return 0;
//    //���Ҳ��߳�����
//
//    else if (y2 < 1)
//        return 0;
//    //���ϲ��߳�����
//
//    else if (y2 > n)
//        return 0;
//    //���²��߳�����
//
//    else if (col[x2] <= 0)
//        return 0;
//    //û�ߵ����½ǣ���������
//
//    else if (rol[y2] <= 0)
//        return 0;
//    //û�ߵ����½ǣ���������
//
//    else return 1;
//    //���ϱ߽����������Լ���ִ������
//
//}
//
//void dfs(int x, int y)
//{
//
//    if (!check(x, y))
//    {
//        return;
//        //���������Ϲ���ĵط������ݣ����ڼ�֦
//    }
//    else
//    {
//        for (int i = 0; i < 4; i++)
//        {
//            int xt = dx[i] + x;
//            int yt = dy[i] + y;
//
//            //int dx[4]= {0,1,-1,0};
//            // ��,��,��,��;
//            //int dy[4]= {1,0,0,-1};
//            if (!pd(xt, yt))
//            {
//                continue;
//                //������Ҫ���������������
//            }
//            else
//            {
//                //��ΪҪ����λ��ת�ƣ����Ǹ���������֣��������ֳ�
//
//                //���������ƶ�
//
//                flag[xt][yt] = true;
//                col[xt]--;
//                rol[yt]--;
//                res.push_back({ xt,yt });
//
//                dfs(xt, yt);
//                //�������ݺ���Ϊû���ҵ���ȷ�𰸣�����Ҫ�ظ������ֳ������ص�����֮ǰ
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
//bfs ��Ŀ ����



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
//// C++ �и��������ͽ� pair ����ľͿ��Զ���Ϊ pair<int,int> �������ȽϷ��㡣
////��ʱ���
//char Map[M][M];
//
////---------ͼ��·���������÷����ƶ���ʾ-------
//
//int dx[4] = {0, 1, -1, 0};
//
//int dy[4] = {1, 0, 0, -1};
//
//// ��������γ����������ĸ�����
////      1------------------> x
////      |
////      |
////      |
////      |
////      |
////      |
////      |
////      ��
////      y
//
//// dx[0]=0 dy[0]=1 ��ô�������µķ���
//
//// dx[1]=1 dy[1]=0 ��ô�������ҵķ���
//
//// dx[2]=-1 dy[0]=0 ��ô��������ķ���
//
//// dx[3]=0 dy[1]=-1 ��ô�������ϵķ���
//
//int n;// n ��
//int m;// m ��
//int k;// k ��
//
//queue<PII > q; //��������������õĶ���
//
//int len;//��¼�ڵ������������k�ļ���
//
//bool pd(int x, int y) {
//
//	if (x < 1 || x > n)
//		return 0;
//	// /x ������ ���Խ��
//
//
//	else  if (y < 1 || y > m)
//		return 0;
//
//
//	else if (Map[x][y] == 'g')
//		return false;
//	//�Ѿ�������
//
//	else
//		return 1;
//	// �ڷ�Χ�ڣ���û����
//}
//
//void BFS() {
//	//BFS
//	while (!q.empty() && k > 0) {
//		tempPair = q.front();
//		q.pop();
//		//��������ȡ�����׵Ľڵ�
//
//		int x = tempPair.first;//������
//		int y = tempPair.second;//������
//
//
//		for (int i = 0; i < 4; i++) {
//
//			int nowx = x + dx[i]; //��չ��ĺ�����
//			int nowy = y + dy[i]; //��չ���������
//
//
//			if (pd(nowx, nowy))
//			{
//
//				q.push({nowx, nowy});
//				Map[nowx][nowy] = 'g';
//			}
//			//����Ҫ��ִ����չ��������Ҫ�󣬺��Լ��ɡ�
//
//		}
//
//		len--; //ûȡ��һ���ڵ�len  -1
//
//		if (len == 0) {
//			//��len =0 ʱ������ǰ����չ���ˣ���ô�ʹ����һ������չ����
//
//			k--; // ����k--
//
//			len = q.size(); // ��ǰ����չ���ˣ��Ǿ͸���չ��һ���ˣ�����len�ֱ���ֵΪ��һ��Ľڵ���Ŀ��ֵ
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
//				q.push(tempPair);//����ʼ�����Ľ��������
//			}
//		}
//	}
//	len = q.size();//��¼��һ��Ľڵ������������k�ļ���
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

// ȫ����
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
////u==0���ǵ�һ��,1�ǵڶ���,2�ǵ�����,3���������
//int main() {
//	cin >> n;
//
//
//	dfs(0);
//
//	return 0;
//}

// �����ö��
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
//	// ��n����ѡ��m��
//	cal(1);
//	return 0;
//}
// // �ַ����������ö��
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int n; //����N����
//int m; //ѡm����
//vector<string> name;
//vector<string> ans;
//vector<int> chosen;
//void calc(int x)
//{
//
//	if (chosen.size() > m || chosen.size() + (n - x + 1) < m) //��֦
//		return;
//
//	if (x == n + 1)
//	{ //ѡ����m�������
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
//	chosen.pop_back(); //�����ۼ�
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
// ��ȫ����
//#include <iostream>
//using namespace std;
//int dp[1010][1010];
//int v[1010], w[1010]; //����ͼ�ֵ
//int main() {
//	int N, V;
//	int i, j;
//	//��������
//	cin >> V >> N; //��Ʒ�����ͱ�������
//	for (i = 1; i <= N; i++) {
//		cin >> v[i] >> w[i]; //����ͼ�ֵ
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
//int a[5], i, j, sum, t, homework[21], dp[21][2501]; // ���� dp �����С
//
//int main() {
//	for (i = 1; i <= 4; i++)
//		cin >> a[i];
//	for (i = 1; i <= 4; i++) {
//		sum = 0; // Ϊÿ���Ự��ʼ�� sum
//		for (j = 1; j <= a[i]; j++) {
//			cin >> homework[j]; // ����
//			sum += homework[j];
//		}
//		for (j = 0; j <= a[i]; j++) { // ����ѭ������
//			for (int k = 0; k <= sum / 2; k++) {
//				dp[j][k] = 0; // ����ǰ��� DP ����
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
//// ���,������,������,�����г���
//#include <iostream>
// # include<iostream>
//#include <algorithm> //// ������max����
//using namespace std;
//const int N = 3e5 + 20;
//int dp[N] ; // ��ʼֵ��Ϊ1
//int num[N];
//int n;
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> num[i];
//	}
//
//	int ret = 1; // ����������еĳ�������Ϊ1
//
//	for (int i = 1; i <= n; i++) {
//		dp[i] = 1; // ��ʼֵ��Ϊ1����ʾ���ٰ�������������Ϊ1��������
//		for (int j = 1; j < i; j++)
//     {
//			if (num[i] > num[j]) 
//          {
//				dp[i] = max(dp[j] + 1, dp[i]); // ��������������еĳ���
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
////  �������ӵ�   ��Լ������  ��Լ����
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
// //�������
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
//  �������ӵ�   ��Լ������  ��Լ����
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
	// �������

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


// ����ת��
//#include <iostream>
//# include<bits/stdc++.h>
//using namespace std;
//
//int main() {
////	string s = "2022";(ĳ����ת10����)
////	int a[4];
////	// ���ַ���ʽת��Ϊ������ʽ
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
////	// ������
////	cout << x << endl;


// �̳�����ԭ��(10����תĳ����)
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

// ���
//# include<bits/stdc++.h>
//using namespace std;
//const int N = 1e6;
//int d[N];
//int num[N];
//int sum[N];
//int n, p, q;
//
//// ��ֲ����������� [x, y] �ڵ�Ԫ�ؼ��� z
//void add(int x, int y, int z) {
//	d[x] += z;
//	d[y + 1] -= z;
//}
//
//int main() {
//	// ���� n, p, q
//	cin >> n >> p >> q;
//
//	// ���� num �����ֵ
//	for (int i = 1; i <= n; i++) {
//		cin >> num[i];
//	}
//
//	// ���� p �β�ֲ���
//	while (p--) {
//		int l, r, v;
//		cin >> l >> r >> v;
//		// ȷ�� l �� r �Ϸ�
//		if (l >= 1 && l <= r && r <= n)
//			add(l, r, v);
//	}
//
//	// ���ݲ������ d ����ԭ���� num
//	for (int i = 1; i <= n; i++) {
//		d[i] = d[i - 1] + d[i];
//
//	}
//	for (int i = 1; i <= n; i++)
//		num[i] = num[i] + d[i];
//	// ����ǰ׺������ sum
//	for (int i = 1; i <= n; i++) {
//		sum[i] = sum[i - 1] + num[i];
//	}
//
//	// ���� q �β�ѯ����
//	while (q--) {
//		int g, h;
//		cin >> g >> h;
//		// ȷ�� g �� h �Ϸ�
//		cout << sum[h] - sum[g - 1] << endl;
//	}
//
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//bool vis[2000005];
// ����ɸ��
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

 // ��ά�����dp
//#include <iostream>
//using namespace std;
//long long dp[2023][11][2023];
//
//int main() {
//	// ��ʼ�� dp ����
//	for (int i = 0; i <= 2022; i++) {
//		for (int j = 0; j <= 10; j++) {
//			for (int k = 0; k <= 2022; k++) {
//				dp[i][j][k] = 0;
//			}
//		}
//	}
//
//	// �߽��������
//	for (int j = 0; j <= 10; j++) {
//		dp[0][j][0] = 1;
//	}
//
//	// ��̬�滮����
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
// // ��������ĺ���
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
//��������ԭ��
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