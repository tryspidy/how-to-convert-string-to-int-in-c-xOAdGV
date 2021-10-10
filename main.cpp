string s = "123";
int n = s.size();
int num = 0;
 for(int i = 0 ; i<n;i++)//this what stoi built function do XD
 {
  num = num*10+(s[i]-'0');
 }