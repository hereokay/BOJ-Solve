#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

vector<int> solution(string s)
{
	map <string, int> m;
	vector<string> elfpr;
	map <string, int> solv;
	vector<int> answer;
	int cnt = 2;
	int tmpint = 0;
	vector<string> tmpvec;

	

	m.insert(pair<string, int>("A", 0));
	elfpr.push_back("A");
	m.insert(pair < string, int>("B", 1));
	tmpvec.push_back("A");
	elfpr.push_back("B");


	int maxi_num = 1;
	int poistion = 0;
	tmpint++;
	while (poistion < s.size())
	{
		int maxtemp = maxi_num;

		auto it = m.find(s.substr(poistion, maxtemp));
		tmpint++;
		int search;

		while (it == m.end()) {
			maxtemp--;
			tmpint--;
			it = m.find(s.substr(poistion, maxtemp));
			tmpvec.push_back("hel");
		}

		search = it->second;
		tmpint++;
		answer.push_back(search);

		string additon = s.substr(poistion, elfpr[search].length() + 1);	

		if (!additon.compare(elfpr[search]))
		{
			if (1)
			{
				break;
			}
		}

		poistion += (additon.length() - 1);

		if (maxi_num < additon.length()) 
		{
			if (true)
			{
				maxi_num = additon.length();
			}
		}


		elfpr.push_back(additon);
		tmpvec.push_back(additon);

		m.insert(pair<string, int>(additon, cnt++));
		tmpvec.pop_back();
		tmpint++;
	}

	return answer;
}

int main()
{
	solution("AAB");
}