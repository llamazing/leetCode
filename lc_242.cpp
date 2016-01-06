class Solution {
public:
    bool isAnagram(string s, string t) {
		
		if(s.size() != t.size())
			return false;
		char * s_c = new char [s.size() + 1];
		char * t_c = new char [t.size() + 1];
		strcpy(s_c, s.c_str());
		strcpy(t_c, t.c_str());
		s_c[s.size()] = '/0';
		t_c[s.size()] = '/0';
		
		sort(s_c,  s_c + s.size());
		sort(t_c,  t_c + s.size());

		int i = 0;

		for( ; i < s.size(); ++i)
		{
			if( s_c[i] != t_c[i])
				return false;			
		}

		return true;        
    }
};

