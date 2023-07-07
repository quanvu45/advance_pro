bool isEqualCaseInsensitive(string s1, string s2){
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    if(s1.compare(s2)==0){
        return true;
    }else{
        return false;
    }
}