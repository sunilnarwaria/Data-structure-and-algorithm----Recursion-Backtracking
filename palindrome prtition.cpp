  bool ispalin(string s){
      int li =0;
      int ri = s.size()-1;
      while(li<ri){
          char left = s[li];
          char right = s[ri];
          if(left != right){
              return false;
          }
          li++;
          ri--;
      }
      return true;
  }
 void fun(string s,vector<vector<string>> &v,vector<string> &v1){
      
      if(s.size() == 0){
          v.push_back(v1);
        //  v1.clear();
          return;
      }
     for(int i = 0;i<s.size();i++){
         string pfx = s.substr(0,i+1);
         string ros = s.substr(i+1);
         if(ispalin(pfx)){
             v1.push_back(pfx);
             fun(ros,v,v1);
             v1.pop_back();
         }
     }
 }
vector<vector<string> > Solution::partition(string str) {
    
    vector<vector<string>>v;
    vector<string> v1;
    fun(str,v,v1);
    return v;
}


